#include<iostream>
using namespace std;

class number{
    int no;
    public:
    void get_val(){
        cout<<endl<<"Enter Number:: ";
        cin>>no;
    }
    void show(){
        cout<<endl<<"Number is::"<<no<<endl;
    }
    void operator-(){
        no=-no;
    }
};

int main(){
    cout<<endl<<"..Overloading Unary Operator(-).."<<endl<<endl<<"       OUTPUT"<<endl;
    number m;
    m.get_val();
    m.show();
    -m;
     m.show();
    -m;
    cout<<endl;

    return 0;
}