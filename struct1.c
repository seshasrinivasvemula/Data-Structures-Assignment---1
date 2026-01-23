#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float totalMarks;
};
int main() {
    struct Student s1, s2;
    printf("Enter details for Student 1 (Name, Age, Marks): ");
    scanf("%s %d %f", s1.name, &s1.age, &s1.totalMarks);
    printf("Enter details for Student 2 (Name, Age, Marks): ");
    scanf("%s %d %f", s2.name, &s2.age, &s2.totalMarks);
    printf("1. %s, Age: %d, Marks: %.2f\n", s1.name, s1.age, s1.totalMarks);
    printf("2. %s, Age: %d, Marks: %.2f\n", s2.name, s2.age, s2.totalMarks);
    float average = (s1.totalMarks + s2.totalMarks) / 2;
    printf("\nAverage Marks: %.2f\n", average);
    return 0;
}