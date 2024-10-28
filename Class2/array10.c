//평균
#include<stdio.h>

int main(){
    int test;
    scanf("%d", &test);

    int score[test];
    float average=0, high=0;
    for(int i=0; i<test; i++){
        scanf("%d",&score[i]);
        average+=score[i];
        if(high<score[i]){
            high=score[i];
        }
    }

    printf("%f", (average/high)*100/test);
}