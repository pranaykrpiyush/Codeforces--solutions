#include <iostream>
using namespace std;
int main(){
    int T,n;
    cin >>T;
    for (int i=0;i<T;i++){
        cin>> n;
        int count=0;
        int digit=0,copy1=n,copy2=n;
        while(n!=0){
            digit++;
            n/=10;
        }
        int digits[digit];
        for (int i=0;i<digit;i++){
            digits[i]=copy1%10;
            if(digits[i]!=0){
                count++;
            }
            copy1/=10;
        }
        cout <<count<<endl;
        if (copy2<=10 || count==1){
            cout <<copy2;
        }
        else {
            for (int j=0;j<digit;j++){
                if (j==0 && digits[j]!=0){
                    cout <<digits[j]<<" ";
                }
                else if (j==1 && digits[j]!=0){
                    cout <<digits[j]*10<<" ";
                }
                else if (j==2 && digits[j]!=0){
                    cout <<digits[j]*100<<" ";
                }
                else if (j==3 && digits[j]!=0){
                    cout <<digits[j]*1000<<" ";
                }

            }
        }
        cout <<endl;

    }
}