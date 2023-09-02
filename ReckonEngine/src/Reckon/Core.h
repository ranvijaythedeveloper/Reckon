#pragma once
#ifdef RCK_PLATFORM_WINDOWS
	#ifdef RCK_BUILD_DLL
		#define RCK_API __declspec(dllexport)
	#else
		#define RCK_API __declspec(dllimport)
	#endif
#else 
#error RCK Only Supports Windows
#endif

#ifdef RCK_ENABLE_ASSERTS
	#define RCK_ASSERT(x, ...) {if(!(x)) {RCK_ERROR("Assertion Failed: {0}",__VA_ARGS__); __debugbreak(); } }
	#define RCK_CORE_ASSERT(x, ...) {if(!(x)) {RCK_CORE_ERROR("Assertion Failed: {0}",__VA_ARGS__); __debugbreak(); } }
#else
#define RCK_ASSERT(x, ...)
#define RCK_CORE_ASSERT(x, ...)
#endif
#define BIT(x) (1 << x)