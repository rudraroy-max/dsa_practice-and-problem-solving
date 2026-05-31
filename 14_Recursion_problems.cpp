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

int main(){
    int n ;
    cin>>n;
    cout<<"sum is "<<sum(n)<<endl;
    cout<<"factorial is "<<fact(n)<<endl;
    return 0;
}