#include <stdio.h>

 int main() {
    int arr[4][4] = { 
        {1, 2, 3, 4},
        {51, 11, 5, 8},
        {9, 14, 21, 12},
        {13, 7, 6, 9}
    };

    int n = 4; 
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                sum += arr[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien la: %d\n", sum);
    return 0;
}


