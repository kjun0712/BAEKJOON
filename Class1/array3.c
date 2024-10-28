//최소, 최대
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    int num[a];
    int high=-1000000, low=1000000;
    for(int i=0; i<a; i++){
        scanf("%d",&num[i]);
        if(num[i]>=high){
            high=num[i];
        }
        if(num[i]<=low){
            low=num[i];
        }
    }

    printf("%d %d", low, high);
}