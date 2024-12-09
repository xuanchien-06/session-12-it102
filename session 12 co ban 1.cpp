#include<stdio.h>
int caculateSum();
int main(){
	int sum;
	sum = caculateSum();
	printf("Tong 2 so la: %d",sum);
}
	int caculateSum(){
		int a,b,sum;
		printf("Moi ban nhap so thu nhat: ");
		scanf("%d",&a);
		printf("Moi ban nhap so thu hai: ");
		scanf("%d",&b);
		sum = a + b;
		return sum;
	}
