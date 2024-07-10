#include <stdio.h>
#include <cs50.h>

typedef struct {
    string FirstName;
    string LastName;
    int age;
} family_member;

int main(void) {
    const int FAMILY_SIZE = 3;
    string LAST_NAME = "Kruger";
    family_member members[FAMILY_SIZE];

    members[0].FirstName = "Nick";
    members[0].age = 40;

    members[1].FirstName = "Kris";
    members[1].age = 38;

    members[2].FirstName = "Jaina";
    members[2].age = 11;

    for (int i = 0; i < FAMILY_SIZE; i++) {
        printf("%s %s age %i\n", members[i].FirstName, LAST_NAME, members[i].age);
    }

    return 0;

}