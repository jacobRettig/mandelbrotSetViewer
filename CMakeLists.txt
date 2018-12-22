cmake_minimum_required(VERSION 2.8)
project(Mandelbrot C)

add_definitions(-Wall -g)

set(Mandelbrot_VERSION_MAJOR 0)
set(Mandelbrot_VERSION_MINOR 0)

#glfw
set(GLFW_BUILD_EXAMPLES OFF CACHE STRING "" FORCE)
set(GLFW_BUILD_TESTS    OFF CACHE STRING "" FORCE)
set(GLFW_INSTALL        OFF CACHE STRING "" FORCE)
include_directories("${PROJECT_SOURCE_DIR}/lib/glfw/include/")
add_subdirectory("${PROJECT_SOURCE_DIR}/lib/glfw/")

include_directories(
  #  "${PROJECT_SOURCE_DIR}/include/"
  "${PROJECT_SOURCE_DIR}/src/"
  )


add_executable(Mandelbrot src/mandelbrot.c)

target_link_libraries(Mandelbrot opengl32 glfw ${GLFW_LIBRARIES})
