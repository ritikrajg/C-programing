#include<iostream>
#include<iomanip>
using namespace std;
class WeatherData{
    float value;
    public:
    void input(){
        cin>>value;
    }
    void operator+(){
        value=(value*(9.0/5.0))+32;
    }
    void operator-(){
        value=-(value*(9.0/5.0))+32;
    }
    void display(){
        cout<<fixed<<setprecision(1)<<value<<"°F"<<endl;
    }
};
int main(){
    WeatherData a;
    a.input();
    +a;
    a.display();
    -a;
    a.display();
    return 0;
}