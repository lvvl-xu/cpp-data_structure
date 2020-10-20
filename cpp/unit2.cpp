/*
 * @FilePath: D:\OneDrive\github\cpp-data_structure\cpp\unit2.cpp
 * @Description: 第二章类和对象
 * @Author: 许东明
 * @Date: 2020-09-24, 周四, 19:22
 * @LastEditors: 许东明
 * @copyright Copyright (c) 2020
 */

//头文件
#include <iostream>
using namespace std;

//宏定义



//函数声明

//类
//注意：类要在主函数之前，一般情况类单独成文件
class Student{
public:
    //成员变量
    char* name;
    int age;
    float score;

    //成员函数
    void say(){
        cout<<name<<"的年龄是"<<age<<"，成绩是"<<score<<endl;
    }
    void Say();
};


void Student::Say(){
    cout<<name<<"的年龄是"<<age<<"，成绩是"<<score<<endl;
}

class student{
private:
    char* m_name;
    int m_age;
    float m_score;
public:
    student(char* name, int age, float score);
    student(){};
    void setname(char* name);
    void setage(int age);
    void setscore(float score);
    void show();
};

//成员函数的定义
//student::student(char* name, int age, float score){
//    m_name = name;
//    m_age = age;
//    m_score = score;
//}
//采用初始化列表
student::student(char* name, int age, float score):m_name(name), m_age(age), m_score(score){}
void student::setname(char *name) {
    m_name = name;
}
void student::setage(int age) {
    m_age = age;
}
void student::setscore(float score) {
    m_score = score;
}
void student::show() {
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}

//主函数调用（用于测试）
int main(){
    Student stu;
    stu.name = "小红";
    stu.age = 20;
    stu.score = 100;
    stu.say();

    Student stu1;
    Student* p = &stu;
    p -> name = "小华";
    p -> age = 19;
    p -> score = 117;
    p -> say();

    Student* pstu = new Student;
    pstu -> name = "小明";
    pstu -> age = 12;
    pstu -> score = 111;
    pstu -> say();
    delete pstu;

    student stu2;
    stu2.setname("小红1");
    stu2.setage(18);
    stu2.setscore(99.2);
    stu2.show();

    student *pstu3 = new student();
    pstu3 -> setname("小北");
    pstu3 -> setage(15);
    pstu3 -> setscore(93.2);
    pstu3 -> show();

    student *ptr = new student("小贝",17,91.3);
    ptr -> show();
    return 0;
}




