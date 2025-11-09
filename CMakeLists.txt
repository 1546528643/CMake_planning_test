cmake_minimum_required(VERSION 3.29.0)
project(planning
        VERSION 1.0.0
        DESCRIPTION "Planning Map demo"
        HOMEPAGE_URL "https://github.com/1546528643/CMake_planning_test"
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Process_Dir  ${CMAKE_CURRENT_SOURCE_DIR}/src/process)   # 项目根目录   
set(PNC_Map_Dir  ${CMAKE_CURRENT_SOURCE_DIR}/src/pnc_map)

add_subdirectory(src)
