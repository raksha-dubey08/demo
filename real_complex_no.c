#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex readComplex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");   
    scanf("%f", &c.imag);
    return c;
}
void  writeComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}
int main() {
    struct Complex num1, num2, sum, difference;
    printf("Enter first complex number:\n");
    num1 = readComplex();
    printf("Enter second complex number:\n");
    num2 = readComplex();
    sum = add(num1, num2);
    difference = subtract(num1, num2);
    printf("Sum of complex numbers: ");
    writeComplex(sum);
    printf("Difference of complex numbers: ");
    writeComplex(difference);
    return 0;
}
