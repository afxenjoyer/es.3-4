#include <stdio.h>

int main(void)
{
    char sesso;
    char nome[256];

    printf("Scrivi il tuo nome\n");
    scanf("%s", &nome);
    getchar();
    printf("Inserisci il tuo sesso (M o F)\n");
    scanf("%c", &sesso);

    if(sesso == 'M')
    {
        printf("Ciao %s, Egregio signor\n", nome);
    }
    else
    {
        printf("Ciao %s, gentilisima signora\n", nome);
    }
    return 0;
}
