
#include <stdio.h>
//����ṹ�� Student
struct Student{
    //�ṹ������ĳ�Ա����
    char *name;
    int age;
    float score;
};
//��ʾ�ṹ��ĳ�Ա����
void display(struct Student stu){
    printf("%s�������� %d���ɼ��� %f\n", stu.name, stu.age, stu.score);
}



int main(){
    struct Student stu1,stu2;
    //Ϊ�ṹ��ĳ�Ա������ֵ
    stu1.name = "С��";
    stu1.age = 15;
    stu1.score = 92.5;
    //���ú���
    display(stu1);

    return 0;
}

