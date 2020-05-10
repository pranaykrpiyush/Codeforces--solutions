#include <iostream>
using namespace std;
int main(){
    int nStudents, nPuzzles;
    cin >> nStudents>>nPuzzles;
    int puzzles[nPuzzles];
    for (int i=0; i<nPuzzles;i++){
        cin >>puzzles[i];

    }
    for (in)
    for (int i=0;i<nPuzzles;i++){
        for (int j=0;j<nStudents-1){
            if(puzzles[i]-puzzles[j]<min){
                min=puzzles[i]-puzzles[j];
                
            }
        }
    }

}
