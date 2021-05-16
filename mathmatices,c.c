#include<stdio.h>
int main()
{int  M,N,i,j;
while(scanf("%d %d",&M,&N) != EOF)
{


long long int f1=1,f2=1;

for(i=1;i<=M;++i)
{
    f1 = f1*i;
}
for(j=1;j<=N;++j)
{
    f2 = f2*j;
}


printf("%lld\n",f1+f2);
}
return 0;

}
