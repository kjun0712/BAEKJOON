//최댓값
#include<stdio.h>

int main(){
    int num[9];
    int high=-100, highnum=0;

    for(int i=0; i<9; i++){
        scanf("%d",&num[i]);
        if(high<num[i]){
            high=num[i];
            highnum=i+1;
        }
    }
    printf("%d\n%d", high, highnum);
}