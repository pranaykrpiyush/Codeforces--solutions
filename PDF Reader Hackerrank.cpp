#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int arr[26],height, length,temp=0;
    string word;
    char ch;
    for (int i=0; i<26;i++){
        cin >>arr[i];
    }
    cin>>ch;
    fflush(stdin);

    getline(cin,word);
    cout <<strlen(word);
    for (int i=0; i<(int)word.length();i++){
        if (arr[(int)(word[i]-97)]>temp){
            temp=(int)arr[i];
        }
    }
    height=temp;
    length=word.length();

    cout <<height*length<<" "<<word.length();

}
