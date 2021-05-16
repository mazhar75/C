#include<stdio.h>
int main()
{int number,count=0,q,rem,mul=1;
scanf("%d",&number);
q=number;
while(q!=0)
{q=q/10;
count++;
}
//printf("%d",count);
int cnt,result;
cnt = count;
result = 0;
q=number;
while(q!=0)
{rem=q%10;
while(cnt!=0)
{mul = mul*rem;
cnt--;

}
result = result+mul;
cnt = count;
q = q/10;
mul = 1;

}
if(result ==number)
    printf("its an armstrong number",number);

else
    printf("No!its not an armstrong number",number);
return 0;


}
