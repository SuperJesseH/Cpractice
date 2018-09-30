#include <stdio.h>

int pineapple[] = {12, 15, 16};
int *otherapple = pineapple;
int main(int argc, char *argv[])
{
 
 printf("pineapple = %d\n otherapple = %d,%d\n", *pineapple, &pineapple, otherapple);

 return 0;
}
