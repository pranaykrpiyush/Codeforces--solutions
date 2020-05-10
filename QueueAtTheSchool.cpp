#include <iostream>
using namespace std;
int main(){
    int n,time;
    char ch;
    cin >>n>>time;
    string s;
    cin>>s;
    for (int j=0;j<time;j++){
     for (int i=0;i<n;i++){
        if (s[i]=='B' && s[i+1]=='G'){
            ch=s[i+1];
            s[i+1]=s[i];
            s[i]=ch;
            i+=1;
        }
      }
    }
    cout <<s;
}
