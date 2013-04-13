#include <stdio.h>


int main() {
int a=0, b = 0;
printf("Enter the first number: ");
scanf("%i", &a);
printf("Enter the second number: ");
scanf("%i", &b);
if (a > b) {
printf ("%i is higher than %i", a, b);
}
else {
printf ("%i is higher than %i", b, a);
}
getch();
return 0;
}
