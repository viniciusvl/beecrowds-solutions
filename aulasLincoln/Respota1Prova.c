#include <stdio.h>
#define MAT_A 8
#define MAT_B 1

int main(){
            short a;
            short x;
            x = (MAT_A + MAT_B) / 2;
            for (a = 4; a > -3; a--) {
            x += a;
            switch (a > 0) {
            case 1:
            x = x + a;
            break;
            case 0:
            x = x - 2 * a;
            break;
            }
            }
            printf("%d\n", x);
}