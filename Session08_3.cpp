#include <stdio.h>

 int main() {
    int n;
    printf("Moi ban nhap mot so nguyen: ");
    scanf("%d", &n);

    int arr[n][n];
    int value = 1; 
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = value++;
        }
    }
    printf("Ma tran vuong %dx%d la:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", arr[i][j]); 
        }
        printf("\n");
    }
    return 0;
}


