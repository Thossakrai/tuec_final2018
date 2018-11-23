#include <stdio.h>
#include <string.h>

struct faculty {
    char name[30];
    int quantity;
};


int main() {
    struct faculty engineering;
    engineering.quantity = 2000;
    strcpy(engineering.name, "faculty of engineering");

    // printf("%s has %d students\n", engineering.name, engineering.quantity);

    struct faculty KMITL[15];
    KMITL[7].quantity = 200;
    strcpy(KMITL[7].name, "International College");

    for(int i = 0; i < 15; i++) {
         printf("%d : %s has %d students\n",i, KMITL[i].name, KMITL[i].quantity);
    }
}