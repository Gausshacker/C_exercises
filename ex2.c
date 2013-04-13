#include <stdio.h>
#define two 2
int main () {
int number;
printf ("Type a number ");
scanf ("%i", &number);
if ((number % two) == 0) {
printf ("It's a pair number");
}
else {
printf ("It's not pair sorry dude");
}
getch();
return 0;

}