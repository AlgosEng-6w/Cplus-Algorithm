// #define LOCAL
// #include<stdio.h>
// #define INF 1000000000
// int main(){
// #ifdef LOCAL
//     freopen("data.in","r",stdin);
//     freopen("data.out","w",stdout);
// #endif
//     int x, n = 0, min = INF,max = -INF, s = 0;
//     while(scanf("%d", &x) == 1){
//         s += x;
//         if (x < min) min = x;
//         if (x > max) max = x;
//         n++;
//     }
//     printf("%d %d %.3f\n", min, max, (double)s/n);
//     return 0;
// }



#include<stdio.h>
#define INF 1000000000
int main(){
    FILE *fin, *fout;   // 定义文件指针类型的变量
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");     //与fclose函数配对使用
    int x, n = 0, min = INF, max = -INF, s = 0;
    while (fscanf(fin, "%d", &x) == 1)
    {
        s += x;
        if (x < min) min = x;
        if (x > max) max = x;
        n++;
    }
    fprintf(fout, "%d %d %.3f\n", min, max, (double)s/n);
    fclose(fin);        // 关闭指针指定的文件。返回0，则文件成功关闭，否则返回EOF。
    fclose(fout);
    return 0;
}