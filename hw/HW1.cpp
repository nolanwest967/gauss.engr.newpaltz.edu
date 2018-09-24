#include <iostream>

using namespace std;
int main()
{
    int a;
    int b;
    int r;
    int rem;
    char op;

    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> op;

    if (b == 0 && op == '/')
    {
        cout << "Error: Divide by 0";
        goto SKIP;
    }

    if (op == '+')
    {
        r = a + b;
    }
    else if (op == '-')
    {
        r = a - b;
    }
    else if (op == '*')
    {
        r = a * b;
    }
    else if (op == '/')
    {
        r = a / b;
        rem = a % b;
        cout << "Result: " << r << " r " << rem;
        goto SKIP;
    }

    cout << "Result: " << r;
SKIP:

    return 0;
}