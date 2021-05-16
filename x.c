#include<stdio.h>
int main()
{float salary,x;
scanf("%f",&salary);
if(salary<=2000.00)
printf("Isento\n");
else if((salary<=3000.00)&&(salary>=2000.00))
{x = (salary-2000.00)*0.08;
printf("R$ %.2f\n",x);}
else if((salary<=4500.00)&&(salary>=3000.00))
{x = (3000.00-2000.00)*0.08+(salary-3000.00)*0.18;
printf("R$ %.2f\n",x);}
else if(salary>4500)
{x = (3000.00-2000.00)*0.08+(4500.00-3000.00)*0.18+(salary-4500.00)*0.28;
printf("R$ %.2f\n",x);}
return 0;
}
