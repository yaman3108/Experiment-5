#include<iostream>
using namespace std;

//Name: Yaman Hasan Ansari PRN:23070123155
// Simple calculator using 'Switch case'
 
 int main()
 {
    int choice;
    double num1,num2;
    cout<<"This is a simple calculator"<<endl;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction"<<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for division"<<endl;
    cout<<" Enter the operation choice number (1-4)"<<endl;
    cin>>choice;

    cout<<"Enter any two numbers: "<<endl;
    cin>>num1>>num2;

    switch(choice){
        case 1:
        cout<<"Addition = "<<num1+num2<<endl;
        break;

        case 2:
        cout<<"subtraction = "<<num1 - num2<<endl;
        break;

        case 3:
        cout<<"Multiplication = "<<num1*num2<<endl;
        break;

        case 4:
        cout<<"Division = "<<num1/num2<<endl;
        break;
    }

    return 0;
 }
