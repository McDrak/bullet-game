#pragma once

#include "BulletEngine/Core.hpp"

namespace BulletEngine
{
	class BULLETENGINE_API IManager
	{
	public:
		virtual ~IManager() = default;

		virtual void Startup() = 0;
		virtual void Run() = 0;
		virtual void Shutdown() = 0;
	};
}