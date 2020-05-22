#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
    int n,flag=0,count=0;
    cin >> n;
    char mat[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>mat[i][j];
            
        }
    }

    int first=mat[0][0], last=mat[n-1][n-1];
    char unique;
    if (first!=last){
        cout <<"NO";
        flag=1;
    }
    
    else {
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if ((i!=j ||j!=n-1-i) && mat[i][j]!=last){
                    unique=mat[i][j];
                    cout <<i<<j;
                    count++;
                }
            }
        }
        if (count>2){
            cout <<"NO";
            flag=1;
            cout <<"HERE";
        }
        else{
        for (int i=1;i<n;i++){
            if (flag==1){
                break;
            }
            for (int j=0;j<n;j++){
             if(i==j && mat[i][j]!=first){
                cout <<"NO";
                flag=1;
                break;
                
            }
            else {
               
                    if ((i!=j && mat[i][j]==last)&& j!=n-1-i){
                        cout <<"NO";
                       
                        flag=1;
                        break;

                    }
                
            }
          }
        }
      }
    }
    if (flag==0){
        cout <<"YES";
    }
}