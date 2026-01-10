#include <stdio.h>
#include <ctype.h>
int main() {
    char str[] = "Programming";
    char *ptr = str;
    int v = 0, c = 0;
    while (*ptr != '\0') {
        char ch = tolower(*ptr);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
        ptr++;
    }
    printf("Vowels: %d, Consonants: %d", v, c);
 return 0;
}