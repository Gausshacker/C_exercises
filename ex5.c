#include <stdio.h>

int main() {

int numbers[8];
int sum=0,i;


for (i = 0; i < 8; i++) {

printf ("Number %i\n", i);
scanf("%i", &numbers[i]);
sum += numbers[i];
}

printf ("The total sum is : %i", sum);
getch();
return 0;
}


