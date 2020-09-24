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


//函数声明
void Cin_Cout();
void Const();
void swap(int *a, int *b);

//主函数调用
int main(){

    int m, n;
    cin>>m>>n;
    cout<<m<<", "<<n<<endl;
    swap(&m, &n);
    cout<<m<<", "<<n<<endl;

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



















