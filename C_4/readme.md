# 4주차 C언어 실습
  - 4주차 복습
  - 4주차 실습
  
  
  ``` c
  #include <stdio.h>

int main()
{
    double x, y, result;
    printf("두개의 정수를 입력하시오:");
    scanf("%lf %lf", &x, &y);

    result = x + y;
    printf("%lf / %lf = %lf\n", x, y, result); //123123123
  result = x - y;
    printf("%lf / %lf = %lf\n", x, y, result);
  result = x * y;
    printf("%lf / %lf = %lf\n", x, y, result);
  result = x / y;
    printf("%lf / %lf = %lf", x, y, result);

  return 0;
  }
  ```
