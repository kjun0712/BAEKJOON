#include<stdio.h>

int main(){
    int X,N,a,b;
    int p=0;
    scanf("%d %d",&X,&N);
    for(int i=1;i<=N;i++){
        scanf("%d %d",&a,&b);
        p+=a*b;
    }if(X==p){
        printf("Yes");
    }else{
        printf("No");
    }
}