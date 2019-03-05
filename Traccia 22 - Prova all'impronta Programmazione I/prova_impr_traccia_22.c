

// TRACCIA 22

// Due giocatori si sfidano lanciando un “dado truccato”. Il dado ha dei valori interi
// nell’intervallo [5 , 15]. A ogni turno vince il giocatore che ottiene un punteggio
// maggiore. In caso di parità il punto viene assegnato a entrambi. Simulare 10 sfide e
// visualizzare il giocatore che vince più volte.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void punteggioGiocatori( char *,  char *);
int main()
{
    char giocatore_1[10];
    char giocatore_2[10];
    
    printf("inserici nome giocatore 1\n");
    gets(giocatore_1);
    printf("inserici nome giocatore 2\n");
    gets(giocatore_2);

    punteggioGiocatori( giocatore_1, giocatore_2);

    return 0;
}


void punteggioGiocatori(char giocatore_1[10], char giocatore_2[10]){
    
    int i;
    int dado_1;
    int dado_2;
    int punteggio_1 = 0;
    int punteggio_2 = 0;

    for(i=0;i<10;i++){
        dado_1 = 5 + rand()%10;
        dado_2 = 5 + rand()%10;

        printf("%s: %d \n%s: %d \n\n", giocatore_1, dado_1, giocatore_2, dado_2);

        if(dado_1 < dado_2){
            punteggio_2 += 1;
        }else
        {
        punteggio_1 += 1;
        }
    }    
        printf("\n\nla partita e' finita con il risultato %d - %d", punteggio_1, punteggio_2);
}
