#include<stdio.h>
#include<time.h>

int main(){
    int n, m;
    while(scanf("%d %d", &n, &m) == 2){
        if (n == 0) break;
        float sum = 0.0;    // 注意是浮点数，int型会直接截断小数部分
        for (; n <= m; n++){
            sum += 1.0/n/n;       // 平方可能会溢出
        }
        printf("%.5f\n", sum);
    }
    printf("Used time = %.3f\n", (double)clock()/CLOCKS_PER_SEC);
    return 0;
}