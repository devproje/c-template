#include <stdio.h>

#include "lib.h"

int main(int argc, char **argv)
{
    char *str;
    printf("INPUT STRING: ");
    scanf("%s", str);

    print_str(str);
    return 0;
}
