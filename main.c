#include <stdio.h>
#include <stdlib.h>

int odd = 0, x = 0, y = 1, numbers = 0;

void fibonacci(int actual){
    numbers--;
    if(numbers == 0) return;
    if(odd){
        x += y;
        printf("%d\n", x);
    }else {
        y += x;
        printf("%d\n", y);
    }
    odd = 1 - odd;
    fibonacci(numbers);
}

int main()
{
    printf("How much numbers you want?\n");
    scanf("%d", &numbers);
    if(numbers == 0) return 0;
    printf("\n%d\n", x);
    fibonacci(numbers);
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int odd = 0, x = 0, y = 1;

void fibonacci(){
    if(odd){
        x += y;
        printf("%d\n", x);
    }else {
        y += x;
        printf("%d\n", y);
    }
    odd = 1 - odd;
}

int main()
{
    int numbers = 0;
    printf("How much numbers you want?\n");
    scanf("%d", &numbers);
    if(numbers == 0) return 0;

    printf("\n%d\n", x);

    for(int count = 0; count < numbers - 1; count++){
        fibonacci();
    }

    return 0;
}
*/
