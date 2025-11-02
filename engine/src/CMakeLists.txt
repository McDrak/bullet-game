# Temporal grab of .cpp files
file(GLOB_RECURSE ENGINE_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(BulletGameEngine ${ENGINE_SOURCES})

target_include_directories(BulletGameEngine PUBLIC ${PROJECT_SOURCE_DIR}/engine/include)

#Link SPDLOG
target_link_libraries(BulletGameEngine PUBLIC spdlog)