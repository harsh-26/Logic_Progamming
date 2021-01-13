//Q1. Swap 2 variable without using 3rd variable .(three answer)
#include<iostream>
using namespace std;

int main()
{
    int no1 = 10;
    int no2 = 20;
    cout<<"Numbers before swapping "<<no1<<"  "<<no2<<endl;
    no1 = no1 ^ no2;
    no2 = no1 ^ no2;
    no1 = no1 ^ no2;
    cout<<"Numbers after swapping "<<no1<<"  "<<no2<<endl;
    return 0;
    
}