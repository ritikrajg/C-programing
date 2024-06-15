#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of pattern: ";
    cin >> n;
    char s = 'A' + (n - 1);
    for (int i = 0; i < n; i++)
    {
        char s1 = s - i;
        for (int j = 0; j <= i; j++)
        {
            cout << s1;
            s1++;
        }
        cout << endl;
    }
    return 0;
}