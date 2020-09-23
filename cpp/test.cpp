/*
 * @FilePath: \cpp-data_structure\cpp\test.cpp
 * @Description: 
 * @Author: 许东明
 * @Date: 2020-09-23 18:56:57
 * @version: 
 * @LastEditTime: 2020-09-23 19:15:32
 * @LastEditors: 许东明
 */
#include <iostream>
using namespace std;

//类通常定义在函数外面
class Student
{
public:
    //类包含的变量
    char *name;
    int age;
    float score;
    //类包含的函数
    void say()
    {
        cout << name << "的年龄是" << age << "，成绩是" << score << endl;
    }
};

int main()
{
    //创建对象
    Student stu;
    stu.name = "小明";
    stu.age = 15;
    stu.score = 92.5f;
    stu.say();

    return 0;
}