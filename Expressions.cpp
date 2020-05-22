#include <iostream>
using namespace std;
int main(){
    int a,b,c,max=0;
    cin >>a>>b>>c;
    for (int i=0;i<5;i++){
        if ((a*b*c)>max){
            max=a*b*c;
        }
        else if (((a*b)+c)>max){
            max=(a*b)+c;
        }
        else if (((a+b)*c)>max){
            max=(a+b)*c;
        }
        else if ((a+b+c)>max){
            max=a+b+c;
        }
        else if ((a*(b+c))>max){
            max=a*(b+c);
 
        }
        
    }
    cout <<max;
}