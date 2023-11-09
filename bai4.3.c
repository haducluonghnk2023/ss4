#include<stdio.h>
int main(){
	int chi_so_cu, chi_so_moi,sodien;
	printf("nhap chi so cu:");
	scanf("%d",&chi_so_cu);
	printf("nhap_chi_so_moi:");
	scanf("%d",&chi_so_moi);
	sodien=chi_so_moi - chi_so_cu;
	int tiendien;
	if(sodien>=0 && sodien<50){
		tiendien=sodien*10.000;
		printf("so tien p tra la : %d",tiendien);
	}else{if(sodien>=50 && sodien<100){
		tiendien=sodien*15.000;
		printf("so tien p tra la:%d",tiendien);
	}else if(sodien>=100 && sodien<150){
		tiendien=sodien*20.000;
		printf("so tien p tra la:%d",tiendien);
	}else{if(sodien>=150 && sodien<200){
		tiendien=sodien*25.000;
		printf("so tien p tra la:%d",tiendien);
	}else{if(sodien>=200 && sodien<250){
		tiendien=sodien*30.000;
		printf("so tien p tra la:%d",tiendien);
	}
	}
	}
	}
	}
	
