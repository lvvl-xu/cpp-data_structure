#include <iostream>
using namespace std;

void add(int x, int y);
void mix(int x, int y);

int main(){
    int x,y;
    cin>>x>>y;
    add(x,y);
    mix(x,y);
    cout<<"This is the end of the program.\n";
    return 0;
}

void add(int x, int y){
    cout<<x+y<<endl;
}

void mix(int x, int y){
    cout<<x*y<<endl;
}