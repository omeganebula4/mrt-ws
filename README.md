# Notes to Self

## Creating Packages
Run `ros2 pkg create --build-type ament_python <package_name>` inside the `src` directory of the workspace.

Fill TODO sections in `package.xml` and `setup.py`. Ensure they are the same in both files.

## Managing Dependencies
List of `rosdep` Dependencies: [here](https://github.com/ros/rosdistro/tree/master/rosdep).

A package’s `package.xml` file contains a set of dependencies. The dependencies in this file are generally referred to as “rosdep keys”. These are represented in the tags `<depend>`, `<test_depend>`, `<exec_depend>`, `<build_depend>`, and `<build_export_depend>`. They specify in what situation each of the dependencies are required in.

- For dependencies only used in testing the code (e.g. gtest), use `test_depend`.
- For dependencies only used in building the code, use `build_depend`.
- For dependencies needed by headers the code exports, use `build_export_depend`.
- For dependencies only used when running the code, use `exec_depend`.
- For mixed purposes, use `depend`, which covers build, export, and execution time dependencies.

These dependencies are manually populated in the package.xml file by the package’s creators and should be an exhaustive list of any non-builtin libraries and packages it requires.

## Launch Files
For packages with launch files, it is a good idea to add an `exec_depend` dependency on the `ros2launch` package in your package’s `package.xml` using `<exec_depend>ros2launch</exec_depend>`

## Message Interface `CMakeLists.txt`
For the message interfaces package, the `CMakeLists.txt` file should start with something like this:

```
cmake_minimum_required(VERSION 3.14.4)
project(<PROJECT_NAME>)

if(POLICY CMP0148)
  cmake_policy(SET CMP0148 OLD)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

-- other code here --
```

## Packages from different workspaces
If you want to use a package from a different workspace in your packages, for example, you want to import package `pkg_name` from `other_ws` into your workspace `mrt_ws`, you should first `cd` into your workspace `mrt_ws` and run

`colcon build --paths /path/to/other_ws/src/pkg_name`

Now you can use `pkg_name` as a dependency in packages inside `mrt_ws`. Make sure to include the dependency in `package.xml`.