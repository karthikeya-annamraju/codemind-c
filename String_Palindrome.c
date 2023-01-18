#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("Not Palindrome");
            return 0;
        }
    }
 
    printf("Palindrome");
 
    return 0;
}