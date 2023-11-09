#include <stdio.h>
char* kiem_tra_tam_giac(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            return "Tam giac deu";
        } else if (a == b || b == c || a == c) {
            if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
                return "Tam giac vuong can";
            } else {
                return "Tam giac can";
            }
        } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            return "Tam giac vuong";
        } else {
            return "Tam giac thuong";
        }
    } else {
        return "khong phai tam giac";
    }
}

int main() {
    float a, b, c;
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);
    char* ket_qua = kiem_tra_tam_giac(a, b, c);
    printf("Ba canh %.2f, %.2f, %.2f tao thanh tam giac %s\n", a, b, c, ket_qua);

    return 0;
}

