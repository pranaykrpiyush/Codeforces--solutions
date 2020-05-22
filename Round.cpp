#include <iostream>
using namespace std;
int main(){
    int T=0,n,digit=0,flag=0,countZero=0;
    cin >>T;
    for (int i=0;i<T;i++){
        int countt=0;
        cin >> n;
        //cout <<count;
        int copy=n,temp=n;
        while(copy!=0){
            copy/=10;
            digit++;
        }

        int digits[digit];
         int j=0;
        if (n%10==n){
            cout <<n<<endl;
        }     
        else {
         while (n!=0){
                 digits[j]=n%10;
                    n/=10;                    n/=10;

                 j++;
            }
            for (int i=digit-1;i>=0;i--){
                int tem;
                if (i=0){
                tem=digits[i-1];
                digits[i-1]=digits[i];
                digits[i]=tem;
                }
            }
   
             for (int i=0;i<digit;i++){
                if (i!=digit-1 && digits[i]!=0){
                    flag=1;
                    // countt++;
                    
                
                }
             }
             for (int i=0;i<digit;i++){
                 if(digits[i]!=0 ){
                     countt++;
                 }
             }
             cout<<countt<<endl;
             countt=0;
             //cout <<countt;
            for (int i=0;i<digit;i++){
                
                if(i==0){
                    cout<<digits[i]<<" ";
                }
                else if (i==1 && digits[i]!=0){
                    cout <<digits[i]*10<<" ";
                }
                else if (i==2 && digits[i]!=0){
                    cout <<digits[i]*100<<" ";
                }
                else if (i==3 && digits[i]!=0){
                    cout <<digits[i]*1000<<" ";
                }
       
            }
    
        if (flag==0){
            cout <<temp<<endl;
        }
        cout <<endl;
        countt=0;
        }
    }
    
}