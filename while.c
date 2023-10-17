#include <stdio.h>
#include <stdlib.h>
#define N 10
#include <time.h>

int main (void)
{
int i=0;
int gadiijuma_skaitlis, gadiijuma_skaitlju_generatora_grauds;

gadiijuma_skaitlju_generatora_grauds = time(NULL);
printf("Gadījuma skaitļu ģeneratora grauds - %d\n",gadiijuma_skaitlju_generatora_grauds);

srand(gadiijuma_skaitlju_generatora_grauds);

i = i + 1; // NB! darbības (operācijas) netiek pildītas vienlaicīgi
	   // šeit ir divas operācijas (saskaitīšana - + un piešķiršana - =)
	   // saskaitīšana ir prioritārā - tā tiks izpildīta pirmā
	   // i++; inkrements (skaitļa piegums par vienu vienību)
	   // ++i; 
	   // i += 1;
gadiijuma_skaitlis = rand();

while(gadiijuma_skaitlis % 10 )
{
printf("%d. skaitlis\n",i);
printf("Gadījuma skaitļis - %d\n",gadiijuma_skaitlis);
printf("Šis skaitlis nedalās ar 10 bez atlikuma.\n");
gadiijuma_skaitlis = rand();
i++;
}
printf("Ģenerēšanas beigas\n");
printf("Beidzot skaitlis %d. iterācijā %d dalās ar 10 bez atlikuma.\n",i,gadiijuma_skaitlis);

return 0;
}
