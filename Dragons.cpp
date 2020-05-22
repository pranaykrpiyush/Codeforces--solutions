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
    int flag=0,j=0,s,n,count=0,flag2=0;
    cin >>s >>n;
    int copy=s;
    int strength[n],bonus[n];
    for (int i=0;i<n;i++){
        cin >>strength[i]>>bonus[i];
     }
 
     for (int i=0;i<n;i++){
       for (int j=0;j<n;j++){
           if (s>strength[j]){
              // pop(arr, n,3);
               //n--;
   
               flag2=1;
           }
           
       }
       if(flag2==1){
       if (flag==0){
       for (int j=0;j<n;j++)
         if (s>=strength[j]){
             count++;
             s+=bonus[j];
              pop(strength, n,3);
              n--;
   
             flag=1;
             break;
         }
       }
       else {
          for (int j=i;j<n;j++)
         if (s>=strength[j]){
             count++;
              pop(strength, n,3);
              n--;
   
             s+=bonus[j];
             flag=1;
             break;
         }
       }
       }
       else 
        break;
     }
    
   // cout <<flag2;
    if ((count!=n && flag2!=1)){
        cout <<"NO";

    }
    else {
        cout <<"YES";
    }
 
}