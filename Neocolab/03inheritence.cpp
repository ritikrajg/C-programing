#include<iostream>
using namespace std;
class Vechile{
    public:
    float dist;
    float time;
    void input(){
        cin>>dist>>time;
    }
};
class Car : public Vechile{
    public:
    void calspeed(){
        float speed= dist/time;
        cout<<"Speed of car: "<<speed<<" km/hr";
    }
};
int main(){
    Car dsd;
    dsd.input();
    dsd.calspeed();
    return 0;
}