#include<iostream>
#include<string.h>

#include<stdio.h>
using namespace std;

int main()
{
    int a[26],temp=0,t,m=0,height;
    char word[10];
    for(int i=0;i<26;i++)
        cin>>a[i];


fflush(stdin);
       gets(word);
        //getline(cin, word);
//        cin>>word;
        for(int i=0;word[i]!='\0';i++)
        {
            m++;
        }

        t=word[0]-97;

        temp=a[t];
        for(int i=1;i<m;i++)
        {
            t=word[i]-97;
            if(a[t]>temp)
                {temp=a[t];}
        }
        height=m*temp;
        cout<<height;
        return 0;
}
