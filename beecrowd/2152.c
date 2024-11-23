#include <stdio.h>

int main(){
    int H, M, O, casos;

    scanf("%d%*c", &casos);

    while(casos--){
        scanf("%d %d %d", &H, &M, &O);

        printf("%02d:%02d - %s\n", H, M, (O) ? "A porta abriu!" : "A porta fechou!");
    }


    return 0;
}