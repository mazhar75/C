#include<stdio.h>
int main()
{int number,q,result=0,remainder;
scanf("%d",&number);
q=number;
while(q!=0)
{
remainder=q%10;
result = result*10+remainder;
q=q/10;}
if(result == number)
printf("Its a palindrome");
else
printf("No! its not a palindrome");
return 0;
}
