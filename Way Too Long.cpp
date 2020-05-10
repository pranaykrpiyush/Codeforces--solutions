#include <iostream>
#include <string.h>

using namespace std;
int main(){
    int n,length=0,i=0;
    cin >>n;
    char word[100];
    for (int i=0;i<n;i++){
    length=0;
        //fflush(stdin);
        //getline(cin,word);
        cin>>word;
        for ( int i=0;word[i]!='\0';i++){
            length++;
            //cout<<length<<endl;
        }
        if (length<=10){
        cout<<word<<endl;
        }
        else {
            char arr[3];
            arr[0]=word[0];
            //cout<<length;
            arr[1]=length-2;
            arr[2]=word[length-1];
            cout<<arr[0]<<length-2<<arr[2]<<endl;
        }

    }
    //for (int i=0;i<n;i++){
  //  if (strlen(words[i])>10){

    //}
    }
