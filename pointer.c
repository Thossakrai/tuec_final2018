#include <stdio.h>

int main() {
    // int z = 133;
    // int *z_addr = &z;
    // printf("value of z = %d\n", *z_addr);
    // printf("address of z = %d\n", z_addr);

    // int j = 1;
    // printf("%d", j);
    // int *j_addr = &j;
    // *j_addr + 1;
    // printf("%d", *j_addr);
    // *j_addr += 2;
    // printf("%d", j);
    // j -= 5;
    // printf("%d\n\n", *j_addr);
    // printf("%d\n", j_addr);
    // printf("%d\n", *j_addr++);
    // printf("%d\n", j_addr);

    // int arr[5] = {1,2,3,4,5};
    // printf("arr[0] = %d, *arr = %d\n",arr[0], *arr );

    int arr[10] = {1,2,3,5,8,13,21,99,128,900};
    printf("arr addr = %d\n", arr);

    printf("a. %d\n", arr[2]);
    printf("b. %d\n", *(arr + 5));
    printf("c. %d\n", (*arr)++);
    printf("d. %d\n", ++(*arr));
    printf("e. %d\n", *(arr + 4) - (arr[5])++);
    printf("%d\n", arr[5]);

    return 0;
}