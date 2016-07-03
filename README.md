# SchaeferGL

Direct3D 9 compatibility layer using Vulkan.

## Compiling

* CMake 2.8 or later required, available from http://www.cmake.org
* Boost 1.61 or later required, available from http://www.boost.org

NOTE: You need the compiled version of Boost! Specifically the program_options
component

### Windows

Additional requirements:
* Microsoft Visual Studio command-line tools

Launch Visual Studio Native command-line tools from the Start menu and navigate
to the project folder.

To generate solution and project files run CMake with the following parameters
(here we want Visual Studio 14 2015 solution and projects and we specify paths
to the Boost library):

```
cmake . -G "Visual Studio 14 2015" -DBOOST_ROOT="C:\local\boost_1_61_0" -DBOOST_LIBRARYDIR="C:\local\boost_1_61_0\lib32-msvc-14.0"
```

Now you have the option of either opening the solution in Visual Studio or using MSBuild:

```
msbuild SchaeferGL.sln /p:Platform="Win32"
```
