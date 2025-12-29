#include<stdio.h>
//Bhumika Thakur-10398
int sumOfDigits(int n){
    int sum = 0;
    while(n!=0){
        int a=n%10;
        sum=sum+a;
        n=n/10;
    }
    return sum;
}
int main (){
    int n=1234;
    printf("sum of digits =%d",sumOfDigits(n));
    return 0;
}
//output:sum of digits =10
