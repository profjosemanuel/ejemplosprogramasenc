/* Type your code here, or load an example. */
#include <stdio.h>
void operacion();                                               //Function Declaration
int main()
{
  operacion();                                                  //Function Calling
  return 0;
}
void operacion(int num) {
    int sum1;
    int sum2;
    int sum;
    sum1 = 1;
    sum2 = 4;
    sum = sum1 + sum2;
    printf("%d",sum1 + sum2);
}
