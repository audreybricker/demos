// create a program to find the difference between two complex numbers
// perform the subtraction by subracting the real part of one complex number
// from other complex numbers and same for the imaginary part too.

#include <stdio.h>
#include <math.h>

struct numbers{
    int real;
    int imagine;
};

typedef struct numbers Numbers;

double magnitude(Numbers *number);

int main(){
    struct numbers num1 = {2, 4};
    struct numbers num2 = {3, 6};

    int realdifference = num1.real - num2.real;
    int imagdifference = num1.imagine - num2.imagine;

    printf("the difference between the numbers are %i + %ii \n", realdifference, imagdifference);
    printf("the magnitude of the number 1 is %f \n", magnitude(&num1));

}

double magnitude(Numbers *number){
    return sqrt(pow(number->real,2) + pow(number->imagine,2));
}
