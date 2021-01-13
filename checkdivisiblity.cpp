//Q3. Accept a number from user - if it is divisible by 3 print “three” , if it is divisible by 7 print “seven” and if it is
//divisible by both(3,7) print “three -seven”

#include<iostream>
using namespace std;

int main()
{
    int no1;
    cout<<"Enter a number "<<endl;
    cin>>no1;
    if(no1 % 3==0 && no1 % 7==0)
    {
        cout<<"three-seven";
    }
    else if(no1%3 == 0){
        cout<<"three";
    }
    else if(no1 % 7 == 0)
    {
        cout<<"seven";
    }
    else
    {
        cout<<"Not divisible";
    }
    return 0;
}