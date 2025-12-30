#include <stdio.h>
//BHUMIKA THAKUR-`10398//

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int start = 0, end = 4, temp;

    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed Array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
//Reversed Array:
//50 40 30 20 10 