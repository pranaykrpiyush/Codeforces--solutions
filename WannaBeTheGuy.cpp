#include <iostream>
using namespace std;
int main(){
    int levelX[1000],levelY[1000], level,x,y,flag=1;
    cin >>level;
    cin >>x;
    for (int i=0;i<x;i++){
        cin >> levelX[i];
    }
    cin >>y;
    for (int i=0;i<y;i++){
        cin >>levelY[i];
    }
    int totalLevels;
    totalLevels=x+y;

    for (int i=0;i<totalLevels;i++){
        
        //else{
            if (i<x){
            for (int j=1;j<=level; j++){
                
                if(levelX[i]!=j){
                    flag=0;
                    //break;
                }

            }
            }
            else {
            for (int j=0;j<=level;j++){
            
        
        
            if(levelY[i-x]){
                //cout <<i<<" "<<x<<" ";
                if (levelY[i-x]!=j){
                    flag=0;
                   // break;
                }
            }
        
        }
        }
        //}
    }
    
   if (flag == 0){
    cout <<"Oh, my keyboard!";
   }
   else {
       cout <<"I become the guy.";
   }
}