/*
 * @FilePath: D:\OneDrive\github\cpp-data_structure\cpp\unit2.cpp
 * @Description: �ڶ�����Ͷ���
 * @Author: ����
 * @Date: 2020-09-24, ����, 19:22
 * @LastEditors: ����
 * @copyright Copyright (c) 2020
 */

//ͷ�ļ�
#include <iostream>
using namespace std;

//�궨��



//��������

//��
//ע�⣺��Ҫ��������֮ǰ��һ������൥�����ļ�
class Student{
public:
    //��Ա����
    char* name;
    int age;
    float score;

    //��Ա����
    void say(){
        cout<<name<<"��������"<<age<<"���ɼ���"<<score<<endl;
    }
    void Say();
};


void Student::Say(){
    cout<<name<<"��������"<<age<<"���ɼ���"<<score<<endl;
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

//��Ա�����Ķ���
//student::student(char* name, int age, float score){
//    m_name = name;
//    m_age = age;
//    m_score = score;
//}
//���ó�ʼ���б�
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
    cout<<m_name<<"��������"<<m_age<<"���ɼ���"<<m_score<<endl;
}

//���������ã����ڲ��ԣ�
int main(){
    Student stu;
    stu.name = "С��";
    stu.age = 20;
    stu.score = 100;
    stu.say();

    Student stu1;
    Student* p = &stu;
    p -> name = "С��";
    p -> age = 19;
    p -> score = 117;
    p -> say();

    Student* pstu = new Student;
    pstu -> name = "С��";
    pstu -> age = 12;
    pstu -> score = 111;
    pstu -> say();
    delete pstu;

    student stu2;
    stu2.setname("С��1");
    stu2.setage(18);
    stu2.setscore(99.2);
    stu2.show();

    student *pstu3 = new student();
    pstu3 -> setname("С��");
    pstu3 -> setage(15);
    pstu3 -> setscore(93.2);
    pstu3 -> show();

    student *ptr = new student("С��",17,91.3);
    ptr -> show();
    return 0;
}




