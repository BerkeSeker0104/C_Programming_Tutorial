#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define circleArea(r) (PI*r*r)
int main()
{
    // Macros

    // Predefined Macros
    printf("File : %s \n", __FILE__);
    printf("Date : %s \n", __DATE__);
    printf("Time : %s \n", __TIME__);
    printf("Line : %s \n", __LINE__);

    return 0;
}
