#include <iostream>
using namespace std;
void pop(int *arr, int n,int i){
       
        if (i<n-1){
       
        for (int j=i;j<n-1;j++){
            arr[j]=arr[j+1];
           }
        }
       
    }
int main(){
    int n;
    cin >>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }
    
    pop(arr, n,3);
    n--;
    for (int i=0;i<n;i++){
        cout <<arr[i]<<endl;
    }
}