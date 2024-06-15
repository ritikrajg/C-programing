#include<iostream>
using namespace std;
int n=0;
class Over{
    private:
    
    string place;
    string day;
    int temp;
    public:
    Over(){
      temp=0;
    }
    Over(string p,int t){
        place=p;
        temp=t;
    }
    Over(string p,string d,int t){
        
        place=p;
        day=d;
        temp=t;
        
    }
    void displayDetails(){
        n++;
        cout<<"Object "<<n<<":"<<endl;
        cout<<place<<" ";
        cout<<day<<" ";
        cout<<"Temperature: "<<temp<<" "<<endl;
    }
};
int main(){
    Over a;
    a.displayDetails();
    Over a1("Newyork",25);
    a1.displayDetails();
    Over a2("Paris","Monday",24);
    a2.displayDetails();
    return 0;
}