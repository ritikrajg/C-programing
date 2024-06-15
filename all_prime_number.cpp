#include <iostream>
using namespace std;
int main()
{
    int n, div = 2;
    cout << "enter the number: ";
    cin >> n;
    while (div <= n)
    {
        int num = 2;
        while (num < div)
        {
            if (div % num == 0)
            {
                div = div + 1;
                
            }
            else
            {
                num = num + 1;
            }
        }
        cout << div;
        cout<<"\n";
        div=div+1;
    }
    return 0;
}