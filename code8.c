#include<stdio.h>
int main()
{int i,N;
scanf("%d",&N);
float p, x[N];
for(i=0;i<N;i++)
{scanf("%f",&x[i]);
}
for(i=0;i<N;i++)
{

printf("%f\n",&x[i]);
p=x[i];
int j=1;

while(j)
{if(p/2>=1.00)
    ++j;
    else
        break;
}
printf("%d dias\n",j-1);
}
return 0;
}
