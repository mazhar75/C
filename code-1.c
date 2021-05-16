#include<stdio.h>
int main()
{
   int i,j,n;
   scanf("%d",&n);
   float x[n][3],sum=0,avg=0;
   for(i=0;i<n;i++)
   {
       for(j=0;j<3;j++)
       {scanf("%f",&x[i][j]);}

   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<3;j++)
      { switch(j)
      {

       case 0:sum=sum+(x[i][j]*2);
              break;
       case 1:sum=sum+(x[i][j]*3);
              break;
       case 2:sum=sum+(x[i][j]*5);
              break;
         }}
       avg = sum/(2+3+5);
       printf("%.1f\n\n",avg);
       sum=0;
       avg=0;


   }
   return 0;



}
