cmake_minimum_required(VERSION 3.31.5)

project(SpaceAdventure
    VERSION 1.0.0
    LANGUAGES C CXX

)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#CREATES VARÝABLE
set(SPACE_ADVENTURE_GAME_TARGET_NAME SpaceAdventureGame)

add_subdirectory(SpaceAdventure)
