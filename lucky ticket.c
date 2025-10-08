
#include <stdio.h>


int main() {
    const int max_digit = 9;
    const int max_sum = 14;

    int sums_count[14] = {0};

    for (int a=0; a <= max_digit; a++) {
        for (int b=0; b <= max_digit; b++) {
            for (int c = 0; c <= max_digit; c++) {
                int sum = a + b + c;
                if (sum < max_sum) {
                    sums_count[sum]++;
                }
            }
        }
    }
    int lucky_tickets = 0;
    for (int i = 0; i < max_sum; i++) {
        lucky_tickets += 2 * sums_count[i] * sums_count[i];

    }


    int total = 1000000;
    double percentage = (double)lucky_tickets/total*100;

    printf("Total number of tickets:%d\n", lucky_tickets);
    printf("Percent of lucky tickets: %.2f%%\n", percentage);


    return 0;
}
