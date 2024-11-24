#include<stdio.h>
int main(){
    int n;
    printf("Nhập số nguyên: ");
    scanf("%d", &n);
    if (n == 0){
        printf("Đây là số 0 \n");
    } else if(n>0){
        printf("Số %d là số nguyên dương \n",n);
    }else{
        printf("Số %d là số nguyên âm \n",n);
    }
    return 0;
}