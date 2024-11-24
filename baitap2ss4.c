#include<stdio.h>
int main(){
    int n;
    printf("Nhập số nguyên bất kì vào đây: ");
    scanf("%d",&n);
    if (n%2==0){
        printf("Số %d là số chẵn \n",n);
    }else{
        printf("Số %d là số lẻ", n);
    }
    return 0;
}