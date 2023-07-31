#include <stdio.h>
int _islower(int c) {
/* Checks for lowercase character.
Prototype: int _islower(int c);
Returns 1 if c is lowercase
Returns 0 otherwise
*/
if (c >= 'a' && c <= 'z') {
return 1;
} else {
return (0);
}
}
int main() {
printf("%d\n", _islower('a'));  // 1
printf("%d\n", _islower('A'));  // 0
return (0);
}
