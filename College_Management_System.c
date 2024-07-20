// School Management maintained by the school is the way they are able to find data about every single student. Using a basic C application we can manage the data of the school.

// The functionality of the School Management System Application is mentioned below:

// Add Student Details
// Find the student by the given roll number
// Find the student by the given first name
// Find the students registered in a course
// Count of Students
// Delete a student
// Update Student

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int i = 0;

struct sms
{
    char f_Name[30];
    char L_Name[30];
    char course[5];
    int roll;
    int sem;
    float cgpa;

} student[200];

// Add Details of Student
void add_student()
{

    printf("Add Student Details\n");
    printf("\n");
    printf("Enter Student's First Name :\n");
    scanf("%s", student[i].f_Name);
    printf("Enter Student's Last Name :\n");
    scanf("%s", student[i].L_Name);
    printf("Enter Course Name(Like CSE,ECE,ME etc) :\n");
    scanf("%s", student[i].course);
    printf("Enter University Roll No.:\n");
    scanf("%d", &student[i].roll);
    printf("Enter Semester No.:\n");
    scanf("%d", &student[i].sem);
    printf("Enter CGPA : \n");
    scanf("%f", &student[i].cgpa);
    i++;
}

// Find the student by the given roll number
void Find_by_Roll()
{
    int x;
    printf("Enter University Roll No.: ");
    scanf("%d", &x);
    for (int j = 0; j <= i; j++)
    {
        if (x == student[j].roll)
        {
            printf("Student Found:\n");
            printf("Student's First Name : %s\n", student[j].f_Name);
            printf("Student's Last Name : %s\n", student[j].L_Name);
            printf("Student's Course Name : %s\n", student[j].course);
            printf("Student's University Roll No. : %d\n", student[j].roll);
            printf("Student's Semester : %d\n", student[j].sem);
            printf("Student's CGPA : %.2f\n", student[j].cgpa);
            return;
        }
    }
}

// Find the student by the given name
void Find_by_name()
{
    char first_Name[30], Last_Name[30];
    printf("Enter Student's Name (First Name Last Name): ");
    scanf("%s %s", &first_Name, &Last_Name);
    for (int j = 0; j <= i; j++)
    {
        if ((strcmp(student[j].f_Name, first_Name) == 0) && (strcmp(student[j].L_Name, Last_Name) == 0))
        {
            printf("Student Found:\n");
            printf("Student's First Name : %s\n", student[j].f_Name);
            printf("Student's Last Name : %s\n", student[j].L_Name);
            printf("Student's Course Name : %s\n", student[j].course);
            printf("Student's University Roll No. : %d\n", student[j].roll);
            printf("Student's Semester : %d\n", student[j].sem);
            printf("Student's CGPA : %.2f\n", student[j].cgpa);
            return;
        }
    }
}

// Find the students registered in a course
void St_in_1_Course()
{
    char course_Name[5];
    printf("Enter Course Name :\n");
    scanf("%s", &course_Name);
    for (int j = 0; j <= i; j++)
    {
        if (strcmp(course_Name, student[j].course) == 0)
        {
            printf("\nStudent Found:\n");
            printf("Student's First Name : %s\n", student[j].f_Name);
            printf("Student's Last Name : %s\n", student[j].L_Name);
            printf("Student's Course Name : %s\n", student[j].course);
            printf("Student's University Roll No. : %d\n", student[j].roll);
            printf("Student's Semester : %d\n", student[j].sem);
            printf("Student's CGPA : %.2f\n", student[j].cgpa);
        }
    }
}

// Count of Students
void count()
{
    
    printf("Total no. of students: %d\n", i);
    printf("you can have a max of 200 students\n");
    printf("You can store another %d student's details.\n\n", 200 - i);
}

// Update a student

void Update()
{
    int a;
    int y;
    printf("If you want to Update a student's details.\n");
    printf("Enter the student's Roll No.:\n");
    scanf("%d", &a);
    for (int j = 0; j <= i; j++)
    {
        if (a == student[j].roll)
        {
            printf("These are the details of the student\n\n");
            printf("Student's First Name : %s\n", student[j].f_Name);
            printf("Student's Last Name : %s\n", student[j].L_Name);
            printf("Student's Course Name : %s\n", student[j].course);
            printf("Student's University Roll No. : %d\n", student[j].roll);
            printf("Student's Semester : %d\n", student[j].sem);
            printf("Student's CGPA : %.2f\n", student[j].cgpa);
        }
        printf("If you want to Update\n1.First Name\n2.Last Name\n3.Course Name\n4.Semester\n5.CGPA\n6.Exit\n");
        scanf("%d", &y);
        switch (y)
        {
        case 1:
            printf("Enter new First Name :\n");
            scanf("%s", student[j].f_Name);
            break;
        case 2:
            printf("Enter new Last Name :\n");
            scanf("%s", student[j].L_Name);
            break;
        case 3:
            printf("Enter new Course Name :\n");
            scanf("%s", student[j].course);
            break;
        case 4:
            printf("Enter new Sem :\n");
            scanf("%d", student[j].sem);
            break;
        case 5:
            printf("Enter new CGPA :\n");
            scanf("%f", student[j].cgpa);
            break;
        case 6:
            return;
            break;
        default:
            printf("Enter Right input.");
            break;
        }
    }
    printf("Updated Successfully.\n");
}

// Delete a student(Aur ek bar samajh na Padhega)
void Delete()
{
    int d;
    printf("If you want to Delete a student's details.\n");
    printf("Enter the student's Roll No.:\n");
    scanf("%d", &d);
    for (int j = 0; j <= i; j++)
    {
        if (d == student[j].roll)
        {
            for (int k = j; k < 199; k++)
                student[k] = student[k + 1];
            i--;
        }
    }
    printf("Deleted Successfully!");
}

int main()
{
    int option, std = 0;
    while (std < 200)
    {
        printf("\nThese are the task you can perform by enetering the serial No.\n\n");
        printf("1.Add Student's  Details\n");
        printf("2.Find the student by the Student's roll number\n");
        printf("3.Find the student by the student's name\n");
        printf("4.Find details of students registered in a course\n");
        printf("5.Count of Students\n");
        printf("6.Delete a student\n");
        printf("7.Update Student's Details\n");
        printf("8.Exit\n\n");
        printf("------------- If Nothing returns that's mean you enter wrong input -------------\n\n");
        printf("Choose What task you want to perform\n\n");

        scanf("%d", &option);
        switch (option)
        {
        case 1:
            add_student();
            count();
            std++;
            break;
        case 2:
            Find_by_Roll();
            break;
        case 3:
            Find_by_name();
            break;
        case 4:
            St_in_1_Course();
            break;
        case 5:
            count();
            break;
        case 6:
            Delete();
            break;
        case 7:
            Update();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}