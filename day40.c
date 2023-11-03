#include<stdio.h>
int main()
{
    int x,y,D;

   /* D = skill difference between two team ;*/
   printf("enter the skill value of two teams\n");
   scanf("%d%d",&x,&y);
    
   D=x-y;

   if(x<=D){
    printf("chef find the match intresting");
   }

   else{
    printf("chef do not find the match intresting");
   }
    return 0;
}
