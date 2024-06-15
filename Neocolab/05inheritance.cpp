#include<iostream>
using namespace std;
class Bicycle{
    public:
    int gears;
    int speed;
    Bicycle(){
        cin>>gears>>speed;
    }
};
class MountainBike:public Bicycle{
    public:
    int seatHeight;
    MountainBike(){
        cin>>seatHeight;
    }
    void display(){
        cout<<gears<<" "<<speed<<endl;
        cout<<seatHeight;
    }
};
int main(){
    MountainBike hero;
    hero.display();
    return 0;
}