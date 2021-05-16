#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,R1,R2,p;
    scanf("%lf %lf %lf",&a,&b,&c);
    p = sqrt((b*b)-4*a*c);
    if((a>0)&&((b*b-4*a*c)>=0))
    {
    R1 = (-b+p)/(2*a);
    R2 = (-b-p)/(2*a);
    printf("R1 = %.05lf\nR2 = %.5lf",R1,R2);
    }
    else
    {
    printf("%s\n","Impossivel calcular");
    }

   return 0;
}
