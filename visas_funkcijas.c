#include <stdio.h>
#include "funkcija_1.c"
#include "funkcija_2.c"
#include "funkcija_3.c"
#include "funkcija_4.c"
int main() {
    bez_bez();

    int skaitlis1 = 21, skaitlis2 = 20;
    ar_bez(skaitlis1, skaitlis2);

    int atbilde1 = bez_ar();
    printf("Kubs: %d\n", atbilde1);

    int skaitlis3 = 5, skaitlis4 = 8;
    int atbilde2 = ar_ar(skaitlis3, skaitlis4);
    printf("Summa: %d\n", atbilde2);

    return 0;
}
