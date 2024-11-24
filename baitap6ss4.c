#include<stdio.h>
int main(){
    int soDien,chiSoCu,chiSoMoi;
    float tienDien;
    printf('nhập số chỉ số cũ:');
    scanf("%d",&chiSoCu);
    printf("nhập chỉ số mới: ");
    scanf("%d", &chiSoMoi);
    soDien = chiSoMoi - chiSoCu;
    if (soDien < 0) {
        printf("Lỗi \n");
        return 1;
    }

    if (0 <= soDien < 50) {
        tienDien = soDien * 10000;
    } else if (50 <= soDien < 100) {
        tienDien = soDien *15000;
    } else if (100 <= soDien < 150) {
        tienDien =soDien *20000;
    } else if (150 <= soDien < 200) {
        tienDien = soDien *25000;
    } else if(soDien >= 200) {
        tienDien = soDien * 30000;
    }
    printf("Số điện tiêu thụ: %d kWh\n", soDien);
    printf("Tiền điện: %.2f VND\n", tienDien);
    
    return 0;
}