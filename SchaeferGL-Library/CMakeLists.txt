set(Boost_USE_STATIC_LIBS ON)

find_package(DirectX REQUIRED)
find_package(Vulkan REQUIRED)
find_package(Boost 1.61 COMPONENTS "program_options" REQUIRED)

include_directories(${VULKAN_INCLUDE_DIR})
include_directories(${Boost_INCLUDE_DIRS})

link_directories(${Boost_LIBRARY_DIRS})

FILE(GLOB sources RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "*.cpp")
FILE(GLOB headers RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "*.h")

add_definitions(-DVK_USE_PLATFORM_WIN32_KHR -DVK_PROTOTYPES -DUNICODE)

add_library(d3d9 SHARED ${sources} ${headers} d3d9.def)
target_link_libraries(d3d9 ${VULKAN_LIBRARY} ${Boost_LIBRARIES})
