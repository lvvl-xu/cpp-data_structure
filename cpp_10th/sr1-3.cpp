#include <iostream>
using namespace std;

void calculation(int a_25, int b_10, int c_5);

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    calculation(a,b,c);
    return 0;
}

void calculation(int a_25, int b_10, int c_5){
    cout<<"币值位"<<a_25*25+b_10*10+c_5*5<<"美分"<<endl;
}