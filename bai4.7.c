#include<stdio.h>
int main(){
	int luongcoban,ngaycongthucte,luong;
	printf("nhap luong co ban:");
	scanf("%d",&luongcoban);
	printf("nhapngaycongthucte:");
	scanf("%d",&ngaycongthucte);
	float songaycong=26;
	if (ngaycongthucte <= songaycong) {
        luong = luongcoban * (ngaycongthucte / songaycong);
    } else {
        float ngaycongbinhthuong = songaycong;
        float ngaycongle = ngaycongthucte - songaycong;
       luong = luongcoban * (ngaycongbinhthuong / songaycong)
            + luongcoban * 1.5 * (ngaycongle / songaycong);
    }
    printf("Luong nhan vien la: %d\n", luong);

    return 0;
}


