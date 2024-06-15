#include <iostream>
using namespace std;
class find_count
{
private:
    int a, b, c, count = 0;

public:
    void input(int d, int e, int f)
    {
        a = d, b = e, c = f;
    }

    void output()
    {
        if (a >= 1 && a <= 100)
        {
            if (b >= 1 && b <= 100)
            {
                if (c >= 1 && c <= 100)
                {
                    for (int i = a; i <= b; i++)
                    {
                        if (i % c == 0)
                        {
                            count++;
                        }
                    }
                    cout << "The total number which divides are " << count;
                }
                else
                {
                    cout << "You are not in the range.";
                }
            }
            else
            {
                cout << "You are not in the range.";
            }
        }
        else
        {
            cout << "You are not in the range.";
        }
    }
};
int main()
{
    int a, b, c;
    cout << "Enter the two number between whom you want the divisiblity occurns: ";
    cin >> a >> b;
    cout << "Enter the whom you want the divisiblity: ";
    cin >> c;
    find_count coun;
    coun.input(a, b, c);
    coun.output();

    return 0;
}