#include <stdio.h>
#include <string.h>

int main()
{
    struct book {
        char name[50];
        float price;
    } b1 = {"harry", 120};

    printf("%s %.2f\n", b1.name, b1.price);
    struct book b2 = {"Using C", 150};
    printf("%s %.2f", b2.name, b2.price);
    
    struct student {
        char name[20];
        int age;
        float grade;
    };

    struct student engineer[2];
    strcpy(engineer[0].name, "Thossakrai");
    engineer[0].age  = 21;
    engineer[0].grade = 3.00;


    printf("\n%s %d %.2f\n", engineer[0].name, engineer[0].age, engineer[0].grade);
    return 0;
}
