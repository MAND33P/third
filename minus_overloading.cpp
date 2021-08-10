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
        cout<<endl<<"Number is:: "<<no<<endl;
    }
    void operator-(){
        no=-no;
    }
    void operator-(number n1){
        no=no-n1.no;
    }
};

int main(){
    number m;
    m.get_val();
    m.show();
    -m;
    m.show();
    m-m;
    m.show();
    return 0;
}