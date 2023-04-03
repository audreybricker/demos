#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date today = {03,04,2023};
    struct date tomorrow = {today.day+1, today.month, today.year};

    printf("today's date is: %i/%i/%i and tomorrow's date is: %i/%i/%i\n", today.day, today.month, today.year, tomorrow.day, tomorrow.month, tomorrow.year);

    return 0;

}
