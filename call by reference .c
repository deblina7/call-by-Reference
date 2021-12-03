//Program using Call By References
#include <stdio.h>
int change (int *p) //copied the value of a in p
{
  *p=5944; //change the value of the address
  return;
}
int main() 
{
    int a = 23;
    printf("The value is %d\n",a); //value before changing
    change(&a); //call by the address(reference)
    printf("The value of a is now %d",a); //value after changing
    return 0;
}