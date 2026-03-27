#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct array{
    int A[5];
    int l;
};

// USING CALL BY VALUE
int area(struct Rectangle r1){
    return r1.length*r1.breadth;
}
// USING CALL BY REFERENCE
int arearef(struct Rectangle &r1){
    r1.breadth=20;
    r1.length = 10;
    return r1.length*r1.breadth;
}
// USING CALL BY ADDRESS
void changeLength(struct Rectangle *r1,int l){
    r1->length = l;
}
// ARRAY INSIDE A STRUCTURE
void arrayst(struct array &a1){
    a1.A[2]=15;
    a1.l=25;
}
// RETURNING A POINTER TO A STRUCTURE
struct Rectangle *fun(){
    struct Rectangle *p;
    p = new Rectangle;

    p->breadth = 15;
    p->length = 7;
    return p;
}

int main(){
    struct Rectangle r = {5,10};
    struct array a = {{2,3,4,5,6},10};
    struct Rectangle *ptr = fun();
    cout<<"Area of Rectangle "<<area(r)<<endl;
    cout<<"Area of Rectangle after modification "<<arearef(r)<<endl;
    changeLength(&r,30);
    cout<<"changed length is "<<r.length<<endl;
    cout<<a.A[2]<<" "<<a.l<<endl;
    arrayst(a);
    cout<<"After modification "<<a.A[2]<<" "<<a.l<<endl;
    cout<<"Length "<<ptr->length<<" Breadth "<<ptr->breadth;
    return 0;
}