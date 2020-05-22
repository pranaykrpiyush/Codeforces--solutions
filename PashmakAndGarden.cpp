#include <iostream>

using namespace std;
int main(){
    int x1,y1,x2,y2,x3,x4,y3,y4;
    cin >>x1>>y1>>x2>>y2;
    int l;
    if (x2-x1!=0){
         l=abs(x2-x1);
    }
    else{
        l=abs(y2-y1);
    } 

    if(((((y2-y1)!=0 && (x2-x1)==0) || y2-y1==0))|| abs(x2-x1)==abs(y2-y1)) {
     
       y3=y1;
       x3=x1+l;
       y4=y2;
      if (x2-x1==0){
            x4=x1+l;
      }
      else {
          x4=x1;
      }

      cout <<x3<<" "<<y3<<" "<<x4<<" "<<y4;

    }
    else {
        cout <<"-1";
    } 
}