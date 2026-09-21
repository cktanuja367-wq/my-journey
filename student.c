#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    struct student s1;
    s1.rollno = 1;
    strcpy(s1.name, "Tanuja");
    s1.marks = 91.0;
    printf("Roll No = %d\n", s1.rollno);
    printf("Name = %s\n", s1.name);
    printf("Marks = %.2f\n", s1.marks);
    return 0;
}