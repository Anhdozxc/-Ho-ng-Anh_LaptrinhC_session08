#include<stdio.h>

 int main(){
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};	
	int sum=0;
	printf("Cac phan tu nam tren duong cheo phu la :");
	for(int i=0;i<4;i++){
		printf("%d ",a[i][4-i-1]);
		sum+=a[i][4-i-1];
	}
	printf("\nTong cac phan tu o duong cheo chinh trong mang la :%d",sum);
}

