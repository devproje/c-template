#include <stdio.h>
#include <string.h>

#include "lib.h"

void print_str(const char *str)
{
    puts(str);
}

char *read_file(const char *path)
{
    char *str;
    char buf[BUF_SIZE];
    FILE *fs = fopen(path, "r");
    fgets(buf, BUF_SIZE, fs);
    sprintf(str, buf);

    return str;
}
