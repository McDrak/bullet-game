#pragma once

#include "Manager.hpp"
#include "BulletEngine/Core.hpp"

#include "spdlog/logger.h"

#include <memory>

namespace BulletEngine
{
	class BULLETENGINE_API CLogManager : public IManager
	{
	public:
		CLogManager();

		void Startup() override;
		void Run() override;
		void Shutdown() override;

		static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return m_CoreLogger; }
		static std::shared_ptr<spdlog::logger>& GetClientLogger() { return m_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> m_CoreLogger;
		static std::shared_ptr<spdlog::logger> m_ClientLogger;
	};
}

// Core Log Macros
#define BE_CORE_TRACE(...)	::BulletEngine::CLogManager::GetCoreLogger()->trace(__VA_ARGS__)
#define BE_CORE_INFO(...)	::BulletEngine::CLogManager::GetCoreLogger()->info(__VA_ARGS__)
#define BE_CORE_WARN(...)	::BulletEngine::CLogManager::GetCoreLogger()->warn(__VA_ARGS__)
#define BE_CORE_ERROR(...)	::BulletEngine::CLogManager::GetCoreLogger()->error(__VA_ARGS__)
#define BE_CORE_CRITICAL(...)	::BulletEngine::CLogManager::GetCoreLogger()->critical(__VA_ARGS__)

// Client Log Macros
#define BE_CLIENT_TRACE(...)	::BulletEngine::CLogManager::GetClientLogger()->trace(__VA_ARGS__)
#define BE_CLIENT_INFO(...)	::BulletEngine::CLogManager::GetClientLogger()->info(__VA_ARGS__)
#define BE_CLIENT_WARN(...)	::BulletEngine::CLogManager::GetClientLogger()->warn(__VA_ARGS__)
#define BE_CLIENT_ERROR(...)	::BulletEngine::CLogManager::GetClientLogger()->error(__VA_ARGS__)
#define BE_CLIENT_CRITICAL(...)	::BulletEngine::CLogManager::GetClientLogger()->critical(__VA_ARGS__)