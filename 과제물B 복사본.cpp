#include <stdio.h>

int main() {
    int i, j, n, z, x;

    for(i=1; i<=3; i++){
        
        scanf("%d", &n);
        if(n==1){
            scanf("%d %d",&z,&x );
            printf("%d",(z*x)/2);   
        }else if(n==2){
            scanf("%d %d", &z,&x);
            printf("%d", z*x);       
        }
    }   
    return 0;
}