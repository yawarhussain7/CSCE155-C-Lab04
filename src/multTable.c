/**
 * Author: Yawar  Hussain
 * Date: 18/10/2023
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }
  else
  {
    int printer = 1;
    for(int i = 1; i <= n; i++)
    {
       printf("%d ",printer);
       for(int j = 1; j <= n; j++)
       {
          printf("%d ",i*j);
       }
       printf("\n");
       printer++;
    }
  }

  return 0;
}