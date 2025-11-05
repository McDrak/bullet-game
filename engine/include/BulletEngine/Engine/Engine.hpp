#pragma once

#include "BulletEngine/Core.hpp"

#include <memory>

namespace BulletEngine
{
	class CLogManager;

	class BULLETENGINE_API CEngine
	{
	public:
		CEngine();
		~CEngine();

		void Init();
		void Run();
		void Shutdown();

	private:
		std::unique_ptr<CLogManager> m_LogManager;
	};
}