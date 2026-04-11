#include<iostream>
using namespace std;

void tailfun(int n){
    if(n>0){
        cout<<n<<endl;
        tailfun(n-1);
    }
}

void headfun(int n){
    if(n>0){
        headfun(n-1);
        cout<<n<<endl;
    }
}

void fun3(int n){
    if(n>0){
        cout<<n<<endl;
        fun3(n-1);
        fun3(n-1);
    }
}

int main(){
    int x = 3;
    tailfun(x);
    headfun(x);
    fun3(x);
    return 0;
}