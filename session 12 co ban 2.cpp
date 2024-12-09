#include<stdio.h>

void printArr(int arr[],int size){
	printf("Nhap phan tu cho mang: \n");
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main(){
	int n;
	int arr[n];
	printf("Nhap so luong mang: ");
	scanf("%d",&n);
	printf("Nhap gia tri cho mang:\n");
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	printArr(arr,n);
	return 0;
}
