#include <iostream>
using namespace std;
int main(){
   long long int state,max=0;
    
    cin >>state;
    long copy=state;
    int s=state%10;
    state/=10;
    state/=10;
    state=state*10+s;
    //cout <<state;
     if (copy/10>copy && (copy/10 >state || copy/10==state)){
        max=copy/10;
    }

    else if (state>copy && state > copy/10){
        max=state;
    }
    else if (copy>state && copy>copy/10){
        max=copy;

    }
    cout <<max;
}