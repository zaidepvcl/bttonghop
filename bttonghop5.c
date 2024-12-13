#include <stdio.h>
int main(){
    int n,i;
    printf("kiem tra so nguyen to: ");
    scanf("%d", &n);
    if (n < 2){
        printf("%d ko phai so nguyen",n);
    }
    for(i = 2;i<=n-1;i++){      
        if (n % i==0){
            printf("%d ko phai so nguyen",n);
            return 0;
        }
    }
    printf("%d la so nguyen to",n);
}
    
