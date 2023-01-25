#include <stdio.h>
#include <stdlib.h>
#define PAINT "consumption of the first paint in kgs"
#define PRICE "price of the first paint in CZK"
#define PAINT2 "consumption of the second paint in kgs"
#define PRICE2 "price of the second paint in CZK"
#define ROOF 200
float input(const char *txt, int rank) {
    float value;
    int countOfChar;
    do {
        printf("Enter a %s:\n", txt);
        scanf("%f", &value);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You have not typed a real number\n");
        } else if (value <= 0) {
            printf("You need to type a positive number\n");
        }
    } while (countOfChar != 0 || value <= 0);
    return value;
}

int main() {
    float price1, price2, consumption1, consumption2, vysledek1, vysledek2, result1, result2;
    consumption1 = input(PAINT,1);
    consumption2 = input(PAINT2,2);
    price1 = input(PRICE,1);
    price2 = input(PRICE2,2);
    vysledek1 = (ROOF / consumption1) * price1;
    vysledek2 = (ROOF / consumption2) * price2;
    if(vysledek1>vysledek2){
       result1 = vysledek1 - vysledek2;
        printf("Buy the second color, because it is %d cheaper", result1);
    }
    return 0;
}