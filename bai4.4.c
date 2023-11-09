#include<stdio.h>
int main(){
	



     int thang,nam ;
     printf("nhap nam :");
     scanf("%d",&nam);
     printf("nhap thang:");
     scanf("%d",&thang);
     
     switch(thang){
     	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
     		printf("thang co 31 ngay");
     		break;
     
	
     	case 4:case 6:case 9:case 11:
     		printf("thang co 30 ngay");
     		break;
     	case 2:
     		if ( nam % 400 == 0) {
                printf("Thang 2 co 29 ngay") ;
            } else {
                printf("Thang 2 co 28 ngay");
            }
            break;
		default: 
		printf("khong co thang nay");
		break;
           
    }
     	
     	}
     		
