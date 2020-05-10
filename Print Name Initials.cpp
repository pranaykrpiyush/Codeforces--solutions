#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int space_count=0, space_index[2]={0,0};
    char name[100];

    fgets(name, sizeof(name), stdin);  // read string    printf("%s",name);
    for (int i=0; name[i]!='\0';i++){
            if (name[i]==32){

                space_index[space_count]=i;
                space_count++;
              //  printf("%d",space_index[space_count]);
            }
    }
  //  printf("%d",space_count);

    if (space_count==1){
        printf("%c ", name[0]);
        for (int j=0; name[j]!='\0'; j++){
            if(name[j]==32){
                for (int k=j; name[k]!='\0';k++){
                    printf("%c", name[k]);
                }

            }
        }
    }
    else if(space_count==2){
        printf("%c ",name[0]);
        //printf("%d %d",space_index[0],space_index[1]);
        printf("%c",name[(space_index[0]+1)]);

     for (int l=space_index[1]; name[l]!='\0'; l++ ){

        printf("%c",name[l]);
     }
    }

}
