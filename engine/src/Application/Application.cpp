#include "BulletEngine/Application/Application.hpp"

#include "BulletEngine/Engine/Engine.hpp"
#include "BulletEngine/Managers/LogManager.hpp"

#include <iostream>

namespace BulletEngine
{
	void CApplication::Run()
	{
		CEngine engine;
		engine.Init();
		engine.Run();
		engine.Shutdown();
	}
}
