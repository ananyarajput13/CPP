#include<iostream>
using namespace std;
int main()
{
    float salary, hra, da, gross;
    cout<<"ENTER SALARY:";
    cin>>salary;
    cout<<"ENTER HRA:";
    cin>>hra;
    cout<<"ENTER DA:";
    cin>>da;
    gross= salary + hra +da;
    cout<<"GROSS SALARY:"<<gross;
    return 0;

}