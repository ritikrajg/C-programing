/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of pattern: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = 0; j < n; j++)
        {

            if (j >= n - k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        
        cout << endl;
        k++;
    }
    return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of pattern: ";
    cin >> n;
    int k = n;
    for (int i = 0; i < n; i++)
    {
         // Move this line outside the loop
        for (int j = 0; j < n; j++)
        {
            if (j < k-1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        // Move this line inside the loop
        cout << endl;
        k--; // Increment k inside the loop
    }
    return 0;
}
