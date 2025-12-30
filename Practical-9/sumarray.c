#include <stdio.h>
//BHUMIKA THAKUR-10398
int main() {
    int arr[5] = {10, 15, 20, 25, 30};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
//Sum of even elements = 60