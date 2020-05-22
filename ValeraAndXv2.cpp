#include <iostream>
using namespace std;
int main(){
    int n,flag=0;
    cin >>n;
    char mat[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >>mat[i][j];
        }
    }
    
    char first=mat[0][0],last=mat[0][n-1],unique;
    //cout <<first<<last;
     if (first!=last ){
        cout <<"NO";
       
        flag=1;
        
    }
    else{
    
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (mat[i][j]!=first){
                unique=mat[i][j];
            }
        }
    }

    for (int i=0;i<n;i++){
        if (flag==1){
            break;
        }
        for (int j=0;j<n;j++){
            if ((mat[i][j]!=first && mat[i][j]!=unique)|| ((i!=j && j!=n-1-i)&& mat[i][j]==first)){
                cout <<"NO";
                //cout <<"HERE";
                flag=1;
                break;
            }
        }
    }
    
    
    
     if (flag!=1) {
        
        
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
            else if(j==n-1-i && mat[i][j]!=last){
            cout <<"NO";
            flag=1;
            break;

            }
            else if ((i!=j && mat[i][j]==last)&& j!=n-1-i){
                        cout <<"NO";
                       
                        flag=1;
                        break;

                    }
                
            }
          }
        
      
    }
 





   // cout <<unique;
    if (flag==0){
    cout <<"YES";
    }
}
}
