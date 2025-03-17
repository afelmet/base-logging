#ifndef _BASE_SINGLETON_H_
#define _BASE_SINGLETON_H_

namespace base {

template<class Derived>
class Singleton
{

private:
	static Derived& msInstance;

protected:
	Singleton() {}
  Singleton(const Singleton&) = delete;
  Singleton& operator=(const Singleton&) = delete;

public:
	[[nodiscard]] static Derived& getInstance()
	{
		static Derived msInstance;
    return msInstance;
	}
	
};

} // end namespace base;


#endif // _BASE_SINGLETON_H_
