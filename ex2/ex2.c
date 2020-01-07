#include <stdio.h>

#define MAXLINE 50

#undef reverse

char reverse(char x[MAXLINE], int end, int start);

int main()

{

    char x[MAXLINE];

    int y = 0;

    for (y = 0; (x[y] = getchar()) != EOF && x[y] != '\n'; y++)

        ;

    reverse(x, y - 1, 0);

    printf("%s", x);

    return 0;

}

char reverse(char x[MAXLINE], int end, int start)

{

    if (end - start < 1)

    {

        return 0;

    }

    else

    {

        char temp;

        temp = x[start];

        x[start] = x[end];

        x[end] = temp;

        start++;

        end--;

        reverse(x, end, start);

        return 0;

    }

}
