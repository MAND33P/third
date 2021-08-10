#include<iostream>
#include<cstdio>
#include<cmath>
#include<valarray>
using namespace std;
int primefactors(int num, int count)
{
  if(num<1)
    return 0; 
  else if(num%count==0)
  {
    cout<<count<<"\n";
    primefactors(num/count,count);
  }
  else{
    primefactors(num,count+1);
  }
}
  int main()
{
    int n;
    cin>>n;
    int result=primefactors(n,2);
    cout<<result<<primefactors(n,2);
   return 0;
}
