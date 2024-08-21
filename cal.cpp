#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int choice;
    cout<<"Enter 2 int:";
    cin>>a>>b;
    cout<<"select an operator:";
    cout<<"\n1.Add\n2.substract\n3.multiply\n4.division"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Add of a and b is = "<<a+b;
            break;
        case 2:
            cout<<"substract of a and b is = "<<a-b;
            break;
        case 3:
            cout<<"multiply of a and b is = "<<a*b;
            break;
        case 4:
            cout<<"division of a and b is = "<<a/b;
            break;
        default:
            cout<<"wrong choice!";
    
    }
    return 0;
}