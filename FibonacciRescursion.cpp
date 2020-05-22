#include <iostream>
using namespace std;
//int sum=0;
int fib(int n){
    
    if (n<=1){
        return n;
    }
   
     return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin >>n;
   int sum= fib(n);
   cout <<sum;
}