//나머지
#include<stdio.h>

int main(){
    int num[10];
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    int result[10], print=0, tf=0;
    for(int i=0; i<10; i++){
        result[i]=num[i]%42;
        for(int t=0; t<=i; t++){
            if(result[t]==result[i] && t!=i){
                tf=0;
                break;
            }else if(result[t]!=result[i] || t==i){
                tf=1;
            }
        }
        if(tf==1){
            print++;
        }
    }

    printf("%d", print);
}