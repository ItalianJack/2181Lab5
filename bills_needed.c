// SID 801272540

#include <stdio.h>

void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = 0, *tens = 0; *fives = 0; *ones = 0;
    int workingAmount = dollar_amount;

    while ((workingAmount / 20) > 0) {
        (*twenties)++;
        workingAmount -= 20;
    }

    while (workingAmount / 10 > 0) {
        (*tens)++;
        workingAmount -= 10;
    }

    while (workingAmount / 5 > 0) {
        (*fives)++;
        workingAmount -= 5;
    }

    *ones = workingAmount;
}

int main() {
    printf("Please enter a whole-dollar value:");

    int value;

    scanf("%d", &value);

    int twenties, tens, fives, ones;

    calc_bills(value, &twenties, &tens, &fives, &ones);

    printf("$%d in cash requires:\n$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d ", value, twenties, tens, fives, ones);

    return 0;
}
