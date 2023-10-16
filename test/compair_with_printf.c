#include "../main.h"
#include <stdio.h>

int main(void)
{
printf("Let's try to printf a simple sentence.\n");
printf("%c\n", 'S');
printf("A char inside a sentence: %c. Did it work?\n", 'F');
printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
printf("%%");
printf("Should print a single percent sign: %%\n");
printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
printf("css%ccs%scscscs", 'T', "Test");
_putchar('\n');
printf(NULL);
printf("%c", '\0');
printf("%");
printf("%K\n");
return (0);
}
