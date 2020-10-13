#include <stdio.h>
#include <stdlib.h>

#define LENGTH 512

int numbers = 0;
unsigned current[LENGTH] = {1}, previous[LENGTH] = {}, temp[LENGTH] = {};

void fibonacci(){
    numbers--;
    if(numbers == 0) return;

    unsigned overflow = 0;
    for(int count = 0; count < LENGTH; count++){
        temp[count] = current[count];
        current[count] += previous[count];
        previous[count] = temp[count];

        if(overflow > 0){
            current[count] += overflow;
        }
        if(current[count] > 9){
            current[count] -= 10;
            overflow = 1;
        }else{
            overflow = 0;
        }
    }

    for(int count = LENGTH - 1; count >= 0; count--){
        printf("%u", previous[count]);
    }

    printf("\n");
    fibonacci();
}

int main()
{
    printf("How much numbers you want?\n");
    scanf("%d", &numbers);
    fibonacci();
    return 0;
}
