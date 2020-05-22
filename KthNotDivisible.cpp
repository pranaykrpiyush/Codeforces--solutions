#include<iostream>
using namespace std;
int main(){
   long n,k,count=0,i,base;
   cin >>n>>k;
   base=n-1;
   for ( i=0;count!=k;i++){
    if ((k-count)<n-1){
       count+=k-count;
    }
    else 
    {
       count+=n-1;
        
    }
   }
cout <<i;
}