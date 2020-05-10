#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >>n>>m;
    int intersections=n*m, sticks=n+m;
   // cout <<intersections<<" "<<sticks;
   for (int i=2;intersections>=0;i++){
       if (i%2==0){
           if (intersections!=0 && sticks>1){
           sticks-=2;
           //intersections--;
           n--;
           m--;
           intersections=n*m;
         }
       else {
           cout <<"Malvika";
           break;
        }
       }
       else {//if (i%2!=0){
           if (intersections!=0 && sticks > 1){
               sticks-=2;
             //  intersections--;
                n--;
                m--;
                intersections=n*m;

           }
           else {
               cout <<"Akshat";
               break;
           }
        }
   }
}