#include <stdio.h>
int main() {
    int a,b,c,s,t,p,z,i,k,r,n;
    scanf("%d", &c);

    r = c;
    i = 0;
    while (r != 0) {
        r = r / 10;
        i++;
    }

    p = c;
    s = 0;
    while (p != 0) {
        t = p % 10;
        z = 1;
        for (k = 1; k <= i; k++)
            z = z * t;
        s = s + z;
        p = p / 10;
    }

    if (s == c)
        printf("%d is an Armstrong number", c);
    else
        printf("%d is not an Armstrong number", c);

    return 0;
}