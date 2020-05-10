#include <stdio.h>
#include <iostream>
//#include<conio.h>
#include <string.h>
using namespace std;
int main()
{
	char name[8][10];char nm[10];
	int i,j,n,m,z,k;
	printf("enter name:");
	//for(i=0;i<8;i++)
	//{
	//	fgets(name[i]);fflush(stdin);
	//}
	for (int i=0;i<8;i++){
	 cin >>name[i];
	 }
		for(i=0;i<7;i++)
     	{for(n=0;n<8;n++)
		  {

	        j=0;

				if(name[n][j]>=name[n+1][j])
	            {
	            	strcpy(nm,name[n]);
	            	strcpy(name[n],name[n+1]);
	            	strcpy(name[n+1],nm);

				   if(name[n][j]==name[n+1][j])
			    	{
				   for(j=0;name[i][j]!='\0';j++)
				    {
						if(name[n][j]>name[n+1][j+1])
				           {
				                strcpy(nm,name[n]);
	            	             strcpy(name[n],name[n+1]);
	            	              strcpy(name[n+1],nm);
					       }
              	    }
	            	}
	            }
	    	}
    	}
    	printf("entered name after sorting:");
    	for(m=0;m<8;m++)
    	{
    		printf("\n%s",name[m]);
		}
    //	getch();
}

