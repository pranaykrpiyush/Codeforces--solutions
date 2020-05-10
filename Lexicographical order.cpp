#include <iostream>

using namespace std;

int main()
{
    string word1, word2;
    int count1=0,count2=0;
    cin>>word1>>word2;
    for (int i=0; i<word1.length();i++){



     if (word1[i]>96 && word2[i]<97){
        if ((word1[i]-32)>word2[i]){
        count1++;
        }
        else if ((word1[i]-32)==word2[i]){
        }

        else {
        count2++;
        }
     }

    else if (word2[i]>96 && word1[i]<97){
        if (word1[i]>(word2[i]-32)){
            count1++;

       //     cout <<"LOOP ";
        }
        else if ((word2[i]-32)==word1[i]){
        }

        else {
        count2++;

        }
     }

    else if (word1[i]>96 && word2[i]>96){
     //cout <<"LOOp";
        if ((word1[i]-32)>(word2[i]-32)){
            count1++;
        //    cout <<count1<<" ";
        }
        else if ((word1[i]-32)==(word2[i]-32)){

        }

        else {
        count2++;
//       cout <<count2<<" ";
        }
     }
     else if (word1[i]<97 && word2[i]<97){
        if (word1[i]>word2[i]){
        count1++;
        }
        else if (word1[i]==word2[i]){
        }

        else {
        count2++;
            //cout<<count2<<" ";
        }

     }

     if (count1>count2){
        cout <<"1";
        break;
    }
    else if (count2>count1) {
    cout<<"-1";
    break;
    }


    }

   if (count1==count2){
   cout<<"0";
   }
  // cout <<count1<<" "<<count2;
    return 0;
}
