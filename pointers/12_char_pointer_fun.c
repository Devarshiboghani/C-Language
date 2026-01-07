#include <stdio.h>

void demonstrateCharPointer()
{
    char letter = 'A';
    char *char_ptr = &letter;

    printf("Character: %c\n", letter);
    printf("Address of character: %p\n", &letter);
    printf("Pointer points to: %p\n", char_ptr);
    printf("Character through pointer: %c\n", *char_ptr);

    *char_ptr = 'Z';
    printf("After change: %c\n", letter);
}

int main()
{
    printf("=== Character Pointer Demo ===\n");
    demonstrateCharPointer();
    return 0;
}