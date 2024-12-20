#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace CustomEngine
{
	class CE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetEngineLogger() { return s_EngineLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
		static std::shared_ptr<spdlog::logger> s_EngineLogger;
	};
}


//Engine log macros
#define CE_CORE_TRACE(...) ::CustomEngine::Log::GetEngineLogger()->trace(__VA_ARGS__)
#define CE_CORE_INFO(...)  ::CustomEngine::Log::GetEngineLogger()->info(__VA_ARGS__)
#define CE_CORE_WARN(...)  ::CustomEngine::Log::GetEngineLogger()->warn(__VA_ARGS__)
#define CE_CORE_ERROR(...) ::CustomEngine::Log::GetEngineLogger()->error(__VA_ARGS__)
#define CE_CORE_FATAL(...) ::CustomEngine::Log::GetEngineLogger()->fatal(__VA_ARGS__)


//Engine log macros
#define CE_TRACE(...) ::CustomEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CE_INFO(...)  ::CustomEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define CE_WARN(...)  ::CustomEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CE_ERROR(...) ::CustomEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define CE_FATAL(...) ::CustomEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
