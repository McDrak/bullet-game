#pragma once

#include "BulletEngine/Core.hpp"

#include <memory>

namespace BulletEngine
{
	class BULLETENGINE_API CApplication
	{
	public:
		CApplication() = default;
		virtual ~CApplication() = default;

		void Run();
	};

	// To be defined in the Client's App
	std::unique_ptr<CApplication> CreateApplication();
}