#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>
namespace Reckon
{
	class RECKON_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

//core log macros
#define RCK_CORE_TRACE(...)      ::Reckon::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define RCK_CORE_WARN(...)       ::Reckon::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define RCK_CORE_INFO(...)       ::Reckon::Log::GetCoreLogger()->info(__VA_ARGS__)
#define RCK_CORE_ERROR(...)      ::Reckon::Log::GetCoreLogger()->error(__VA_ARGS__)
#define RCK_CORE_FATAL(...)      ::Reckon::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log macros

#define RCK_TRACE(...)           ::Reckon::Log::GetClientLogger()->trace(__VA_ARGS__)
#define RCK_WARN(...)            ::Reckon::Log::GetClientLogger()->warn(__VA_ARGS__)
#define RCK_INFO(...)            ::Reckon::Log::GetClientLogger()->info(__VA_ARGS__)
#define RCK_ERROR(...)           ::Reckon::Log::GetClientLogger()->error(__VA_ARGS__)
#define RCK_FATAL(...)           ::Reckon::Log::GetClientLogger()->fatal(__VA_ARGS__)














