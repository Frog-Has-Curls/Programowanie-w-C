
    /*
Najpierw wyświetla na ekran:
'Co wiesz o Janku?'
i zostawia wolną linię.
Następnie pyta:
'Ile lat ma Janek?' - założenie: liczba całkowita >0
'Jaki jest rozmiar koszuli Janka?' - założenie: odpowiedź 1 znakiem
'Jaki jest wzrost Janka?' - założenie: liczba >0

Następnie program wypisuje historię Janka:
'Janek ma XX lat i nosi koszulę rozmiaru Y. Janek ma Z.Z stop wzrostu.'
WIELKIMI literami oznaczono zmienne wraz z ilością miejsca, które mają zajmować. Proszę przyjąć, że 1 stopa to 33 cm.  
    
    */
#include <stdio.h>

int main(void) {

char koszula, cokolwiek; 
int wiek;

float wzrost, sto;

  printf("Co wiesz o Janku?\n");
    scanf("%[^\n]s",&cokolwiek);

  printf("Ile lat ma Janek?\n");
    scanf("%d",&wiek);
  
  printf("Jaki ma wzrost Janek w cm?\n");
    scanf("%f", &wzrost);
  
  printf("Jaki jest rozmiar koszuli Janka?\n");
    scanf(" %c", &koszula);

  sto=wzrost/33;
  
    printf("Janek ma %d lat i nosi koszulę rozmiaru %c. Janek ma %0.1f stóp wzrostu.\n",wiek,koszula,sto);

  return 0;
}
