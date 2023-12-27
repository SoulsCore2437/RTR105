#include <stdio.h>

int main() {

    double skaitlis;
    char datu_tips;

    printf("Uzraksti decimalo skaitli: ");
    scanf("%lf", &skaitlis);

    printf("Izvelies datu tipu (C-char, I-int, L-long long): ");
    scanf(" %c", &datu_tips);

    double rezultats = 1;

    for (double i = 1; i <= skaitlis; ++i) {
        if (datu_tips == 'C') {
            rezultats *= i;
            if (rezultats > 127) {
                printf("Kluda: nevar aprekinat faktorialu ar char datu tipu izmantosanu.\n");
                return 1;
            }
        } else if (datu_tips == 'I') {
            rezultats *= i;
            if (rezultats > 2147483647) {
                printf("Kluda: nevar aprekinat faktorialu ar int datu tipu izmantosanu.\n");
                return 1;
            }
        } else if (datu_tips == 'L') {
            rezultats *= i;
            if (rezultats > 9223372036854775807) {
                printf("Kluda: nevar aprekinat faktorialu ar long long datu tipu izmantosanu.\n");
                return 1;
            }
        } else {
            printf("Nepareizi izvelets datu tips. Izvelies C-char, I-int, L-long long.\n");
            return 1;
        }
    }

    printf("Faktorials %.0lf ar datu tipu %c: %.0lf\n", skaitlis, datu_tips, rezultats);

    return 0;
}
