/*
 * @FilePath: D:\OneDrive\github\cpp-data_structure\cpp\unit1.cpp
 * @Description: c语言中文网第一章从C到C++
 * @Author: 许东明
 * @Date: 2020-09-24, 周四, 15:28
 * @LastEditors: 许东明
 * @copyright Copyright (c) 2020
 */

//头文件
#include <iostream>
using namespace std;

//宏定义
#define SQ1(y) ((y)*(y))


//函数声明
void Cin_Cout();
void Const();
void swap(int *a, int *b);
int SQ(int y);
void func1(int n, float b=1.2, char c='@');//注意，带有默认值的函数，在定义的时候可以不添加默认值，在函数声明的时候添加默认值，否则报错
void Swap(int *a, int *b);
void Swap(float *a, float *b);
void Swap(char *a, char *b);
void Swap(bool *a, bool *b);
template<typename T> T max(T a, T b, T c);

//主函数调用（用于测试）
int main(){
    enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun } day=Mon;
//    scanf("%d", &day);
    switch(day){
        case 1: puts("Monday"); break;
        case 2: puts("Tuesday"); break;
        case 3: puts("Wednesday"); break;
        case 4: puts("Thursday"); break;
        case 5: puts("Friday"); break;
        case 6: puts("Saturday"); break;
        case 7: puts("Sunday"); break;
        default: puts("Error!");
    }

    return 0;
}


//子函数功能

//输入输出
void Cin_Cout(){
    int x;
    float y;
    cout<<"please input an int number:"<<endl;
    cin>>x;
    cout<<"This number is x="<<x<<endl;
    cout<<"please input a float number:"<<endl;
    cin>>y;
    cout<<"This number is y="<<y<<endl;
}

//C++中的const又玩出了新花样
void Const(){
    const int n = 10;
    int *p = (int*)&n;  //必须强制类型转换
//    int* p = &n;//错误的，&n得到的指针的类型是const int *，必须强制转换为int *后才能赋给 p，否则类型是不兼容的。
    *p = 99;  //修改const变量的值
    printf("%d\n", n);
}

//内联函数，交换两个数的值
inline void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
inline int SQ(int y){return y*y;}

//带默认参数的函数
//C++规定，默认参数只能放在形参列表的最后，而且一旦为某个形参指定了默认值，那么它后面的所有形参都必须有默认值。
//注意，带有默认值的函数，在定义的时候可以不添加默认值，在函数声明的时候添加默认值，否则报错
void func1(int n, float b, char c){
    cout<<n<<", "<<b<<", "<<c<<endl;
}

//函数重载
//交换 int 变量的值
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//交换 float 变量的值
void Swap(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}
//交换 char 变量的值
void Swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
//交换 bool 变量的值
void Swap(bool *a, bool *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
//使用函数模板来实现函数重载
template<typename T> void Swap1(T *a, T *b){
    T temp = *a;
    *a = *b;
    *b = temp;
}
//定义函数模板
template<typename T>  //模板头，这里不能有分号
T max(T a, T b, T c){ //函数头
    T max_num = a;
    if(b > max_num) max_num = b;
    if(c > max_num) max_num = c;
    return max_num;
}















