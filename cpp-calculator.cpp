#include <iostream>
using namespace std;

double add(double,double);
double subtract(double,double);
double multiply(double,double);
double divide(double,double);
void printmenu()
{
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << endl;
}

int main()
{
    int choice;
    double num1,num2;
    printmenu();
    cout <<"Choose an opreation: ";
    cin >> choice;
    if(choice<1 || choice>4)
    {
        cout <<"Wrong choice, please try again";
        return 0;
    }
    cout << endl;
    cout <<"Enter first number: ";
    cin >> num1;
    cout <<"Enter second number: ";
    cin >> num2;
    cout << endl;
    switch(choice)
    {
        case 1:
        {
            cout << "Result: " << add(num1,num2);
        }
        break;
        case 2:
        {
             cout << "Result: " << subtract(num1,num2);
        }
        break;
        case 3:
        {
            cout << "Result: " << multiply(num1,num2);
        }
        break;
        case 4:
        {
            if(num2!=0)
            cout << "Result: " << divide(num1,num2);
            else
            cout <<"You cannot divide by zero";
        }
        break;
        default:
        {
            cout << "Wrong choice\n";
        }
    }
    cout << endl;
    return 0;
}

double add(double a,double b)
{
    return a+b;
}

double subtract(double a,double b)
{
    return a-b;
}

double multiply(double a,double b)
{
    return a*b;
}

double divide(double a,double b)
{
    return a/b;
}