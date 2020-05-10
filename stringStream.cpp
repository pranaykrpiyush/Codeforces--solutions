#include <iostream>
#include <stdio.h>
#include<ios>
#include <limits>      
using namespace std;
int main()
{
    int n;
    char ch;
    cin >>n;
  //  fflush(stdin);
   // cin.ignore(numeric_limits::max(),’\n’);
    cin.ignore();
    //cin >>ws;
  //  cin>>ch;
   // cout <<ch;
    string str;
    getline (cin, str);
    for (int i=0;str[i]!='\0';i++){
        if (str[i]!=44){
            cout <<str[i];
        }
        else {
            cout <<endl;
        }
    }

}