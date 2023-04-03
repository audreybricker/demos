// create a program to find the difference between two complex numbers
// perform the subtraction by subracting the real part of one complex number
// from other complex numbers and same for the imaginary part too.

#include <stdio.h>

struct numbers{
    int real;
    int imagine;
};

int main(){
    struct numbers num1 = {2, 4};
    struct numbers num2 = {3, 6};

    int realdifference = num1.real - num2.real;
    int imagdifference = num1.imagine - num2.imagine;

    printf("the difference between the numbers are %i + %ii \n", realdifference, imagdifference);

}
