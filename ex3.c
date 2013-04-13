#include <stdio.h>

int main() {

int a,b,c;
printf ("Now you have to introduce 3 numbers\n1: \n");
scanf ("%i", &a);
printf ("2: \n");
scanf("%i", &b);
printf ("3: \n");
scanf ("%i", &c);

if ( a > b && a > c) {
    printf ("%i (A) is the highest number", a);
}

if ( b > a && b > c ) {

    printf ("%i (B) is the highest number", b);
}


if (c > a && c > b) {
    printf ("%i (C) is the highest number", c);
}


getch();
return 0;
}
