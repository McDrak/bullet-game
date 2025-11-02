#include "BulletEngine/Engine/Engine.hpp"

#include "BulletEngine/Managers/LogManager.hpp"

namespace BulletEngine
{
	void CEngine::Init()
	{
		m_LogManager = std::make_unique<CLogManager>();
		m_LogManager->Startup();
	}

	void CEngine::Run()
	{
		m_LogManager->Run();
	}

	void CEngine::Shutdown()
	{
		m_LogManager->Shutdown();
	}
} // namespace BulletEngine