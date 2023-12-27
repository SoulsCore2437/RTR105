#include <stdio.h>

int main() {

    char burts1, burts2, burts3;
    char seciba;

    printf("Uzraksti pirmo burtu: ");
    scanf(" %c", &burts1);

    printf("Uzraksti otro burtu: ");
    scanf(" %c", &burts2);

    printf("Ievadi treso burtu: ");
    scanf(" %c", &burts3);

    printf("Izvelies secibas tipu (A-alfabeta, R-apgriezta): ");
    scanf(" %c", &seciba);

    if (seciba == 'A') {
        if (burts1 > burts2) {
            char temp = burts1;
            burts1 = burts2;
            burts2 = temp;
        }
        if (burts2 > burts3) {
            char temp = burts2;
            burts2 = burts3;
            burts3 = temp;
        }
        if (burts1 > burts2) {
            char temp = burts1;
            burts1 = burts2;
            burts2 = temp;
        }
    } else if (seciba == 'R') {
        if (burts1 < burts2) {
            char temp = burts1;
            burts1 = burts2;
            burts2 = temp;
        }
        if (burts2 < burts3) {
            char temp = burts2;
            burts2 = burts3;
            burts3 = temp;
        }
        if (burts1 < burts2) {
            char temp = burts1;
            burts1 = burts2;
            burts2 = temp;
        }
    } else {
        printf("Nepareizi izvelets secibu tips. Izvelies A-alfabeta, R-apgriezta.\n");
        return 1;
    }

    printf("Kartota seciba: %c%c%c\n", burts1, burts2, burts3);

    return 0;
}
