#include <iostream>
#include <stdio.h>
int main ()
 {
 	int a, b, c, d;
 	for (int n=1000; n<10000;n++)
 	{
	 a=n/1000;
	 b=n/100%10;
	 c=n%100/10;
	 d=n%10;
	 if(n%2 ==0 && n%7 ==0 && n % 11==0)
	 {
	 	if (a+d+c+b==30)
	 	{
		 if((a==b && d==c)|| (a==c&&d==b)||(a==d&&c==b))
		 {printf("-%i-",n);
		 }
		 }
	 }
	 }
	return 0;
}
