find_package(DirectX REQUIRED)

FILE(GLOB sources RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "*.cpp")
FILE(GLOB headers RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "*.h")
FILE(GLOB resources RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "*.rc")

add_executable(SchaeferGL-Tests WIN32 ${sources} ${headers} ${resources})
