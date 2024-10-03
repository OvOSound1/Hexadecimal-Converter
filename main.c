#include <stdio.h>

char getHex(int num) {
  if (num >= 0 && num <= 9) {
    return num + '0';
  } else if (num == 10) {
    return 'A';
  } else if (num == 11) {
    return 'B';
  } else if (num == 12) {
    return 'C';
  } else if (num == 13) {
    return 'D';
  } else if (num == 14) {
    return 'E';
  } else {
    return 'F';
  }
}  //end getHex

int main()
{
  int num;
  char ch;
  printf("Enter a number between 0 and 15 or -1 to quit: ");
  scanf("%d", &num);
  while (num != -1)  {
    if (num >= 0 && num <= 15)  {
      printf("The number %d is %c in hex.\n", num, getHex(num));
    } else {
      printf("The number %d is not valid for this program.\n", num);
    }
    printf("Enter a number between 0 and 15 or -1 to quit: ");
    scanf("%d", &num);
  } //end while loop
  printf("Author: Francisco Fausto\n");
  return 0;
}
