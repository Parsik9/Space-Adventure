
add_library(${SPACE_ADVENTURE_ENGINE_TARGET_NAME} STATIC
    
    ${CMAKE_CURRENT_SOURCE_DIR}/headers/framework/Application.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/framework/Application.cpp

    ${CMAKE_CURRENT_SOURCE_DIR}/headers/EntryPoint.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/EntryPoint.cpp
)

target_include_directories(${SPACE_ADVENTURE_ENGINE_TARGET_NAME} PUBLIC
     ${CMAKE_CURRENT_SOURCE_DIR}/headers
)

target_link_libraries(${SPACE_ADVENTURE_ENGINE_TARGET_NAME} PUBLIC sfml-graphics)
target_link_libraries(${SPACE_ADVENTURE_ENGINE_TARGET_NAME} PUBLIC sfml-window)
target_link_libraries(${SPACE_ADVENTURE_ENGINE_TARGET_NAME} PUBLIC sfml-system)
target_link_libraries(${SPACE_ADVENTURE_ENGINE_TARGET_NAME} PUBLIC sfml-audio)

#add_custom_command()