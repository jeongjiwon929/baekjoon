#include<stdio.h>
int main() {
    int num[6];
    int i;
    int a[6] = {1,1,2,2,2,8};

    for (i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 6; i++) {
        printf("%d ", a[i]-num[i]);
    }
    return 0;
}