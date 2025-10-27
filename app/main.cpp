#include <memory>

#include "BulletEngine.hpp"

class CAppApplication : public BulletEngine::CApplication
{
public:
    CAppApplication() {}
    ~CAppApplication() {}
};

std::unique_ptr<BulletEngine::CApplication> BulletEngine::CreateApplication()
{
    return std::make_unique<CAppApplication>();
}