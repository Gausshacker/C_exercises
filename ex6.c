#include <stdio.h>

int main() {
int j;
printf ("How many numbers do you want to introduece? : ");
scanf ("%i", &j);
int numbers[j];
int sum=0,i;


for (i = 0; i < j; i++) {

printf ("Number %i\n", i);
scanf("%i", &numbers[i]);
sum += numbers[i];
}

printf ("The total sum is : %i", sum);
getch();
return 0;
}