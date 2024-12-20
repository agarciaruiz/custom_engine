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

#ifdef CE_ENABLE_ASSERTS
	#define CE_ASSERT(x, ...) { if(!(x)) {CE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(): } }
	#define CE_CORE_ASSERT(x, ...) { if(!(x)) {CE_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(): } }
#else
	#define CE_ASSERT(x, ...) 
	#define CE_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1<<x)