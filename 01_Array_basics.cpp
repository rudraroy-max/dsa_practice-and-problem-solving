#include<iostream>

using namespace std;

int main(){
    int A[5];
    A[0] = 10;
    A[1] = 20;
    A[2] = 30;

    int B[] = {1,2,3,4,5};

    //DISPLAYING ARRAY VALUES USING LOOP
    for(int i =0 ; i<5 ; i++){
        cout<<"the value of array  in index " <<i<< " is "<<B[i]<<endl;
    }
    cout<<sizeof(A)<<endl;
    cout<<A[2]<<endl;

    //TAKING INPUT FROM USER
    int n;
    cout<<"Enter size:";
    cin>>n;
    int C[n];

    for(int i=0 ; i<n;i++){
        cout<<"Enter the value of array C for index " <<i<<":";
        cin>>C[i];
    }

    for(int i =0 ; i<n ; i++){
        cout<<"the value of array  in index " <<i<< " is "<<C[i]<<endl;
    }
    return 0;
}