#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string eq;
    int count1=0,count2=0,count3=0,countp=0,countpp=0;
    cin >>eq;
    for (int i=0;i<eq.length();i++){
        if (eq[i]==49){
            count1++;
        }
        else if (eq[i]==50){
            count2++;
        }
        else if (eq[i]==51){
            count3++;
        }
        else {
        countp++;
        }
    }
    //cout<<countp<<endl;
    for (int i=0;i<count1;i++){
        cout<<"1";
        if(countpp<countp){
        cout<<"+";
        countpp++;
        }
    }
    for (int i=0; i<count2;i++){
        cout <<"2";
        if(countpp<countp){
        cout<<"+";
        countpp++;
        }
    }
    for (int i=0;i<count3;i++){
    cout<<"3";
    if(countpp<countp){
        cout<<"+";
        countpp++;
        }
    }
    return 0;
}
