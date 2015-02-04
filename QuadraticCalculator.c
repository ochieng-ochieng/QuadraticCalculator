#include <stdio.h>
#include <math.h>

main ()
{
float delta, a, b, c, x1, x2;

//The variables a, b, and c are based on the quadratic formula
printf("Enter variable a: ");
scanf("%f", &a);
printf("Enter variable b: ");
scanf("%f", &b);
printf("Enter variable c: ");
scanf("%f", &c);

delta = b * b - (4 * a * c);

if (delta < 0)
{
printf("The equation has no answer!\n");
system("pause");
exit(0);
}

if (delta == 0)
{
x1 = -b/(2 * a);
printf("The equation has two equal answers !\n");
printf("x1 = x2 = %f\n", x1);
system("pause");
exit(0);
}

x1 = (-b + sqrt(delta))/(2 * a);
x2=(-b - sqrt(delta))/(2 * a);
printf("\nX1 = %f", x1);
printf("\nX2 = %f\n", x2);

system("pause");

}
