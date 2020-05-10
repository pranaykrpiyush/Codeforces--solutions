#include <iostream>
using namespace std;
int main(){
    long n,flag=0;
    cin >>n;
    
    int price[n], quality[n];
    for (int i=0;i<n;i++){
        cin >> price[i]>> quality[i];
        
    }
    for (int i=0;i<n;i++){
        if (flag == 1){
             break;
        }
        else{
        for (int j=i+1;j<=n/2;j++){
        if (price[i]<price[j] && quality[i]>quality[j]){
            cout <<"Happy Alex";
            flag=1;
            break;
          }
           else if(price[i]==price[j] && ( quality[i]==quality[j] ||
           quality[i]<quality[j]))
              {
               cout <<"Poor Alex";
               flag =1;
               break;
           }
        } 
    
        }
    }
    if (flag==0){
        cout <<"Poor Alex";
    }
    
     

}