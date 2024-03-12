#include <stdio.h>
int main()
{
    char letter = 'A';
    int negNumber = -1;
    int age = 65;
    float p1 = 3.141592;
    double p2 = 3.14159265358979323;

    printf("My name begins with %c\n", letter);
    printf("Look, I'm negative! -->%d\n", negNumber);
    printf("I am %d years old!\n", age);
    printf("\t in octal (base 8) = %o\n", age);
    printf("\t in hex (base 16) = %x\n\n", age);
    printf("p1:\t decimal floating point = %f\n", p1);
    printf("\t scientific notation = %e\n", p1);
    printf("p2:\t default decimal places = %f\n", p2);
    printf("\t 10 decimal places = %.10f\n", p2);
}