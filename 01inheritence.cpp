#include<iostream>
using namespace std;
class a{
    
    public:
    a(){
        cout<<"This is my car.";
    }
};
class b:private a{

};
int main(){
    b w;
    return 0;
}