#include<stdio.h>
#include<time.h>
#include<math.h>

int main(){
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) == 3){
        if (b == 0) break;
        double result = (double)a / b;
        printf("%.*f\n", c, result);        // C语言浮点数输出结果的时候会默认四舍五入
    }
    printf("Time used = %.3f\n", (double)clock()/CLOCKS_PER_SEC);
    return 0;
}