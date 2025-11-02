#include "BulletEngine/Managers/LogManager.hpp"

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace BulletEngine
{
	std::shared_ptr<spdlog::logger> CLogManager::m_CoreLogger;
	std::shared_ptr<spdlog::logger> CLogManager::m_ClientLogger;

	CLogManager::CLogManager()
	{
	}

	void CLogManager::Startup()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		m_CoreLogger = spdlog::stdout_color_mt("BULLETENGINE");
		m_CoreLogger->set_level(spdlog::level::trace);
		BE_CORE_TRACE("Core Logger Startup");

		m_ClientLogger = spdlog::stdout_color_mt("BULLETGAME");
		m_ClientLogger->set_level(spdlog::level::trace);
		BE_CLIENT_TRACE("App Logger Startup");
	}

	void CLogManager::Run()
	{
	}

	void CLogManager::Shutdown()
	{
		BE_CLIENT_TRACE("App Logger Shutdown");
		BE_CORE_TRACE("Core Logger Shutdown");
	}
}