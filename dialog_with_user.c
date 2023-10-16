#include<stdio.h>
int main (void)
{
long int a;
long int b;
long long int c;
printf("Uzraksti 400000:\n");
scanf("%ld", &a);
printf("Uzraksti 100000:\n");
scanf("%ld", &b);
if (a !=400000, b !=100000)
{
printf("Nepareizi uzrakstiti skaitli\n");
}
if (a== 400000, b==100000)
{
c = a*b;
printf("%ld * %ld = %lld\n", a,b,c);
}
return 0;
}
