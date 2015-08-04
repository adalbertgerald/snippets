#include <stdio.h>

// Euclidean algorithm to calculate the G.C.D. (Greatest Common Divisor)
// of 2 numbers.
// gcd(10, 16) returns a value of 2 as G.C.D.
// gcd(5,7) returns 1 as G.C.D.
int gcd(int a, int b)
{
  while (a != b)
  {
    if (a > b)
    {
      a = a - b;
    }
    else // b > a
    {
      b = b - a;
    }
  }
  return a;
}

// Function to calculate L.C.M.(Least Common Multiple) of 2 numbers.
// Formula used: lcm(a,b) = (a * b) / gcd(a,b)
// lcm(10,16) = (10 * 16) / 2 = 80
// lcm(5,7) = (5 * 7) / 1 = 35
int lcm(int a, int b)
{
  return (a * b) / gcd(a,b);
}

// main method where the program execution starts.
int main()
{
  // Total number of integers for which L.C.M. is to be calculated.
  // The number can be from 2 to 100, both inclusive.
  int num_total;
  
  // An integer array of maximum size 100 to hold the numbers.
  int numbers[100];

  // Variable for iterating a loop.
  int i;

  // L.C.M. of 'n' numbers.
  // Initialize the variable to 1.
  // lcm(1, n) = n. 
  int lcm_value = 1;

  // Display the input format to the user.
  printf("Enter the number of numbers(total number for which L.C.M. is to be computed) in the first line.\n");
  printf("Enter the actual numbers in the second line, leaving a space or new line between them.\n");
  printf("Sample Input:\n3\n10, 16, 5\n");
  printf("Sample Output:\n80\n");
  printf("Enter your input below:\n");

  // Read the number of numbers
  scanf("%d", &num_total);

  // Read those many numbers from the user
  for (i = 0; i < num_total; ++i)
  {
    scanf("%d", &numbers[i]);
  }

  // Loop through all the 'n' numbers and calculate their L.C.M.
  for (i = 0; i < num_total; ++i)
  {
    lcm_value = lcm(lcm_value, numbers[i]);
  }

  // print the lcm of 'n' numbers.
  printf("%d\n", lcm_value);
  
  // indicate normal program termination.
  return 0;
}
