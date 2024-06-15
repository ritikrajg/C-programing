#include <iostream>
using namespace std;
class parent
{
protected:
    int num;

public:
    void setNum(int n)
    {
        num = n;
    }
};
class child : public parent
{
public:
    int sum = 0, arr[10], i = 0;
    void fun()
    {
        while (num != 0)
        {
            int a = num % 10;
            arr[i] = a;
            num = num / 10;
            i++;
        }
        for (int j = 0; j < i; j++)
        {
            for (int k = j + 1; k < i; k++)
            {
                sum += arr[j] + arr[k];
            }
        }
        cout << sum<< endl;
    }
};
int main()
{
    int n;
    cin >> n;
    child a;
    a.setNum(n);
    a.fun();
    return 0;
}