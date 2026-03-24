#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int a=10;
    int *p;
    p = &a;
    cout<<"address of pointer "<<p<<endl;
    cout<<"value of pointer "<<*p<<endl;

    //POINTER TO AN ARRAY
    int A[5]={2,4,6,7,9};
    int *q;
    q = A;
    for(int i=0;i<5;i++){
        cout<<q[i]<<endl;
    }

    //CREATING ARRAY IN HEAP
    int *r; int *s;
    r = (int *)malloc(5*sizeof(int)); //dynamic allocation in c
    s = new int[5]; //dynamic allocation in c++
    r[0] = 10; r[1]=15;r[2]=20; r[3]= 25; r[4] = 30;
    s[0 ] = 11;s[1] = 22; s[2] = 23;s[3]=24;s[4]=25;
    for(int i=0;i<5;i++){
        cout<<r[i]<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<s[i]<<endl;
    }
    free(r);
    delete [ ] s;
    return 0;
}