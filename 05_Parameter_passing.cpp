#include<iostream>
using namespace std;
// CALL BY VALUE
int sum(int a , int b){
    int c =a+b;
    return c;
}
// CALL BY ADDRESS
void swap1(int *a1 , int *b1){
    int temp;
    temp = *a1;
    *a1 = *b1;
    *b1 = temp;
}
//CALL BY REFERENCE
void swap2(int &a2 , int &b2){
    int tmp;
    tmp = a2;
    a2 = b2 ;
    b2 = tmp;
}

int main(){
    int x = 10;
    int y = 20;
    //PASS BY VALUE
    int z = sum(x,y);
    cout<<"value of z "<<z<<endl;
    //PASS BY ADDRESS
    swap1(&x,&y);
    cout<<"x= "<<x<<" y= "<<y<<endl;
    //PASS BY REFERENCE
    swap2(x,y);
    cout<<"x= "<<x<<" y= "<<y<<endl;
    return 0;
}