#pragma once

#if defined(_WIN32) || defined(_WIN64)
	#define BULLETENGINE_PLATFORM_WINDOWS
#elif defined(__APPLE__)
	#define BULLETENGINE_PLATFORM_APPLE
#elif defined(__linux__)
	#define BULLETENGINE_PLATFORM_LINUX
#endif

#ifdef BULLETENGINE_PLATFORM_WINDOWS
	#if defined(BULLETENGINE_BUILD_DLL)
		#define BULLETENGINE_API __declspec(dllexport)
	#else
		#define BULLETENGINE_API __declspec(dllimport)
	#endif
#else
	#define BULLETENGINE_API
#endif