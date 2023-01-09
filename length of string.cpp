#include<stdio.h>
int main() {
  char str[20], *pt;
  int i = 0;
  printf(" Length of String \n");
  printf("Enter string: ");
  gets(str);
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("Length of String : %d", i);

  return 0;
}
