#include<iostream>
#include<fstream>
using namespace std;
class product{
    string pname;
    int quantity;
    float price;
    public:
    void setProduct(){
        cout<<"Enter Product Name: "<<endl;
        cin>>pname;
        cout<<"Enter Quantity: "<<endl;
        cin>>quantity;
        cout<<"Enter Price: "<<endl;
        cin>>price;
    }
    void getProduct(){
        cout<<pname<<endl<<quantity<<endl<<price<<endl;

    }
};
int main(){
    product p1;
    ofstream fout;
    fout.open("product.dat");
    p1.setProduct();
    fout.write((char*)&p1,sizeof(p1));
    fout.close();
    p1.getProduct();
    return 0;
}