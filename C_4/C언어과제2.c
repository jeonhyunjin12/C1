#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance)
{
    int i;
    printf("CAR #%d:", car_number);
    for( i = 0; i < distance/10; i++ ) 
    {
        printf("*");
}
    printf("\n");
}
int main(void)
{   
    int i;
    int car1_dist=0, car2_dist=0;
    
    srand( (unsigned)time( NULL ) );//시각 반환, 음수제외 
    for( i = 0; i < 6; i++ ) 
    {
        car1_dist += rand() % 100; //rand를 이용하여 난수 발생 
        car2_dist += rand() % 100;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        printf("---------------------\n");
        _getch();
}
    return 0;
}
```
