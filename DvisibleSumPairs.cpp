#include <iostream>
using namespace std;
int main(){
    int k,n,count=0;
    cin >>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
        if ((arr[i]+arr[j])%k==0 && j!=i){
            count++;
        }
        }
    }
    cout <<count/2;
}