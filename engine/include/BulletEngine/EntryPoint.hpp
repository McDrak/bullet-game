#pragma once

#include <memory>

extern std::unique_ptr<BulletEngine::CApplication> BulletEngine::CreateApplication();

int main(int argc, char** argv)
{
    std::unique_ptr<BulletEngine::CApplication> App = BulletEngine::CreateApplication();
    App->Run();

    return 0;
}