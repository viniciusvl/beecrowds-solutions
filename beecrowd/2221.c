#include <stdio.h>

double ValueDabriel (int A1, int Di, int Li, int bonus){
    if (Li % 2 != 0){
        bonus = 0;
    }

    return (double)(A1 + Di) / 2 + bonus;
}


char Maior (float dabriel, float guarte){
    if (dabriel > guarte)
        return 'D';
    else if (dabriel < guarte)
        return 'G';
    
    return '?';
}

int main(){
    int vezes, Ai, Di, Li, bonus;
    double dabriel, guarte;

    scanf("%d", &vezes);

    while(vezes--){
        scanf("%d", &bonus);

        scanf("%d%d%d", &Ai, &Di, &Li);
        dabriel = ValueDabriel(Ai, Di, Li, bonus);


        scanf("%d%d%d", &Ai, &Di, &Li);
        guarte = ValueGuarte(Ai, Di, Li, bonus);

        switch( Maior(dabriel, guarte) ){
            case 'D':
                printf("Dabriel\n");
                break;
            case 'G':
                printf("Guarte\n");
                break;
            case '?':
                printf("Empate\n");
                break;
        }



    }


    return 0;
}