#include<iostream>
using namespace std;
class musicplayer{
    public:
    void playmusic(){
        cout<<"Play any music."<<endl;
    }
};
class punjabimusic:public musicplayer{
    void playmusic(){
        cout<<"Play punjabi music."<<endl;
    }
};
int main(){
    musicplayer *a;
    punjabimusic b;
    a=&b;
    a->playmusic();
    return 0;
}