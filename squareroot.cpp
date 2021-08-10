#include<iostream>
#include<valarray>
#include<cmath>
// Include headers as needed
using namespace std;

int main()
{
    // Write your code here
	float sq,n;
    cout<<"enter value of n ::";
  	cin>>n;
      for (int i = 0; i < n; i++)
      {
        cin>>sq;
      }
      
  	sq=sqrt(n);
  	cout<<sq<<"\n";
    // Return 0 to indicate normal termination
    return 0;
}