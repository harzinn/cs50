#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Score for each character in the alphabet
int LETTER_SCORE[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void) {
    // Take 2 words from user input
    string words[2];
    words[0] = get_string("Player 1 Word: ");
    words[1] = get_string("Player 2 Word: ");

    // Figure out the score of each word
    int score1 = compute_score(words[0]);
    int score2 = compute_score(words[1]);

    // Print the winner
    if (score1 > score2) {
        printf("Player 1 Wins!\n");
    } else if (score2 > score1) {
        printf("Player 2 Wins!\n");
    } else {
        printf("Its a tie!\n");
    }
}

int compute_score(string word) {
    // Initialize score counter
    int score = 0;

    // Compute score for each letter in the word
    for (int i = 0, length = strlen(word); i < length; i++) {
        if (isupper(word[i])) {
            score += LETTER_SCORE[word[i] - 'A'];
        } else if (islower(word[i])) {
            score += LETTER_SCORE[word[i] - 'a'];
        }
    }
    return score;
}