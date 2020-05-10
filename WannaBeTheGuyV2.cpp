#include <iostream>
#include <set>
using namespace std;

int main(){
    int x,y,level,levelX[1000],levelY[1000],flag=1,allLevel[2000];
    cin >>level;
    cin >>x;
    for (int i=0;i<x;i++){
        cin >>levelX[i];
    }
    cin >>y;
    for (int i=0;i<y;i++){
        cin >>levelY[i];
    }
    set <int> s;
    for (int i=0;i<x;i++){
        s.insert(levelX[i]);
    }
    for (int i=0;i<y;i++){
        s.insert(levelY[i]);
    }
    int n=int(s.size());

    if (n==level){
        cout <<"I become the guy.";
    }
    else {
        cout <<"Oh, my keyboard!";
    }

    //cout <<flag;
}