#include <stdio.h>

void mod(int);

int main(void){
    int num;

    printf("Please enter a number : ");
    scanf("%d", &num);
    mod(num);

    printf("\n");
    return 0;
}

void mod(int num){
    if (num == 0) //0이면 0출력
        printf("%d", num);
    else {
        mod(num/2); //1보다크면 나머지 출력
        printf("%d", num%2);
    }
}