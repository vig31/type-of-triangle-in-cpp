#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"enter the 3 sides of traingle"<< endl;
    cin>>a>>b>>c;
    if (a==b&&b==c)
    {
        cout<<"its equilateral triangle";
    }
    else if (a==b||b==c||a==c)
    {
        cout<<"its isosless triangle";
        
    }
    else
    {
        cout<<"its scalien triangle";
    }
    
    
    
    return 0;
}