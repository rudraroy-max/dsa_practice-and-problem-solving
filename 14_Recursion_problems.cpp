#include<iostream>
using namespace std;

// sum of N natural numbers
int sum(int n){
    if(n==0)
        return 0 ;
    else
        return sum(n-1)+n;
}

// factorial of N
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

// power of M using recursion
int pow(int m , int n){
    if(n==0)
        return 1;
    else
        return m*pow(m,n-1);
}
int pow1(int m,int n){
    if(n==0)
        return 1;
    if(n%2 == 0)
        return pow(m*m,n/2);
    else
        return m*pow(m*m,(n-1)/2);
}

int main(){
    int n ;
    cin>>n;
    cout<<"sum is "<<sum(n)<<endl;
    cout<<"factorial is "<<fact(n)<<endl;
    cout<<"power is "<<pow1(2,n)<<endl;
    return 0;
}