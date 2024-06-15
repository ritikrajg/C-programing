#include <iostream>
using namespace std;
class SilverStall
{
public:
    string name;
    string detail;
    string owner;
    int cost;

    SilverStall()
    {
        cin >> name;
        cin >> detail;
        cin >> owner;
        cin >> cost;
    }
    void display()
    {
        cout << cost << endl;
    }
};
class GoldStall : public SilverStall
{
public:
    int tv;
    GoldStall()
    {
        cin >> name;
        cin >> detail;
        cin >> owner;
        cin >> cost;
        cin >> tv;
    }
    void display1()
    {
        int val=cost + tv * 200;
        cout << val << endl;
    }
};
class PlatinumStall : public GoldStall
{
public:
    int proj;
    PlatinumStall()
    {
        cin >> name;
        cin >> detail;
        cin >> owner;
        cin >> cost;
        cin >> tv;
        cin >> proj;
    }
    void display2()
    {
        int val=cost + tv * 200 + proj * 500;
        cout << val << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:{
        SilverStall aa;
        aa.display();
        break;
    }
    case 2:{
        GoldStall bb;
        bb.display1();
        break;
    }
    case 3:{
        PlatinumStall cc;
        cc.display2();
        break;
    }
    default:{
        cout << "Invalid Input";
        break;
    }
    }
    return 0;
}