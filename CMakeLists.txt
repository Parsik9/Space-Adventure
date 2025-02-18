cmake_minimum_required(VERSION 3.31.5)

project(SpaceAdventure
    VERSION 1.0.0
    LANGUAGES C CXX

)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#CREATES VARÝABLE
set(SPACE_ADVENTURE_ENGINE_TARGET_NAME SpaceAdventureEngine)
set(SPACE_ADVENTURE_GAME_TARGET_NAME SpaceAdventureGame)



include(FetchContent)
set(SFML_LIB_NAME SFML)

FetchContent_Declare(
    ${SFML_LIB_NAME}
    GIT_REPOSITORY https://github.com/SFML/SFML
    GIT_TAG 3.0.0
    GIT_SHALLOW FALSE
)

FetchContent_MakeAvailable(${SFML_LIB_NAME})

add_subdirectory(SpaceAdventureEngine)
add_subdirectory(SpaceAdventureGame)