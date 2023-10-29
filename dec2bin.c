#include<stdio.h>
void dec2bin(char num)
{
int i = 7;
int bit;
bit = (num >> i) & 1;
printf ("%d", bit);

bit = (num >> (i - 1)) & 1;
printf ("%d", bit);

bit = (num >> (i - 2)) & 1;
printf ("%d", bit);

bit = (num >> (i - 3)) & 1;
printf ("%d", bit);

bit = (num >> (i - 4)) & 1;
printf ("%d", bit);

bit = (num >> (i - 5)) & 1;
printf ("%d", bit);

bit = (num >> (i - 6)) & 1;
printf ("%d", bit);

bit = (num >> (i - 7)) & 1;
printf ("%d\n", bit);

}
int main()
{
char number;
printf("Uzraksti kadu naturalo skaitli:\n");
scanf("%hhd", &number);
printf("Skaitlis binara koda %d:\n", number);
dec2bin(number);
return 0;
}
