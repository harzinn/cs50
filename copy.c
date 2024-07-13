#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char *s = get_string("s: ");
    if (s == NULL ) {
        return 1;
    }

    int n = strlen(s);
    char *t = malloc(n + 1);
    if (t == NULL) {
        return 1;
    }

   strcpy(t, s);

    if (n > 0) {    // Only run toupper if there is something to index
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
    return 0;
}