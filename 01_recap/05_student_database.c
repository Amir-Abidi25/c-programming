#include <stdio.h>
#include <string.h>

struct Course {
    int id;
    char name[100];
    float ects;
};

typedef struct
{
    struct Course course;    
    int attemps;
    float grade;
} EnrolledCourses;

typedef struct
{
    char name[100];
    char surname[100];
    int id;
    EnrolledCourses list[20];
} Student;

Student create_student(char *name, char surname[], int id) {
    Student new_student;

    for (size_t i=0; i < strlen(name); i++) {
        new_student.name[i] = name[i];
    }

    strcpy(new_student.surname, surname);
    new_student.id = id;
    return new_student;
}

int main () {
    // 1. TODO: Create courses structs
    struct Course math_course = {101, "Lineare Algebra", 5.0};
    struct Course ml_course = {.name = "Machine Leanring", .ects = 5.0, .id = 102};

    // 2. TODO: Create student structs
    Student emmy = create_student("Emmy", "Nother", 442);
    printf("Emmy:\n-%s\n-%s\n-%i\n", emmy.name, emmy.surname, emmy.id);
    // 3. TODO: Assign Emmy some courses

    emmy.list[0].course = math_course;
    emmy.list[0].attemps = 1;
    emmy.list[0].grade = 1,3;    


}
