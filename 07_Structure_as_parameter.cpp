#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

// USING CALL BY VALUE
int area(struct Rectangle r1){
    return r1.length*r1.breadth;
}

int arearef(struct Rectangle &r1){
    r1.breadth=20;
    r1.length = 10;
    return r1.length*r1.breadth;
}

void changeLength(struct Rectangle *r1,int l){
    r1->length = l;
}

int main(){
    struct Rectangle r = {5,10};
    cout<<"Area of Rectangle "<<area(r)<<endl;
    cout<<"Area of Rectangle after modification "<<arearef(r)<<endl;
    changeLength(&r,30);
    cout<<"changed length is "<<r.length;
    return 0;
}