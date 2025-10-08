
#include <stdio.h>
#include <assert.h>


int binary_search(int arr[], int size, int key) {

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}


void test_binary_search() {

    int arr0[] = {};
    assert(binary_search(arr0, 0, 5) == -1);

    int arr1[] = {42};
    assert(binary_search(arr1, 1, 42) == 0);
    assert(binary_search(arr1, 1, 4) == -1);

    int arr_even[] = {1, 3, 5, 7};
    assert(binary_search(arr_even, 4, 1) == 0);
    assert(binary_search(arr_even, 4, 3) == 1);
    assert(binary_search(arr_even, 4, 5) == 2);
    assert(binary_search(arr_even, 4, 7) == 3);
    assert(binary_search(arr_even, 4, 8) == -1);

    int arr_odd[] = {2, 4, 6, 8, 10};
    assert(binary_search(arr_odd, 5, 2) == 0);
    assert(binary_search(arr_odd, 5, 6) == 2);
    assert(binary_search(arr_odd, 5, 10) == 4);
    assert(binary_search(arr_odd, 5, 11) == -1);

    printf("All tests passed!\n");
}

int main() {
    test_binary_search();
    return 0;

}
