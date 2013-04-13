#include <stdio.h>

int main() {

int i;
printf ("Introduce a number : ");
scanf ("%i", &i);

while (i!=0) {
    printf ("%i ", i);
    i--;
}
getch();
return 0;
}