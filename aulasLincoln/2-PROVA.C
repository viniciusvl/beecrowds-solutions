#include <stdio.h>

int main(){
    int i, m, n;
    double produtorio = 1; 

    scanf("%d%d", &m, &n);

    for (i = m; i <= n; i++){
        produtorio *= i + 1.0/i;
    }

    printf("%.3lf\n", produtorio);

    return 0;
}