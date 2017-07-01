/**
*   Write a program that converts upper case to lower or lower case yo upper, depending on the name it is invoked with, as found in argv[0].
*
*/
#include <stdio.h> 
#include <ctype.h> 
#include <string.h> 
int main(int argc, char *argv[]) {
int c; 
char filename[30]; 
strcpy(filename, argv[1]); 
if (strcmp(filename, "toupper") == 0) {
  while ((c = getchar()) != EOF)
    putchar(toupper(c));
}
if (strcmp(filename, "tolower") == 0) {
  while ((c = getchar()) != EOF)
    putchar(tolower(c)); 
}
return 0; 
}