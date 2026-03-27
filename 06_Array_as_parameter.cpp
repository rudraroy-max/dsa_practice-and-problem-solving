#include<iostream>
using namespace std;

//ARRAY AS PARAMETER 
void fun(int arr[],int n){    // Instead of arr[] we can use * arr also
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// CHANGING VALUE OF ARRAY
int fun2(int * arr,int n){
    arr[0] = 20;
    arr[1] = 25;
}
// CREATING AN ARRAY INSIDE A FUNCTION
int * fun3(int n){
    int *p;
    p = new int[n];
    for(int i = 0;i<n;i++){
        p[i] = i*10;
    }
    return p;
}

int main(){
    int A[] = {2,3,4,5,6};
    int *ar;
    int n =5;
    fun(A,n);
    fun2(A,n);
    for(int i = 0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    ar = fun3(n);
    for(int i = 0;i<n;i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}