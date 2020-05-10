#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string word;
    cin>>word;
    for (int i=0;i<word.length();i++){
        if(word[i]==065 || word[i]==69 || word[i]==73 || word[i]==79 || word[i]==85 || word[i]==97 || word[i]==101 || word[i]==105 || word[i]==111 || word[i]==117 || word[i]==121){

        }
        else if(word[i]>=97 && word[i]<=122){
        cout<<"."<<word[i];
        }
        else if (word[i]>=65 && word[i]<=90){
         if (word[i]==65 || word[i]==69 || word[i]==73 || word[i]==79 || word[i]==85 || word[i]==89){

        }
         else{   char x=word[i]+32;
            cout <<"."<<x;
        }}

    }




    return 0;
}
