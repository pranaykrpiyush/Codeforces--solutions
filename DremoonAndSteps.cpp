#include <iostream>
using namespace std;
int main(){
    int n,m,flag=0;
    cin >>n>>m;
    int x=n/2;
    for (int i=0;x>=0;i++){
         if ((x+(n-(x*2)))%m==0){
                cout <<x+(n-(x*2));
                
                flag=1;
                break;
            }
            x--;
       
        }
    if (flag==0){
        cout <<"-1";
    }
}