/*
 * terminal_colors.h
 *
 *  Created on: 12.03.2009
 *      Author: Steffen Planthaber
 *
 *      http://www.termsys.demon.co.uk/vtansi.htm


    Set Attribute Mode	<ESC>[{attr1};...;{attrn}m

    Sets multiple display attribute settings. The following lists standard attributes:

    0	Reset all attributes
    1	Bright
    2	Dim
    4	Underscore
    5	Blink
    7	Reverse
    8	Hidden

    Foreground Colours
    30	Black
    31	Red
    32	Green
    33	Yellow
    34	Blue
    35	Magenta
    36	Cyan
    37	White

    Background Colours
    40	Black
    41	Red
    42	Green
    43	Yellow
    44	Blue
    45	Magenta
    46	Cyan
    47	White

 *
 *
 */

#ifndef COLORS_H_
#define COLORS_H_

namespace base {

    namespace logging {

        namespace colors {

            namespace MODE {
                const char* NORMAL    = "\033[0m";
                const char* BOLD      = "\033[1;1m"; // bold
                const char* LIGHT     = "\033[1;2m"; // decreased intensity
                const char* UNDERLINE = "\033[1;4m"; // underlined
                const char* INVERT    = "\033[1;7m"; // inverts fg and bg colours
                const char* CONCEAL   = "\033[1;8m"; // conceals/hides text
                const char* SCORED    = "\033[1;9m"; // crossed-out
            }

            namespace FG {
                const char* DARKGREY    = "\033[1;30m";
                const char* DARKRED     = "\033[1;31m";
                const char* DARKGREEN   = "\033[1;32m";
                const char* DARKYELLOW  = "\033[1;33m";
                const char* DARKBLUE    = "\033[1;34m";
                const char* DARKVIOLET  = "\033[1;35m";
                const char* LIGHTBLUE   = "\033[1;36m";
                const char* WHITE       = "\033[1;37m";
                const char* BLACK       = "\033[1;38m";
                const char* MIDGREY     = "\033[1;90m";
                const char* LIGHTRED    = "\033[1;91m";
                const char* LIGHTGREEN  = "\033[1;92m";
                const char* LIGHTYELLOW = "\033[1;93m";
                const char* LIGHTVIOLET = "\033[1;95m";
            }

            namespace BG {
                const char* DARKGREY    = "\033[1;40m";
                const char* DARKRED     = "\033[1;41m";
                const char* DARKGREEN   = "\033[1;42m";
                const char* DARKYELLOW  = "\033[1;43m";
                const char* DARKBLUE    = "\033[1;44m";
                const char* DARKVIOLET  = "\033[1;45m";
                const char* DARKBLUE2   = "\033[1;46m";
                const char* LIGHTGREY   = "\033[1;47m";
                const char* MIDGREY     = "\033[1;100m";
                const char* LIGHTRED    = "\033[1;101m";
                const char* LIGHTGREEN  = "\033[1;102m";
                const char* LIGHTYELLOW = "\033[1;103m";
                const char* LIGHTBLUE   = "\033[1;104m";
                const char* LIGHTVIOLET = "\033[1;105m";
                const char* LIGHTBLUE2  = "\033[1;106m";
            }

        }

    }

}

#endif

