#include <iostream>
using namespace std;

template<typename T>
class A{
public:
    T value;
public:
    T show();
    A(T name);
};

template<typename T>
T A<T>::show() {
    cout<<this->value<<endl;
}

template<typename T>
A<T>::A(T name):value(name){};


int main(){
    A<int> *stu = new A<int>(12);
    cout<<stu->show()<<endl;
    delete stu;
    return 0;
}