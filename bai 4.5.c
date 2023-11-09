
     	
     	
     	
#include<stdio.h>
int main(){
	int ngay,thang,nam;
	printf("nhap ngay: ");
	scanf("%d", &ngay);
	printf("nhap thang: ");
	scanf("%d", &thang);
	printf("nhap nam: ");
	scanf("%d", &nam);
	if (thang==2&&nam%4==0&&ngay>0&&ngay<=29){
		printf("hop le");
	}
	else if (thang==2&&nam%4!=0&&ngay>0&&ngay<=28){
		printf("hop le");
	}
	else if (thang==4||thang==6||thang==9||thang==11&&ngay>0&&ngay<=30){
		printf("hop le");
	}else if (thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12&&ngay>0&&ngay<=31){
		printf("hop le");
	}
	else {
		printf("khong hop le");
	}
	
	}
