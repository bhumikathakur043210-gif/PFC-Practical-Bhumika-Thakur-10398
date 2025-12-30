#include <stdio.h>
//BHUMIKA THAKUR-10398

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum;

    for(int i = 0; i < 3; i++) {
        sum = 0;   // reset sum for each row
        for(int j = 0; j < 3; j++) {
            sum = sum + arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
//Sum of row 1 = 6
//Sum of row 2 = 15
//Sum of row 3 = 24