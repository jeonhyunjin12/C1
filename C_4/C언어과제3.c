#include <math.h> //수학함수를 표현하는 표준 라이브러리 
#include <stdio.h>

int main(void)
{
    double pi = 3.1415926535; // 삼각함수
    double x, y;
    
    x = pi/2;
    y = sin(x);//사인함수 
    printf("sin(%f) = %f\n", x, y);
    y = cos(x);//코사인함수 
    printf("cos(%f) = %f\n", x, y);
} 
```
