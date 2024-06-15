#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    char c;
    cout << "enter the operater: " << endl;
    cin >> c;
    switch (c)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
        cout << "enter any other operater.";
        break;
    }
    return 0;
}