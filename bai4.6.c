#include <stdio.h>

int main() {
    
    int so1, so2, so3;

    
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    printf("Nhap so thu ba: ");
    scanf("%d", &so3);

   
    if (so1 < so2) {
        float temp = so1;
        so1 = so2;
        so2 = temp;
    }
    if (so2 < so3) {
        float temp = so2;
        so2 = so3;
        so3 = temp;
    }
    if (so1 < so2) {
        float temp = so1;
        so1 = so2;
        so2 = temp;
    }

   
    printf("Cac so theo thu tu giam dan: %d, %d, %d\n", so1, so2, so3);

    return 0;
}

