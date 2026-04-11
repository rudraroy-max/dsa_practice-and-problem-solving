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
int main(){
    int x = 3;
    tailfun(x);
    headfun(x);
    return 0;
}