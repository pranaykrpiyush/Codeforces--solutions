#include <iostream>
using namespace std;
int main(){
    int biceps=0,chest=0,back=0,n;
    cin>>n;
    int copy = n;
    int c, b, ba;
    c= n/3;
    b=n-c;
    for (int i=0;i<copy;i++){
        if (n%3==0){
        cin >>chest[]>>biceps>>back;
        n-=3;
        }
        else if (n%3==1){
            cin >>chest>>biceps;
        }
        else if (n%3==2){
            cin >>chest;
        }
    }
    if (chest > biceps && chest > back){
        cout <<"chest";
        }
        
    else if (biceps > chest && biceps > back){
        cout <<"biceps";
    }
    else {
        cout << "back";
    }
}