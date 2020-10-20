//#include <iostream>
//using namespace std;
//class Student{
//public:
//    Student(char *name, int age, float score);
//    void show();
//private:
//    static int m_total;  //静态成员变量
//private:
//    char *m_name;
//    int m_age;
//    float m_score;
//};
////初始化静态成员变量
//int Student::m_total = 0;
//
//Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){
//    m_total++;  //操作静态成员变量
//}
//
//void Student::show(){
//    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<"（当前共有"<<m_total<<"名学生）"<<endl;
//}
//
//int main(){
//    //创建匿名对象
//    (new Student("小明", 15, 90)) -> show();
//    (new Student("李磊", 16, 80)) -> show();
//    (new Student("张华", 16, 99)) -> show();
//    (new Student("王康", 14, 60)) -> show();
//    return 0;
//}


#include <iostream>
using namespace std;
class Student{
public:
    Student(char *name, int age, float score);
    void show();
public:  //声明静态成员函数
    static int getTotal();
    static float getPoints();
private:
    static int m_total;  //总人数
    static float m_points;  //总成绩
private:
    char *m_name;
    int m_age;
    float m_score;
};
int Student::m_total = 0;
float Student::m_points = 0.0;
Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){
    m_total++;
    m_points += score;
}
void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}
//定义静态成员函数
int Student::getTotal(){
    return m_total;
}
float Student::getPoints(){
    return m_points;
}

void test(int num){
    num = 1;
}
//void test(int *const num){
//    *num = 1;
//    int* a;
//    num = a;
//}

int main(){
//    (new Student("小明", 15, 90.6)) -> show();
//    (new Student("李磊", 16, 80.5)) -> show();
//    (new Student("张华", 16, 99.0)) -> show();
//    (new Student("王康", 14, 60.8)) -> show();
//    int total = Student::getTotal();
//    float points = Student::getPoints();
//    cout<<"当前共有"<<total<<"名学生，总成绩是"<<points<<"，平均分是"<<points/total<<endl;
    int num = 10;
    test(num);
    cout<<num;
    return 0;
}