cmake_minimum_required(VERSION 3.25)
project(BulletGame VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# SPDLOG
fetchcontent_declare(
        SPDLOG
        GIT_REPOSITORY https://github.com/gabime/spdlog
        GIT_TAG v1.15.3
)
fetchcontent_makeavailable(SPDLOG)

# Windows specific compilation flag
IF (MSVC OR MSYS OR MINGW)
    add_definitions(-DBULLETENGINE_BUILD_DLL)
ENDIF ()

add_subdirectory(engine)
add_subdirectory(app)