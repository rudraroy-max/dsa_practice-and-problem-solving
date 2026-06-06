#include<iostream>
using namespace std;

double e(int x, int n){
    static double p =1,f=1;
    double r;
    if(n==0)
        return 1;
    r = e(x,n-1);
    p = p*x;
    f = f*n;
    return r + p/f;
}

// Taylor series using Hornes Rule
double e1(int x,int n){
    static double s=1;
    if(n == 0)
        return s;
    s = 1+ x*s/n;
    return e1(x,n-1);
}

int main(){
    cout<<e(4,15)<<endl;
    cout<<e1(4,15);
    return 0;
}