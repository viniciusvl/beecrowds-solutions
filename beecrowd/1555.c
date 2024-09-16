#include <stdio.h>
#include <math.h>

char Maior(int r, int b, int c){
    if (r > b && r > c)
        return 'R';
    if (b > r && b > c)
        return 'B';
    if (c > r && c > b)
        return 'C';
}

int Rafael(int x, int y){
    return pow(3*x, 2) + pow(y, 2);
}

int Beto(int x, int y){
    return 2*pow(x, 2) + pow(5*y, 2);
}

int Carlos(int x, int y){
    return -100*x + pow(y, 3);
}
int main(){
    int casos, x, y, r, b, c;

    scanf("%d", &casos);

    while (casos--){
        scanf("%d%d", &x, &y);

        r = Rafael(x, y);
        b = Beto(x, y);
        c = Carlos(x, y);

        switch (Maior(r, b, c)){
            case 'R':
                printf("Rafael ganhou\n");
                break;
            case 'B':
                printf("Beto ganhou\n");
                break;
            case 'C':
                printf("Carlos ganhou\n");
                break;
        }

    }

    return 0;
}