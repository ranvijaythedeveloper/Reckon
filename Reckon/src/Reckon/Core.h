#pragma once

#ifdef RCK_PLATFORM_WINDOWS
	#ifdef RCK_BUILD_DLL
		#define RECKON_API __declspec(dllexport)
	#else
		#define RECKON_API __declspec(dllexport)
	#endif	
#else
	#error Reckon only supports windows
#endif
