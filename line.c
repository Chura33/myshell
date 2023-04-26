#include "line.h"
int main() {
    char *line = NULL;
    size_t n = 0;

    while (1) {
        printf("Enter a line of input: ");
        if (_getline(&line, &n, stdin) == NULL) {
            break;
        }
        printf("You entered: %s\n", line);
    }

    free(line);
    return 0;
}

