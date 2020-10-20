///*
// * @FilePath: D:\OneDrive\github\cpp-data_structure\cpp\const用法.cpp
// * @Description: const用法罗列
// * @Author: 许东明
// * @Date: 2020-09-25, 周五, 15:18
// * @LastEditors: 许东明
// * @copyright Copyright (c) 2020
// */
//
//#include <iostream>
//using namespace std;
//
//int situation1()
//{
//    int v = 0;
//    const int a = v; // 编译期间无法确定a的值，因此a不会进入常量表。
////    a = 10; // 编译错误，因为试图修改一个常量。
//
//    int *pa = (int *)&a; // 取得了真正a变量的地址。
//    *pa = 20; // 此时a的值被修改为20，失去常量属性。
//    return 0;
//}
//
//int situation2()
//{
//    const volatile int a = 0; // 编译期间无法确定a的值，因此a不会进入常量表。
////    a = 10; // 编译错误，因为试图修改一个常量。
//    int *pa = (int *)&a; // 取得了真正a变量的地址。
//    *pa = 20; // 此时a的值被修改为20，失去常量属性。
//    return 0;
//}
//
//int situation3()
//{
//    const long a = 0; // a成为常量，<a, 0>被保存进入了常量表中，但是并未在栈上为a分配内存。
//    const int b = a; // 发生了类型截断，因此即便编译期可以确定值，也不会进入常量表。
//    int *pb = (int *)&b; // 取得了真正a变量的地址。
//    *pb = 20; // 此时b的值被修改为20，失去常量属性。
//    return 0;
//}
//
//
//
//
//int main()
//{
//    int number = 12;
//    int num = 11;
//    const int *a = &number; // 底层const，表示地址中的数据不可被修改。
//    number = 111;
//    a = &num;
////    *a = 123;
//    int *const b = &number; // 顶层const，表示指针不能指向其它位置。
////    b = &num;
//    const int *const c = nullptr; // 顶层和底层const，表示指针不能指向其它位置，并且地址中的数据不可被修改。
//    cout<<"success";
//    return 0;
//}
//
class Student{
public:
    Student(char *name, int age, float score);
    void show();
    //声明常成员函数
    char *getname() const;
    int getage() const;
    float getscore() const;
private:
    char *m_name;
    int m_age;
    float m_score;
};

Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){ }
void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}
//定义常成员函数
char * Student::getname() const{
    return m_name;
}
int Student::getage() const{
    return m_age;
}
float Student::getscore() const{
    return m_score;
}