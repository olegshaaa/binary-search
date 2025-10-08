
#include <stdio.h>


int main() {

    int sums_count[14] = {0};

    for (int a=0; a<=9; a++) {
        for (int b=0; b<=9; b++) {
            for (int c=0; c<=9; c++) {
                int sum = a+b+c;
                if (sum < 14) {
                    sums_count[sum]++;
                }
            }
        }
    }
    int lucky_tickets = 0;
    for (int i = 0; i < 14; i++) {
        lucky_tickets += 2 * sums_count[i] * sums_count[i];

    }


    int total = 1000000;
    double percentage = (double)lucky_tickets/total*100;

    printf("Total number of tickets:%d\n", lucky_tickets);
    printf("Percent of lucky tickets: %.2f%%\n", percentage);
    for (int q = 0; q < 14; q++) {
        printf("Arr: %d\n", sums_count[q]);
    }


    return 0;
}
