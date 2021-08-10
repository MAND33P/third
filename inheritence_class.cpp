#include<iostream>
#include<stdio.h>
using namespace std;
class A
{
  public:
  int x;
  void getx()
    {
     cout << "The number value of X: ";
     cin >> x;
    }
};
class B
{
  public:
  int y;
  void gety()
  {
     cout << "The number in Y: ";
     cin >> y;
  }
};
class C : public A, public B   //C is derived from class A and class B
{
  public:
  void sum()
  {
     cout << "Sum = " << x+y;
  }
};

int main()
{       cout<<"         OUTPUT"<<endl;
  C obj1; //object of derived class C
  obj1.getx();
  obj1.gety();
  obj1.sum();
  return 0;
}