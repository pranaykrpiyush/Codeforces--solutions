#include <iostream>
using namespace std;
int main(){
    long n;
    int flag=0;
    cin >>n;
    long price[n], quality[n];
    for (int i=0;i<n;i++){
        if (flag==1){
            break;
        } 
        else{
        cin >> price[i]>> quality[i];
        if (i>0){
         //   for (int j=i-1;j>=0;j--){
            if ((price[i]<price[i-1] && quality[i]>quality[i-1])||(price[i]<price[i-2] && quality[i]>quality[i-2])){
                cout <<"Happy Alex";
                flag=1;
                break;
            }
            else if ((price[i-1]<price[i] && quality[i-1]>quality[i])||(price[i-2]<price[i] && quality[i-2]>quality[i])){
                cout <<"Happy Alex";
                flag=1;
                break;
            }

        //}
      }
    }
   } 
    if (flag==0){
        cout <<"Poor Alex";
    }

}