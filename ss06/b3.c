#include <stdio.h>

int main(){
	int a = 22;
	int b;
	printf("moi nhap mat khau: ");
	scanf("%d",&b);
	if(b!=a){
		printf("mat khau khong hop le");
	}else{
		printf("mat khau dung");
	}
}
