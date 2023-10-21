/**
 * Author(s): Yawar Hussain
 * Date: 18/10/2023
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);


  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop
   int i = 0 ;
   while(i<10)
   {
    printf("%d\n",i);
    i++;
   }
  printf("\n");

  for(int i=10; i<20; i+=3) {
    printf("%d ", i);
  }
  printf("\n");

  //2. Rewrite the given while loop as an equivalent for loop

  int j = 10 ;
  while (j < 20)
  {
   printf("%d ", j);
   j +=3;
  }
    printf("\n");
  

  int k = 3;
  while(k > -4) {
    printf("%d ", k);
    k--;
  }
  printf("\n");

  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5
        for(int i = 1; i <= n;i++)
        {
          if(i <=  n-1)
          {
            printf("%d, ",i);
          }
          else
          {
            printf("%d ",i);
          }
        }
        printf("\n");
  //4. Print squares of numbers 1 thru n separated by a comma
  //   except for the last one; example: 1, 4, 9, 16, 25
        int result_04 = 0;
        for(int i = 1; i <= n; i++)
        {
          
        }
  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15
      int sum = 0;
      for(int i  = 1; i <= n ; i++)
      {
        sum = sum + i;
        // if(i <= n-1)
        // {
        //   printf("%d + ",i);
        // }
        // else
        // {
        //   printf("%d = %d ",i,sum );
        // }
      }
     
  printf("Sum of 1  thru %d = %d\n",n,sum);
 
  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
        int result = 0;
        int square = 2;
       for(int a = 1; a <= n; a++)
        {
          result += a*square;
        }
        
  printf("Square of %d^%d thur %d^%d = %d\n",1,square,n,square,result);
       
  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6
        int reuslt_01 = 0;
        for(int i = 1; i <= n; i++)
        {
          if(i%2!=0)
          {
            continue;
          }
          else
          reuslt_01 +=i;
            
        }
     
  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.
        for(int i = 1; i <= n ;i++)
        {
          if(i % 7 == 0)
          {
            printf("Foo");
          
          }
          else if(i % 11 == 0)
          {
            printf("Bar");
         
          }
             else if((i % 7 == 0) && (i % 11 == 0))
          {
            printf("FooBar");
          
          }        

        }
  return 0;
}
