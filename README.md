# Experiment 5



## Aim:
To study and implement C++ decision making statement.


## Apparatus:
Vs Code, Github


## Theory:
Conditional statements allow you to make decisions within your programs. Specifically they can be used to execute specific blocks of code for particular situations only.
There are four primary conditional statements in C language:

### if:
The simplest form among conditionals where a certain condition is evaluated and if it evaluates true then certain flow control unit executes its commands. 

### if-else:
This is an extension of the first form since we have the alternative block whose commands get executed provided that the original statement was false when selected. 

### nested if-else:
This enables the evaluation of several conditions sequentially until it finds one which is true whereby if this happens its contained or associated block will be executed while ignoring all other blocks. 

### switch case: 
This facilitates picking one among many subprograms depending on a variable’s value. So rather than using multiple nested if-else statements we can use switch instead.

## Explanation: 
This program covers the basic bitwise operators such as AND, OR, XOR, NOT, Left shift, Right shift. We give two inputs and demonstrate how these bitwise operations function and print thier result.


## Code:

### if-else:
```
#include<iostream>
using namespace std;

int main() 
{
    // if statements 
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout<< "x is greater than y "<<endl;
    }
    

    // else statement
    int time = 20;
    if (time < 18) 
    {
        cout<<"Good Morning"<<endl;
    }
    else{
        cout<<"Good Evening"<<endl;
    }

    // simple if else 

    int  num;
    cout<<"Enter positive number: ";
    cin>>num;
    if(num==0) {
        cout<<num<<"You have entered zero"<<endl;
    }
    else if(num%2!=0){
        cout<<num<<" is odd"<<endl;
    }
    else {
        cout<<num<<" is even"<<endl;
    }
    
    return 0;


}
```

### Nested if-else:
```
#include<iostream>
using namespace std;

// Nested if else program
int main() {
    int  num1, num2, num3;
    cout<<"Enter number-1: ";
    cin>>num1;
    cout<<"Enter number-2: ";
    cin>>num2;
    cout<<"Enter number-3: ";
    cin>>num3;

    if(num1>=num2) {
        if(num1>=num3) {
            cout<<num1<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    else if(num2>=num1) {
        if(num2>=num3) {
            cout<<num2<<" is the greatest number"<<endl;
        }
        else {
            cout<<num3<<" is the greatest number"<<endl;
        }
    }
    
}
```

### Switch case:
```
#include<iostream>
using namespace std;
 // Simple calculator using 'Switch case'
 
 int main()
 {
    int choice;
    double num1,num2;
    cout<<"This is a simple calculator"<<endl;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction"<<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for multiplication"<<endl;
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
```
## Output:



## Conclusion:
This program helps us understand how bitwise operators can be used in C++. These bitwise operations can be used for performance optimization as they pack multiple values in a single variable making the program more memory efficient.
