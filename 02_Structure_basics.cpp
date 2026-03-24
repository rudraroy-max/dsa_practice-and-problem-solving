#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};


int main(){
    struct Rectangle r1 = {5,10};
    cout<<"Area "<<r1.length*r1.breadth<<endl;
    //MODIFICATION
    r1.length = 15;
    r1.breadth = 20;
    cout<<"Area after modification "<<r1.length*r1.breadth<<endl;
    return 0;
}