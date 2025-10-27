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

    std::unique_ptr<CApplication> CreateApplication();
}