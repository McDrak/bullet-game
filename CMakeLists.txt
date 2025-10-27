cmake_minimum_required(VERSION 3.25)
project(BulletGame VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# TODO: Uncomment when I start fetching libraries to the project
# include(FetchContent)

# Windows specific compilation flag
IF (MSVC OR MSYS OR MINGW)
    add_definitions(-DBULLETENGINE_BUILD_DLL)
ENDIF ()

add_subdirectory(engine)
add_subdirectory(app)