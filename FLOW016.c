#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int num1,num2,numerator,denominator,remainder,gcd,lcm;
        scanf("%lld %lld", &num1, &num2);
        numerator = (num1>num2)?num1:num2;
        denominator = (num1<num2)?num1:num2;
        remainder = numerator % denominator;
 
      while (remainder != 0)
      {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
      }
      gcd = denominator;
      lcm = num1 * num2 / gcd;
      printf("%lld %lld\n",gcd,lcm);

    }

	return 0;
}



