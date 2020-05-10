#include <iostream>

using namespace std;

int main()
{
    int n,arr[1000],counte=0,counto=0,indexe,indexo;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        cin >>arr[i];
     //   cout <<i;
    }
    for (int i=0;i<n;i++){


         if (arr[i]%2==0){
         counte++;
         indexe=i+1;

        }
        else {
            counto++;
            indexo=i+1;
        }

    }
     if (counte>counto){
        cout <<indexo;
     }
     else {
        cout <<indexe;
     }
        return 0;
}
