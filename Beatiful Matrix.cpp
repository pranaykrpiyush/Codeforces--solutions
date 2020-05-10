#include <iostream>

using namespace std;

int main()
{
    int arr[5][5],index=0,indexx=0,temp=0,count=0;
    for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
        cin >>arr[i][j];
        if (arr[i][j]==1){

        index=i;
        indexx=j;

        }
    }
    }
    //cout <<index<<" "<<indexx;

    for (int i=0; index!=2 ;i++){
        if (index>2){
        temp= arr[index][indexx];
        arr[index][indexx]=arr[index-1][indexx];
        arr[index-1][indexx]=temp;
        count++;
        index-=1;
         cout <<"in";
        }
        else if(index<2){
        temp= arr[index][indexx];
        arr[index][indexx]=arr[index+1][indexx];
        arr[index+1][indexx]=temp;
        count++;
        index+=1;

        }
    }
    for (int i=0;indexx!=2;i++){
        if(indexx<2){
        temp= arr[index][indexx];
        arr[index][indexx]=arr[index][indexx+1];
        arr[index][indexx+1]=temp;
        count++;
        indexx+=1;
        }
        else if (indexx>2){
        temp= arr[index][indexx];
        arr[index][indexx]=arr[index][indexx-1];
        arr[index][indexx-1]=temp;
        count++;
        indexx-=1;

        }
    }
    cout <<count;
    return 0;
}
