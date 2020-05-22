#include <iostream>

using namespace std;
int main(){
    long long int n=0,k=0,answer=0;
    cin >>n;
    cin>>k;
    
     if (n%2==0 && k<=n/2){
        answer=(2*k)-1;
    }
    else if (n%2==0 && k>=n/2){
        answer=2*(k-n/2);
    }
    else if (n%2!=0 && k<=(n/2)+1){
          answer=(2*k)-1;
    }
    else if (n%2!=0 && k>=(n/2)+1){
        answer=2*(k-(1+n/2));
    }


    cout <<answer;
}