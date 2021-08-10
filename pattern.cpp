#include<iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = n-1; i >= 1; i--)
    {
        for(int j = 1; j <=i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}
int main()
{
    int n;
    cout<<"Enter Number of rows";
    cin>>n;
    pattern(n);
    return 0;
}



