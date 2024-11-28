#include<stdio.h>

 int main(){
	int a[3][3]={{1,10,20},{4,2,3},{7,8,15}};	
	int sum=0;
	
	printf("Cac phan tu nam tren duong cheo chinh la :");
	for(int i=0;i<3;i++){
		printf("%d ",a[i][i]);
		sum+=a[i][i];
	}
	printf("\nTong cac phan tu o duong cheo chinh trong mang la :%d",sum);
	
	return 0;
}



