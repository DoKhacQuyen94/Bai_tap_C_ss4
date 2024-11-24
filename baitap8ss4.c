#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhập vào cạnh thứ nhất: ");
    scanf("%f", &a);
    printf("Nhập vào cạnh thứ hai: ");
    scanf("%f", &b);
    printf("Nhập vào cạnh thứ ba: ");
    scanf("%f", &c);
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Là 3 cạnh tam giác.\n");
    } else {
        printf("Không phải 3 cạnh tam giác.\n");
    }

    return 0;
}
