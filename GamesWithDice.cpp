#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,ac=0,bc=0,dc=0;
    cin >>a>>b;
    for (int i=1;i<=6;i++){
        if (abs(i-a)>abs(i-b)){
            ac++;
        }
        else if (abs(i-b)>abs(i-a)){
            bc++;
        }
        else {
            dc++;
        }
    }
    cout <<bc<<" "<<dc<<" "<<ac;
}