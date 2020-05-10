#include <iostream>
using namespace std;
int main(){
    string str;
    int n;
    getline(cin,str);
    n=str.length();
    int arr[n],count=0,j=0,scount=0;
    for (int i=0;str[i]!='\0';i++){
        if (str[i]==32){
            scount++;
        }
    }
   
    for (int i=0;i<=scount;i++){
        count=0;
       
       
       while (str[j]!=32) 
        if (str[j]!=32){
            count++;
            arr[i]=count;
            j++;
        }
        else{
           
            j+=2;
            cout <<j;
            
        }
    
    }
    cout <<arr[0]<<" " <<arr[1]<<" "<<arr[2];
}