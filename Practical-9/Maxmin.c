#include <stdio.h>
//BHUMIKA THAKUR-10398
int main() {
    int arr[5] = {25, 10, 45, 5, 30};
    int max, min;

    max = min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
//Maximum element = 45
//Minimum element = 5