#include<stdio.h>
int main()
{int i, N;
scanf("%d",&N);
float x[N];
for(i=1;i<=N;i++)
{scanf("%f",&x[i]);
}
for(i=1;i<=N;i++)
{printf("%f\n",x[i]);
}
return 0;
}
