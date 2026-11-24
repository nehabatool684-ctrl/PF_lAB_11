#include <stdio.h>

struct HospitalRecord {
    int RecordID;
    char Ward[30];
    float RoomCharges;
    struct PatientInfo {
        int PatientID;
        char PatientName[50];
        int Age;
    } patient;
	};

int main() {
    struct HospitalRecord hospital1 = {101,"Emergency Ward",5000.00,{201, "Ali", 25}};
    
    struct HospitalRecord *ptr;

    ptr = &hospital1;
    printf("===== Hospital Record =====\n");
    printf("Record ID: %d\n", ptr->RecordID);
    printf("Ward: %s\n", ptr->Ward);
    printf("Room Charges: Rs. %.2f\n", ptr->RoomCharges);

    printf("\n===== Patient Information =====\n");
    printf("Patient ID: %d\n", ptr->patient.PatientID);
    printf("Patient Name: %s\n", ptr->patient.PatientName);
    printf("Patient Age: %d\n", ptr->patient.Age);

    return 0;
}

