#include <iostream>
using namespace std;
int main(){
    string temp;
    string str;
    getline(cin,str);
    for (int i=0;str[i]!='\0';i++){
        if (str[i]==87 && str[i+1]==85 && str[i+2]==66){
            i+=2;
            }
        else {
                cout <<str[i];
                if (str[i+1]==87 && str[i+2]==85 && str[i+3]==66){
                    cout <<" ";
                }
        }
    }
}