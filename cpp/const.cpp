///*
// * @FilePath: D:\OneDrive\github\cpp-data_structure\cpp\const�÷�.cpp
// * @Description: const�÷�����
// * @Author: ����
// * @Date: 2020-09-25, ����, 15:18
// * @LastEditors: ����
// * @copyright Copyright (c) 2020
// */
//
//#include <iostream>
//using namespace std;
//
//int situation1()
//{
//    int v = 0;
//    const int a = v; // �����ڼ��޷�ȷ��a��ֵ�����a������볣����
////    a = 10; // ���������Ϊ��ͼ�޸�һ��������
//
//    int *pa = (int *)&a; // ȡ��������a�����ĵ�ַ��
//    *pa = 20; // ��ʱa��ֵ���޸�Ϊ20��ʧȥ�������ԡ�
//    return 0;
//}
//
//int situation2()
//{
//    const volatile int a = 0; // �����ڼ��޷�ȷ��a��ֵ�����a������볣����
////    a = 10; // ���������Ϊ��ͼ�޸�һ��������
//    int *pa = (int *)&a; // ȡ��������a�����ĵ�ַ��
//    *pa = 20; // ��ʱa��ֵ���޸�Ϊ20��ʧȥ�������ԡ�
//    return 0;
//}
//
//int situation3()
//{
//    const long a = 0; // a��Ϊ������<a, 0>����������˳������У����ǲ�δ��ջ��Ϊa�����ڴ档
//    const int b = a; // ���������ͽضϣ���˼�������ڿ���ȷ��ֵ��Ҳ������볣����
//    int *pb = (int *)&b; // ȡ��������a�����ĵ�ַ��
//    *pb = 20; // ��ʱb��ֵ���޸�Ϊ20��ʧȥ�������ԡ�
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
//    const int *a = &number; // �ײ�const����ʾ��ַ�е����ݲ��ɱ��޸ġ�
//    number = 111;
//    a = &num;
////    *a = 123;
//    int *const b = &number; // ����const����ʾָ�벻��ָ������λ�á�
////    b = &num;
//    const int *const c = nullptr; // ����͵ײ�const����ʾָ�벻��ָ������λ�ã����ҵ�ַ�е����ݲ��ɱ��޸ġ�
//    cout<<"success";
//    return 0;
//}
//
class Student{
public:
    Student(char *name, int age, float score);
    void show();
    //��������Ա����
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
    cout<<m_name<<"��������"<<m_age<<"���ɼ���"<<m_score<<endl;
}
//���峣��Ա����
char * Student::getname() const{
    return m_name;
}
int Student::getage() const{
    return m_age;
}
float Student::getscore() const{
    return m_score;
}