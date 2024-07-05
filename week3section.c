#include <stdio.h>
#include <cs50.h>

typedef struct {
    string name;
    int votes;
} candidate;

int main(void) {
    candidate president;
    president.name = "Samia";
    president.votes = 10;

    printf("%s recieved %i votes\n", president.name, president.votes);

    president.votes = 15;

    printf("%s recieved %i votes\n", president.name, president.votes);

    return 0;
}