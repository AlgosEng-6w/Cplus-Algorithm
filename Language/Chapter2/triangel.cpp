#include<stdio.h>
#include<time.h>

int main(){
    int n;
    if (scanf("%d", &n) == 1 && n <= 20){
        for (int i = 0; i < n; i++){
            printf("%*s", i, "");
            for (int j = 0; j < 2*(n - i) - 1; j++) {
                printf("#");
            }
            printf("\n");
        }
    }
    printf("Time used = %.3f\n", (double)clock()/CLOCKS_PER_SEC);
    return 0;
}