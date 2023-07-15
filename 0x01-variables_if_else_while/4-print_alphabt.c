#include <stdio.h>

int main() {
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++) {
        if (ch != 'q' && ch != 'e') {
            putchar(ch);
        }
    }

    return 0;
}
