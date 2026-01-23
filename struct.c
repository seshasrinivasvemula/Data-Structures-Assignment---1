#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    int n;
    struct Employee *ptr;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    ptr = (struct Employee*)malloc(n * sizeof(struct Employee));
    if (ptr == NULL) {
        printf("Memory not allocated. Exiting");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d (ID, Name, Salary): ", i + 1);
        scanf("%d %s %f", &(ptr + i)->id, (ptr + i)->name, &(ptr + i)->salary);
    }
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", (ptr + i)->id, (ptr + i)->name, (ptr + i)->salary);
    }
    return 0;
}