#include <iostream>
using namespace std;

int main(){
        int n,max=0,min=0,count=0,temp,i;
        cin >>n;
        int arr[n];

        //cout <<n;
        cin >>arr[0];
        min=arr[0];
        max=arr[0];
       // cout <<arr[0];
        for ( i=1;i<n;i++){
           // cout <<i<<endl;
           //cout <<n<<" ";
            cin >>arr[i];
         //   cout <<endl<<arr[i];

        }
        //cout <<n;
        //cout <<arr[n-1];

        /*for (int i=0;i<n;i++){

            cout <<arr[i]<<" ";


        }*/

         for (int i=1;i<n;i++){

            if (arr[i]>max){
                max=arr[i];
            }
            if (arr[i]<min){
                min=arr[i];
            }

            }


        for (int i=0;i<n;i++){
            if (arr[0]!=max){
                for (int j=0;arr[j]!=max;j++){
                    temp=arr[j-1];
                    arr[j-1]=arr[j];
                    arr[j]=temp;
                    count++;
                }
            }
        }
        for (int i=0;i<n;i++){
            if(arr[n-1]!=min){
                for (int j=0;arr[j]!=min;j++){
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                    count++;
                }
            }
        }

        //cout <<count;

 return 0;
}

