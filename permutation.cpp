#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
 bool checkInclusion(string s1, string s2) {
        bool a = false;
        int i = 0;
        //sort(s1.begin(), s1.end());
        //sort(s2.begin(), s2.end());
        
        while (i <= s2.size() - s1.size()) {
            string s3 = s2.substr(i, s1.size());
            
            if (s1 == s3) {
                a = true;
                break;
            } else {
                i++;
            }
        
        }
        
        return a;
    }
int main(){
    string s1="ab";
    string s2="eidboaoo";
    bool a=checkInclusion(s1,s2);
    cout<<a;

}
