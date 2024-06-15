/*#include<iostream>
using namespace std;
int check(int m,int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return m;
    }
    int ans=check(m,n/2);
    if(n%2==0){
        return ans*ans;
    }
    else{
        return m*ans*ans;
    }
}
int main(){
    cout<<check(2,512);
    return 0;
}*/
#include<iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent == 1) {
        return base;
    }
    
    int result = power(base, exponent / 2);
    
    if (exponent % 2 == 0) {
        return result * result;
    } else {
        return base * result * result;
    }
}

int main() {
    cout << power(2, 5) << endl;
    return 0;
}
