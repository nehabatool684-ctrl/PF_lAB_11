
#include <stdio.h>

struct Address {
    char City[50];
    int ZipCode;
    char State[50];
};
struct Student {
    int RollNo;
    char Name[50];
    float CGPA;

    struct Address studentAddress;
};

int main() {

    struct Student student1 = {101,"Neha",3.85,{"Karachi",75500,"Sindh"}};

    printf("===== Student Profile =====\n");
    printf("Roll Number: %d\n", student1.RollNo);
    printf("Student Name: %s\n", student1.Name);
    printf("CGPA: %.2f\n", student1.CGPA);

    printf("\n----- Residential Address -----\n");
    printf("City: %s\n", student1.studentAddress.City);
    printf("Zip Code: %d\n", student1.studentAddress.ZipCode);
    printf("State: %s\n", student1.studentAddress.State);

    return 0;
}

