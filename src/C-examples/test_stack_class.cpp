/*
 * Testing Stack class
 */

#include "stack_class.h"
#include <stdio.h> /* printf */

int main(void)
{
  Stack s;

  s.Push(1);
  s.Push(2);
  s.Push(3);

  printf("\n");
  while(!s.Empty())
   printf("%d ", s.Pop());
  printf("\n");

  return 0;
}