#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i=0, j=0, x=6;

    // letter A 
    for(i=0; i<=x; i++) 
    {
         for(j=0; j<=x; j++)
         {
              if(( i==0 && j==3)||
                   ( i==1 && j==2)||( i==1 && j==4)||
                   ( i==2 && j==1)||( i==2 && j==3)||
                   ( i==2 && j==5)||( i==3 && j==0)||( i==3 && j==6))
                   	printf("*");
              else { printf(" ");}
         }   
         printf("\n");
    }
    
    //letter B
    for(i=0; i<=x; i++) 
    {
         for(j=0; j<=x; j++)
         {
              if(( i==0 && j==0) || ( i==0 && j==1) || 
                 ( i==1 && j==0) || ( i==1 && j==2) || 
                 ( i==2 && j==0) || ( i==2 && j==1) ||
                 ( i==3 && j==0) || ( i==3 && j==2) ||
                 ( i==4 && j==0) || ( i==4 && j==1))
                   	printf("*");
              else { printf(" ");}
         }   
         printf("\n");
    }
    
    system("PAUSE");	
    return 0;
}
