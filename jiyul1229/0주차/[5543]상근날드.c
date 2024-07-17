#include <stdio.h>
int main(){
    int a, b, c, d, e;
    int bugerMin, drinkMin;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    if (a < b && a < c)
        bugerMin = a;
    else if (b < a && b < c)
        bugerMin = b;
    else
        bugerMin = c;

    if (d < e)
        drinkMin = d;
    else
        drinkMin = e;

    printf("%d\n", bugerMin + bugerMin - 50);
    return 0;
}