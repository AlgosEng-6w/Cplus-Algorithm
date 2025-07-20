#include<stdio.h>
#include<time.h>

int main(){
    for (int i = 101; i < 999; i++){
        int hundreds = i/100;
        int tens = (i - hundreds*100)/10;
        int units = i%10;
        if (hundreds*hundreds*hundreds + tens*tens*tens + units*units*units == i)
            printf("%d\n", i);
    }
    printf("Time used = %.2f\n", (double)clock()/CLOCKS_PER_SEC);
    return 0;
}