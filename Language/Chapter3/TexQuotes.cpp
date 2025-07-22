// #define LOCAL
// #include<stdio.h>
// int main(){
// #ifdef LOCAL
//     freopen("string.in", "r", stdin);
//     freopen("string.out", "w", stdout);
// #endif
//     int c, q = 1;
//     while ((c = fgetc(stdin)) != EOF){
//         if (c == '"') {printf("%s", q ? "“" : "”"); q = !q;}
//         else printf("%c", c);
//     }
//     return 0;
// }


#include<stdio.h>

int main(){
    FILE *fin, *fout;
    fin = fopen("string.in", "rb");
    fout = fopen("string.out", "wb");
    int c, q = 1;
    while ((c = fgetc(fin)) != EOF){
        if (c == '"'){
            fprintf(fout, "%s", q ? "“" : "”");
            q = !q;        
        }
        else fprintf(fout, "%c", c);
    }
    fclose(fin);
    fclose(fout);
}