#pragma once

#ifdef TI_PLATFORM_WINDOWS
	#ifdef TI_BUILD_DLL
		#define TITANIUM_API __declspec(dllexport)
	#else
		#define TITANIUM_API __declspec(dllimport)
	#endif
#else
	#error Titanium Engine only supports Windows!
#endif