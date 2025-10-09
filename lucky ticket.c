#include <stdio.h>

int main() {
    const size_t max_digit = 9;
    const size_t half_ticket_length = 3;
    const size_t half_ticket_max_sum = half_ticket_length * max_digit;
    const size_t half_array_size = (half_ticket_max_sum + 1)/2;
    const size_t total_tickets = 1000000;

    size_t sums_count[half_array_size];
    for (int i = 0; i < half_array_size; i++) {
        sums_count[i] = 0;
    }

    for (int a = 0; a <= max_digit; a++) {
        for (int b = 0; b <= max_digit; b++) {
            for (int c = 0; c <= max_digit; c++) {
                int sum = a + b + c;
                if (sum < half_array_size) {
                    sums_count[sum]++;
                }
            }
        }
    }

    size_t lucky_tickets = 0;
    for (int i = 0; i < half_array_size; i++) {
        lucky_tickets += 2 * sums_count[i] * sums_count[i];
    }

    double percentage = (double)lucky_tickets / total_tickets * 100;

    printf("Total number of lucky tickets: %zu\n", lucky_tickets);
    printf("Percentage of lucky tickets: %.2f%%\n", percentage);

    return 0;
}

