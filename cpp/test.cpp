//
// Created by lvvl_xu on 2020/9/24.
//

//
// Created by lvvl_xu on 2020/9/24.
//

#include <stdio.h>
//定义结构体 Student
struct Student{
    //结构体包含的成员变量
    char *name;
    int age;
    float score;
};
//显示结构体的成员变量
void display(struct Student stu){
    printf("%s的年龄是 %d，成绩是 %f\n", stu.name, stu.age, stu.score);
}

void Input(struct Student stu){
    stu.name = "小红";
    stu.age = 13;
    stu.score = 95.5;
}

int main(){
    struct Student stu1,stu2;
    //为结构体的成员变量赋值
    stu1.name = "小明";
    stu1.age = 15;
    stu1.score = 92.5;
    //调用函数
    display(stu1);

    return 0;
}

