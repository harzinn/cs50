#include <cs50.h>
#include <stdio.h>

typedef struct {
    string name;
    int votes;
} candidate;

int main(void) {
    const int NUM_CANDIDATES = 3;
    candidate candidates[NUM_CANDIDATES];

    candidates[0].name = "Carter";
    candidates[0].votes = 10;

    candidates[1].name = "Yuliia";
    candidates[1].votes = 12;

    candidates[2].name = "Inno";
    candidates[2].votes = 7;

    // Find highest number of votes
    int highest_votes = 0;
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        if (candidates[i].votes > highest_votes) {
            highest_votes = candidates[i].votes;
        }
    }
    
    // Print the candidate with the highest votes
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        if (candidates[i].votes == highest_votes) {
            printf("%s is the winner with %i votes\n", candidates[i].name, highest_votes);
        }
    }
    return 0;
}