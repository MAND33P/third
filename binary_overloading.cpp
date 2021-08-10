#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(){
        x=0;
        y=0;
    }
    point(int a, int b){
        x=a;
        y=b;
    }
    point operator+(point p){
        point r;
        r.x=x+p.x;
        r.y=y+p.y;
        return r;
    }
    void show(){
        cout<<endl<<"Coordinates are "<<x<<"\t"<<y;
    }
};

int main(){
    cout<<endl<<"..Overloading Binary Operator(+).."<<endl<<endl<<"       OUTPUT"<<endl;
    point p3,p1(586,481),p2(779,432);
    p1.show();
    p2.show();
    p3=p1+p2;
    p3.show();
    return 0;
}