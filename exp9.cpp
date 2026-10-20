#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int n, i, flag = 1;

    printf("Enter a binary string: ");
    scanf("%s", s);

    n = strlen(s);

    if (n < 2 || s[0] != '0' || s[n-1] != '1')
        flag = 0;

    for (i = 0; i < n; i++)
        if (s[i] != '0' && s[i] != '1')
            flag = 0;

    if (flag)
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}