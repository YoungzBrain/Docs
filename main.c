#include <stdio.h>
#include <stdlib.h>
int main() {
 int value = 33;
 int * addr = &value;
 *addr = *addr + 1;
 printf( "value == %d\n", value ); 
 return EXIT_SUCCESS;
}
