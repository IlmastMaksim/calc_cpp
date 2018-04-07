# include <iostream>

using namespace std;

int addition (float a, float b) 
{
    float res = a + b;
    cout << "The answer is: " <<  res << endl;
}

int subtraction (float a, float b) 
{
    float res = a - b;
    cout << "The answer is: " <<  res << endl;
}

int multiply (float a, float b) 
{
    float res = a * b;
    cout << "The answer is: " << res << endl;
}

int divide (float a, float b) 
{
    float res = a / b;
    cout << "The answer is: " << res << endl;
}

int main()
{
    char op; //operator
    float num1, num2; // first and second inserted numbers
    cout << "Enter the first operand: ";
    cin >> num1;

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter the second operand: ";
    cin >> num2;
    if (op != '+' && op != '-' && op != '*' && op != '/') 
    {
        do
            {
                cout << "Try again! Enter operator either + or - or * or /: ";
                cin >> op;
            } 
        while (op != '+' && op != '-' && op != '*' && op != '/');
    }
    switch(op)
    {
        case '+':
            addition(num1, num2);
            break;

        case '-':   
            subtraction(num1, num2);
            break;

        case '*':
            multiply(num1, num2);
            break;

        case '/':
            divide(num1, num2);
            break;

        default:
            cout << "Error! Something went wrong\n";
            break;
    }

    return false;
}

