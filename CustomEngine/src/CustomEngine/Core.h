#pragma once

#ifdef CE_PLATFORM_WINDOWS
	// When building the DLL
	#ifdef CE_BUILD_DLL
		#define CE_API __declspec(dllexport)
	// When using the DLL
	#else
		#define CE_API __declspec(dllimport)
	#endif
#else
	#error Custom Engine only supports Windows.
#endif