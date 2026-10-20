#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", s);

    n = strlen(s);

    if (n >= 2 && s[0] == 'b' && s[n-1] == 'a')
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}