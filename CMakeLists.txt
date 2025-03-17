cmake_minimum_required(VERSION 3.10)
project(base_logging)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Define sources and headers
set(BASE_LOGGING_SOURCES
    src/logging/logging_printf_style.cpp
)
set(BASE_LOGGING_HEADERS
    src/logging/Logging.hpp
    src/logging/logging_printf_style.h
    src/logging/logging_iostream_style.h
    src/logging/Singleton.hpp
)

# Enable all warnings for space-qualification
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror -Wconversion -Wsign-conversion -Wshadow -Wfloat-equal -Wnull-dereference -Wformat -Wcast-align -Wpointer-arith -Wunused-result")

# Create the base_logging library
add_library(base_logging ${BASE_LOGGING_SOURCES} ${BASE_LOGGING_HEADERS})
target_include_directories(base_logging PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Optionally, generate a pkg-config file if needed
configure_file(base_logging.pc.in ${CMAKE_BINARY_DIR}/base_logging.pc @ONLY)
install(FILES ${CMAKE_BINARY_DIR}/base_logging.pc DESTINATION lib/pkgconfig)

# Install library and headers
install(TARGETS base_logging
    EXPORT base_logging-config
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)
install(FILES ${BASE_LOGGING_HEADERS}
    DESTINATION include/base-logging/logging
)
