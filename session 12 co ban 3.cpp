#include<stdio.h>

unsigned long long factorial(int n=5){
	long long result;
	for(int i=1;i<n;i++){
		result *= i;
	}
	return result;
}
int main(){
//	int n=5;
//	printf("Nhap vao 1 so nguyen: ");
//	scanf("%d",&n);
//	if(n < 0){
//		printf("So nhap vao khong hop le");
//	}else{
		printf("Giai thua cua  la: %lld",factorial);
//	}
	return 0;
}
