#include <iostream>
using namespace std;
int fact(int n){
    int prod=1;
    if (n!=1){
    prod*=n*fact(n-1);
    }
    return prod;
}
int main(){
    int n;
    cin >>n;

   cout << fact(n);
}