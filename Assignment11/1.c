#include <stdio.h>

void Printf(void);  

int main()
{
    Printf();
    return 0;
}

void Printf(void)
{
    printf("int main(void){\n    return 0;\n}");
    return;
}