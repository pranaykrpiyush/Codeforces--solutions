#include <iostream>
using namespace std;
int main(){
    int n,sumx=0,sumy=0,sumz=0;
    cin >>n;
    int x[n],y[n],z[n];
    for (int i=0;i<n;i++){
        cin >>x[i]>>y[i]>>z[i];
    }
    for (int i=0;i<n;i++){
        sumx+=x[i];
        sumy+=y[i];
        sumz+=z[i];
    }
    if (sumx==0 && sumy==0 && sumz==0){
        cout<<"YES";

    }
    else {
        cout <<"NO";
    }
    

}