#include <iostream>
using namespace std;

int count(int n){
    if(n == 0){
        return 1;
    }
    int smallAns = count(n / 10);
    if (n>=10)
    return smallAns +1;
    else
    {
        return smallAns;
    }
    
}

int main(){
    int n;
    cin >>n;
    cout <<count(n);
}