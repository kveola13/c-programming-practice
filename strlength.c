#include <stdio.h>
int main() {
    char string[1000];
    int count;

    printf("Type the string: \n");
    scanf("%s", string);

    for(count = 0; string[count] != '\0'; count++);

    printf("String length: %d\n", count);
    return 0;
}