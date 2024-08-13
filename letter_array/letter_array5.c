//숫자의 합
#include<stdio.h>

int main(){
    int num, total=0;
    scanf("%d", &num);

    char number[num];
    scanf("%s", number);

    for (int i=0; i<num; i++){
        total+=number[i]-48;
    }

    printf("%d", total);
}