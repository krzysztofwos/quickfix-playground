cmake_minimum_required(VERSION 3.0.0)
project(matching-engine VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated")
include(CTest)
enable_testing()
find_package(PkgConfig REQUIRED)
pkg_check_modules(QUICKFIX REQUIRED quickfix)
add_executable(quickfix-example main.cpp Application.cpp)
target_include_directories(quickfix-example PUBLIC ${QUICKFIX_INCLUDE_DIRS})
target_link_libraries(quickfix-example PUBLIC ${QUICKFIX_LIBRARIES})
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
