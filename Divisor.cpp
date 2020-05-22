#include <iostream>
using namespace std;
int calc(int n){
    int i;
    for ( i=2;i<=n;i++){
        if (n%i==0){
            
           break;
        }
    }
    return i;

}
int main(){
    int n,k,answer;
    cin >>n>>k;
    for (int j=0;j<k;j++){
        answer=calc(n);
        n+=answer;
    }
    cout <<answer+;
}