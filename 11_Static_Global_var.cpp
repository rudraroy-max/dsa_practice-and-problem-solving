#include<iostream>
using namespace std;

int fun1(int n){
    if(n>0){
        return fun1(n-1) + n;
    }
}
// int x = 0     <-- Global varible
int fun2(int n){
    static int x = 0;
    if(n>0){
        x++;
        return fun2(n-1) + x;
    }
}

int main(){
    int a = 5;
    cout<<"Normal :"<<fun1(a)<<endl;
    cout<<"Static Variable :"<<fun2(a)<<endl;
    return 0;
}