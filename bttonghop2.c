#include <stdio.h>
int main(){
    int time;
    float hour, basesalary, extra, total;
    printf("so h lam viec trong thang?: " );
    scanf("%d" , &time);
    printf("tien luong lam theo h?: ");
    scanf("%f", &hour);
    basesalary = time * hour;
    if (time>160){
    extra = basesalary * 0.1;
    } else {
        extra = 0;
    }
    total = basesalary + extra;
    printf("Luong co ban: %.2f VND\n", basesalary);
    printf("Phu cap: %.2f VND\n", extra);
    printf("Tong luong: %.2f VND\n", total);

}