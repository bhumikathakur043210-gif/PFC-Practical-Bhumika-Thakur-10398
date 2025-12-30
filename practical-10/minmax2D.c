#include <stdio.h>
//BHUMIKA THAKUR-10398
int main() {
    int arr[3][3] = {
        {10, 25, 5},
        {40, 15, 20},
        {30, 45, 2}
    };

    int max = arr[0][0];
    int min = arr[0][0];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
//Maximum element = 45
//Minimum element = 2