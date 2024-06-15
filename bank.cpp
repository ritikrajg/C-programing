#include <iostream>
using namespace std;
class transition
{
public:
    float balance = 1000;

} ;
int main()
{
    transition t;
    int n;
    float dep, drawl;
    cout << "Select your choices: " << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdrawl" << endl;
    cout << "3. Balance" << endl;
    cout << "4. Exit" << endl;
    
    while (true)
    {
        cin>>n;
        if(n==4){
            break;
        }
        switch (n)
        {
        case 1:
            cout << "Enter the Amount: ";
            cin >> dep;
            t.balance = t.balance + dep;
            break;
        case 2:
            cout << "Enter the Amount: ";
            cin >> drawl;
            if (t.balance - drawl < 1000)
            {
                cout << "You have not that much amount to withdrawl." << endl;
            }
            else
            {
                t.balance = t.balance - drawl;
            }
            break;
        case 3:
            cout << "your balance is " << t.balance;
            break;
        default:
            break;
        }
    }
    return 0;
}