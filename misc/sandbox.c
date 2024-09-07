#include <stdio.h>    // Include standard input/output library for printf function
#include <cs50.h>     // Include CS50 library for string type

// Define a structure to represent a family member
typedef struct {
    string FirstName; // First name of the family member
    string LastName;  // Last name of the family member (not used here, but part of the structure)
    int age;          // Age of the family member
} family_member;

int main(void) {
    const int FAMILY_SIZE = 4;    // Constant defining the number of family members
    string LAST_NAME = "Kruger";  // Last name of the family (common for all members)
    family_member members[FAMILY_SIZE];  // Array to store family members

    // Assign first name and age to each family member
    members[0].FirstName = "Nick";
    members[0].age = 40;

    members[1].FirstName = "Kris";
    members[1].age = 38;

    members[2].FirstName = "Jaina";
    members[2].age = 11;

    members[3].FirstName = "Thrall";
    members[3].age = 13;

    // Loop through each family member and print their details
    for (int i = 0; i < FAMILY_SIZE; i++) {
        printf("%s %s age %i\n", members[i].FirstName, LAST_NAME, members[i].age);  // Print first name, last name, and age
    }

    return 0;  // Return 0 to indicate successful execution
}