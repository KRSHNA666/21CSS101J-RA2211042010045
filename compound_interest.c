TASK:5-CALCULATING THE COMPOUND INTERST

INPUT:

#include<studio. h>
#include<conio. h>
#include<math. h>
Void main()
{
float principle, rate, time, CI;
clrscr() ;
print(“Enter principle, rate and time values:\n” ) ;
scan(“%f%f%f”, &principle, &rate, &time) ;
CI=principle*pow((1+rate/100) ,time);
printf(“Compound Interest=%f”, CI);
getch() ;
}
OUTPUT:

Enter principle, rate and time values:
1200
5.4
2
133.19876
