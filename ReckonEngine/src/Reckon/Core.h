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

#define BIT(x) (1 << x)