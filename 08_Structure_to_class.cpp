#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        //DEFAULT CONSTRUCTOR
        Rectangle(){
            length=breadth=1;
        }
        // PARAMETERIZED CONSTRUCTOR
        Rectangle(int l,int b){
            length = l;
            breadth = b;
        }
        int area(){
            return length*breadth;
        }
        void changelength(int l){
            length = l;
            cout<<length;
        }
};

int main(){
    Rectangle r(10,5);
    int Area = r.area();
    cout<<Area<<endl;
    r.changelength(20);
    return 0;
}