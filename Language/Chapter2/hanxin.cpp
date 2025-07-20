#include<stdio.h>
#include<time.h>

int main(){

    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) == 3){
        // printf("DEBUG: read %d %d %d\n", a, b, c);
        int flag = 0;
        for (int i = 10; i <= 100; i++){
            if (i%3==a && i%5==b && i%7==c){
                printf("%d\n", i);
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf("No answer\n");
    }
    printf("Time used = %.8f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}

// 发现在powershell中输入有问题，未解决
// 改用     cmd /c "echo 输入数据 | 程序名.exe"