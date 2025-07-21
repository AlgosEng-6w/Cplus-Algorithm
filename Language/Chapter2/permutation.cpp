#include<stdio.h>
#include<time.h>
// #define LOCAL

int main(){
    for (int i = 123; i <= 329; i++){
        int array[10] = {0};
        for (int j = 1; j <= 3; j++){
            int num = j*i;
            int hurd = num/100;
            int ten = (num-100*hurd)/10;
            int unit = num%10;
            array[hurd]++;
            array[ten]++;
            array[unit]++;
        }
        if (array[0] != 0) continue;
        int flag = 1;
        for (int j = 1; j < 10; j++){
            if (array[j] != 1){
                flag = 0;
                break;
            }
        }
        if (flag) printf("%d\n", i);

    }
    printf("Time used = %.3f\n", (double)clock()/CLOCKS_PER_SEC);
    return 0;
}