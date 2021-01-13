//Q2. Accept three no and find out the highest no.
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers";
    cin>>a;
    cin>>b;
    cin>>c;
    int max_val = a > b ? a > c ? a : c : b > c ? b : c ;
    cout<<"Maximum number is "<<max_val;
    return 0;
}