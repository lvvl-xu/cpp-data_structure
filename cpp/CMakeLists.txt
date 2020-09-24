# 限定了 CMake 的版本
cmake_minimum_required(VERSION 3.8)

# 该命令表示项目的名称是 main 
project(main)

# set(变量 值)
set(CMAKE_C_STANDARD 99)
set(SOURCE_FILES unit1.cpp)
# main.cpp 主函数
# 1.cpp 测试文件
# unit1.cpp 第一章从C到C++





# ${xxx} 引用上面定义的 xxx 变量
# add_executable 表示把变量 SOURCE_FILES 编译成一个名称为 main 的可执行文件。
add_executable(main ${SOURCE_FILES})