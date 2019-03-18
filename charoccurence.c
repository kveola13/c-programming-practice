#include <stdio.h>
int main() {
    char vowel;
    int count;
    printf("Enter any string: ");
    gets(str);

    count=0;
    while(str[count]!='\0')
    {
        if(str[count] == a || e || i || o || u)
        {
            printf("'%c' is a vowel, at index %d\n", vowel, count);
        }
        count++;
    }
    return 0;
}