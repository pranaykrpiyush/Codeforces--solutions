#include <iostream>
using namespace std;
int main(){
    int n=10,count=0;
    int arr[n][2];
    cin >>n;
    //cout <<n;
    for (int i=0;i<n;i++){
        for (int j=0;j<2;j++){
        cin >> arr[i][j];
      }
    }
        for (int i=0;i<n;i++){
            for (int j=0;j<2;j++){
            for (int k=0;k<n;k++){
                if (j==0){
            if (arr[i][j]==arr[i+1+k][1]){
                count++;
            }
                }
                else if (j==1){
             if (arr[i][j]==arr[i+1+k][0]){
                count++;
            }       
                }
            }
          }
        } 
    cout <<count;
}
