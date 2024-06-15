#include<iostream>
using namespace std;
class matrix{
    int x;
    int arr[20][20];
    public:
    void inputdata(){
        //cout<<"Enter the dimension of matrix: ";
        cin>>x;
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                cin>>arr[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void operator++(int){
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                arr[i][j]=arr[i][j]+1;
            }
        }
    }
    void operator--(int){
        
        for(int i=0;i<x;i++){
            for(int j=0;j<x;j++){
                arr[i][j]=arr[i][j]-1;
            }
        }
    }
};
int main(){
    matrix a;
    a.inputdata();
    //a.display();
    a++;
    cout<<"Matrix after incrementing each element"<<endl;
    a.display();
    a--;
    a--;
    cout<<"Matrix after decrementing each element"<<endl;
    a.display();
    return 0;
}