#include<stdio.h>
int main(){
    //Bhumika Thakur-10398
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
char ch='A';
for(int j=1;j<=i;j++){
    printf("%c",ch);
    ch++;
}
printf("\n");
    }
    return 0;
}

//output:
//A
//AB
//ABC
//ABCD



