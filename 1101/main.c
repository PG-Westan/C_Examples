#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415926

int main()
{
    double l, s, r, v;
    printf("Input radius:");
    scanf("%lf", &r);
    l = 2.0 * PI * r;
    s = PI * r * r;
    v = 4.0 / 3 * PI * r * r * r;
    printf("l=%10.4lf\ns=%10.4lf\nv=%10.4lf\n", l, s, v);
    printf("Hello World");
    return 0;
}
