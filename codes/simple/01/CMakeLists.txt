cmake_minimum_required(VERSION 3.31)

project(testprj)

set ( PRJ_COMPILE_FEATURES )
set ( PRJ_LIBRARIES )

if ( MSVC )
    set_property( DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME} )
endif()

find_package(nlohmann_json)

list ( APPEND PRJ_LIBRARIES nlohmann_json::nlohmann_json )
list ( APPEND PRJ_COMPILE_FEATURES cxx_std_23 )

add_executable( ${PROJECT_NAME} )

target_sources( ${PROJECT_NAME}
    PRIVATE
        main.cpp
)

target_link_libraries( ${PROJECT_NAME} 
    PRIVATE 
        ${PRJ_LIBRARIES}
)

target_compile_features ( ${PROJECT_NAME} 
    PRIVATE 
        ${PRJ_COMPILE_FEATURES}
)

target_compile_definitions ( ${PROJECT_NAME}
    PRIVATE
        ${PRJ_COMPILE_DEFINITIONS} 
)


