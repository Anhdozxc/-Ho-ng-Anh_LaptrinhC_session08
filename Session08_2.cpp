#include<stdio.h>

 int main(){
	int number;
	printf("Moi ban nhap mot so :");
	scanf("%d",&number);
	int index=0;
	int a[5]={1,7,3,10,5};
	for(int i=0;i<5;i++){
		if(a[i]==number){
			index=1;
			printf("Vi tri phan tu trong mang la : %d",i+1);
		}
	}
	if(index==0) 
		printf("Phan tu khong ton tai trong mang ");
}

