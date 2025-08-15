# hello_cmake/CMakeLists.txt
cmake_minimum_required(VERSION 3.20)  # 最低CMake版本
project(HelloCMake)                   # 项目名称

# 设置C标准
set(CMAKE_C_STANDARD 11)

# 包含头文件目录
include_directories(include)

# 添加可执行文件
add_executable(program 
    src/main.c
    src/utils.c
    
)