# 限定了 CMake 的版本
cmake_minimum_required(VERSION 3.8)

# 该命令表示项目的名称是 main 
project(main)

# set(变量 值)
set(CMAKE_C_STANDARD 99)
set(SOURCE_FILES cpp_10th/sr1-3.cpp)
# filedictionary/file.cpp
# main.cpp 主函数
# 1.cpp 测试文件
# unit1.cpp 第一章从C到C++
# unit2.cpp 第二章类和对象
# unit2-1.cpp C++析构函数详解
# const.cpp 详细了解const的全部用法
# this.cpp C++ this指针详解
# static.cpp static静态成员变量详解





# ${xxx} 引用上面定义的 xxx 变量
# add_executable 表示把变量 SOURCE_FILES 编译成一个名称为 main 的可执行文件。
add_executable(main ${SOURCE_FILES})