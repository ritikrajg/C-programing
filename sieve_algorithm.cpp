#include<iostream>
#include<vector>
using namespace std;
vector<int> Count(int n){
    vector<bool> a(n,true);
    vector<int> count;
    a[0]=a[1]=false;
    for(int i=2;i<n;i++){
      if(a[i]){
        if(n%i==0){
       count.push_back(i);
      // break;
        }
        for(int j=i*2;j<n;j+=i){
            a[j]=false;
        }
      }
    }
    if(count.size()==0){
        count.push_back(n);
    }
    return count;
}
int main(){
int n;
cin>>n;
vector<int> a=Count(n);
//for(int i=0;i<a.size();i++){
    cout<<"Smallest and Largest Prime number are "<<a[0]<<" "<<a[a.size()-1]<<endl;
//}
return 0;
}