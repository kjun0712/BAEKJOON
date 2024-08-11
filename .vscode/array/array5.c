//공넣기
#include<stdio.h>

int main(){
    int basket, num;
    scanf("%d %d", &basket, &num);

    int score[basket];
    int start, end, ball;
    for(int i=0; i<basket; i++){
        score[i]=0;
    }

    for(int i=0; i<num; i++){
        scanf("%d %d %d", &start, &end, &ball);
        for(int t=start-1; t<end; t++){
            score[t]=ball;
        }
    }

    for(int i=0; i<basket; i++){
        printf("%d ", score[i]);
    }
}