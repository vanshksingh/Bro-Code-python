#include <stdio.h>
enum Day{MON=1, TUE=2, WED=3, THU=4, FRI=5, SAT=6, SUN=7};


int main(void)
{
    enum Day today = WED;

    if(today == WED)
    {
        printf("Wednesday\n");
    }
    printf("Today is %d day of the week\n", today);

    return 0;



}
