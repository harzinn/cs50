#include <stdio.h>
#include <stdlib.h>

void code_check(int code);

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: ./sandbox2 <code>\n");
		return 1;
	}

	int code = atoi(argv[1]); // Take string arguement and convert to int
	code_check(code);
	return 0;
}


void code_check(int code) {
	// Check for the correct passcode
	if (code == 2345) {
		printf("Success!\n");
	}
	else {
		printf("Wrong code!\n");
	}

	// Ternary option instead of if/else
	// printf("%s\n", (code == 2345) ? "Success!" : "Wrong Code!");
}
