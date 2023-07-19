#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

// Function to print the 9 times table
void print_9_times_table() {
    int number = 0;

    while (number <= 9) {
        for (int i = 0; i <= 10; i++) {
            int result = number * i;
            if (i == 0) {
                _putchar('0');
            } else {
                if (result < 10) {
                    _putchar(' ');
                }
                _putchar(result + '0');
            }
            _putchar(' ');
        }
        _putchar('\n');
        number++;
    }
}

int main() {
    print_9_times_table();
    return (0);
}
