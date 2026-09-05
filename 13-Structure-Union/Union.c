#include <stdio.h>

union Student
{
    int age;
    float marks;
    char grade;
};

int main()
{
    union Student s;

    s.age = 21;
    printf("Age: %d\n", s.age);

    s.marks = 85.5;
    printf("Marks: %.2f\n", s.marks);

    s.grade = 'A';
    printf("Grade: %c\n", s.grade);

    return 0;
}
