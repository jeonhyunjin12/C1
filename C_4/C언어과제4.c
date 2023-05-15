#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    system("dir"); //프롬프트에게 명령어 전달 , DOS 명령어 
    printf("아무 키나 치세요\n");
    _getch();
    system("cls"); // DOS 명령어 
    
    return 0;
}
```
