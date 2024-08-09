//X보다 작은수
#include<stdio.h>

int main(){
    int a, high;
    scanf("%d %d", &a, &high);

    int num[a];
    for(int i=0; i<a; i++){
        scanf("%d",&num[i]);
    }

    for(int i=0; i<a; i++){
        if(high>num[i]){
            printf("%d ", num[i]);
        }
    }
}