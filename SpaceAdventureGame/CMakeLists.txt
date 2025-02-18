
add_executable(${SPACE_ADVENTURE_GAME_TARGET_NAME}
    
    ${CMAKE_CURRENT_SOURCE_DIR}/headers/gameFramework/GameApplication.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/gameFramework/GameApplication.cpp

)

target_include_directories(${SPACE_ADVENTURE_GAME_TARGET_NAME} PUBLIC
     ${CMAKE_CURRENT_SOURCE_DIR}/headers
)

target_link_libraries(${SPACE_ADVENTURE_GAME_TARGET_NAME} PUBLIC ${SPACE_ADVENTURE_ENGINE_TARGET_NAME})


#add_custom_command()