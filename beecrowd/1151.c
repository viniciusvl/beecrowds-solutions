#include <stdio.h>

int main(){
    int m, n, p, i, cont = 0;

    scanf("%d%d%d", &m, &n, &p);

    if (m > n){
        int tmp = n;
        n = m;
        m = tmp;
    }
    
    if (p % 2 == 0){
        if (m % 2 != 0)
            m = m + 1; 
        if (n % 2 != 0)
            n = n - 1; 

        for (i = m; i <= n; i += 2){
            cont++;
            if (m == n){
                printf("%d.\n", i);
                break;
            }

            if (i == n)
                printf(" e %d.\n", i);
            else{
                if (i == m)
                    printf("%d", i);
                else
                    printf(", %d", i);
            }
        }

        if (cont == 0)
            printf("Nada para exibir.\n");
    }

    if (p % 2 != 0){
        if (m % 2 == 0)
            m = m + 1;
        if (n % 2 == 0)
            n = n - 1;

        for (i = m; i <= n; i += 2){
            cont = 1; 
            if (m == n){
                printf("%d.\n", i);
                break;
            }

            if (i == n)
                printf(" e %d.\n", i);
            else{
                if (i == m)
                    printf("%d", i);
                else
                    printf(", %d", i);
            }
        }

        if (cont) 
            puts("Nada para exibir.");
    }



    return 0;
}