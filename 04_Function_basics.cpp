#include<iostream>
using namespace std;

int add(int a , int b){
    int c = a+b;
    return c;
}

int main(){
    int x = 10;
    int y = 20;
    int z = add(10,20);
    cout<<"sum = "<<z;
    return 0;
}