//CalcolatoreSaponificazione
//Calcolatore degli elementi fondamentali per la saponificazione

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int InserimentoNumIgrediente (int x);
int InserimentoPeso (int pesoFunzione);
int ScontoTot (int causticaTotale, int percentoSconto);
int MetodoCaldoCalc (int totPesoGrassi);
int MetodoFreddoCalc (int totPesoGrassi);
int InserimentoRispSconto (char scontoFunzione);
char SceltaMetodi (char rispMetodo);
/*
 * 
 */
int main(int argc, char** argv) {
   char rispMetodo;
   int totPesoGrassi;
   int scontoFunzione;
   int causticaTotale;
   int percentoSconto;
   int TotScont;
   int k;
   int causticaSoda;
   int TotPeso;
   int peso;
   int h;
   int x,pesoFunzione;
   int i;
   float sodaCaustica;
   int j;
   int percentualeSconto;
   int scontoTotale;
   int scontoControllo;
   char rispostaMetodo;
   int MetodoCaldo;
   int MetodoFreddo;
   int totalePesoGrassi;
   int caldoControllo;
   char sconto;
   
//Inizializzazione delle variabili   
   i = 0;
   sodaCaustica = 0;
   j = 0;
   percentualeSconto = 0;
   scontoTotale = 0;
   scontoControllo = 0;
   
   MetodoCaldo = 0;
   MetodoFreddo = 0;
   totalePesoGrassi = 0;
   caldoControllo = 0;
   sconto = ' ';
   
   struct s_grassi{
       char nomeGrasso [30];
       float SAP;
       int pesoGrasso;
   }grassiRecord[14];
           
strcpy(grassiRecord[0].nomeGrasso,"Olio di Oliva");
grassiRecord[0].SAP = 0.134;
grassiRecord[0].pesoGrasso = 0;

strcpy(grassiRecord[1].nomeGrasso,"Olio di Mandorle Dolci");
grassiRecord[1].SAP = 0.136;
grassiRecord[1].pesoGrasso = 0;

strcpy(grassiRecord[2].nomeGrasso,"Olio di Cocco");
grassiRecord[2].SAP = 0.190;
grassiRecord[2].pesoGrasso = 0;

strcpy(grassiRecord[3].nomeGrasso,"Olio di Girasole");
grassiRecord[3].SAP = 0.134;
grassiRecord[3].pesoGrasso = 0;

strcpy(grassiRecord[4].nomeGrasso,"Burro di Cacao");
grassiRecord[4].SAP = 0.137;
grassiRecord[4].pesoGrasso = 0;

strcpy(grassiRecord[5].nomeGrasso,"Burro di Karite");
grassiRecord[5].SAP = 0.128;
grassiRecord[5].pesoGrasso = 0;

strcpy(grassiRecord[6].nomeGrasso,"Cera d'Api");
grassiRecord[6].SAP = 0.070;
grassiRecord[6].pesoGrasso = 0;

strcpy(grassiRecord[7].nomeGrasso,"Lanolina Anidra");
grassiRecord[7].SAP = 0.074 ;
grassiRecord[7].pesoGrasso = 0;

strcpy(grassiRecord[8].nomeGrasso,"Olio di Jojoba");
grassiRecord[8].SAP = 0.060;
grassiRecord[8].pesoGrasso = 0;

strcpy(grassiRecord[9].nomeGrasso,"Olio di Palma");
grassiRecord[9].SAP = 0.141;
grassiRecord[9].pesoGrasso = 0;

strcpy(grassiRecord[10].nomeGrasso,"Olio di Ricino");
grassiRecord[10].SAP = 0.128;
grassiRecord[10].pesoGrasso = 0;

strcpy(grassiRecord[11].nomeGrasso,"Olio di Soja");
grassiRecord[11].SAP = 0.135;
grassiRecord[11].pesoGrasso = 0;

strcpy(grassiRecord[12].nomeGrasso,"Strutto di Maiale");
grassiRecord[12].SAP = 0.138;
grassiRecord[12].pesoGrasso = 0;

strcpy(grassiRecord[13].nomeGrasso,"Olio di Mais");
grassiRecord[13].SAP = 0.136;
grassiRecord[13].pesoGrasso = 0;

     
//Indice dei grassi

    printf("Calcolatore di Soda Caustica NaOH per la produzione di Sapone Artigianale.\n\n");
   
    printf("Inserisci un numero da 1-15 per selezionale i seguenti grassi.\n\n");
    printf("1. Olio di Oliva\n");
    printf("2. Olio di Mandorle Dolci\n");
    printf("3. Olio di Cocco\n");
    printf("4. Olio di Girasole\n");
    printf("5. Burro di Cacao\n");
    printf("6. Burro di Karitè\n");
    printf("7. Cera d'Api\n");
    printf("8. Lanolina Anidra\n");
    printf("9. Olio di Jojoba\n");
    printf("10. Olio di Palma\n");
    printf("11. Olio di Ricino\n");
    printf("12. Olio di Soja\n");
    printf("13. Strutto di Maiale\n");
    printf("14. Olio di Mais\n");
    printf("15. Digita 15 se hai terminato di inserire gli elementi.\n\n");

    
//Inserimento degli ingredienti e il rispettivo peso    
    
    sodaCaustica=0;
    totalePesoGrassi=0;
    i = InserimentoNumIgrediente(x);
    while(i<14)
    {
        
    grassiRecord[i-1].pesoGrasso = InserimentoPeso(pesoFunzione);
    i = InserimentoNumIgrediente(x);
    }
    
    //Calcolo il totale della soda senza sconto e il Totale dei grassi inseriti
    
    for ( j=0;j<14;j++ )
    {
        
        sodaCaustica = grassiRecord[j].pesoGrasso * grassiRecord[j].SAP + sodaCaustica;
        totalePesoGrassi = grassiRecord[j].pesoGrasso + totalePesoGrassi;
       
    }

    sconto = InserimentoRispSconto(scontoFunzione);

    //Scelta dell'Aplicazione dello sonto
    
    
    if((sconto=='s')||(sconto=='S'))
    {
    printf("Quanto sconto vuole applicare? espresso in pergentuale(1-6):\n\n");
    scanf("%d" , &percentualeSconto);
    scontoTotale = ScontoTot(sodaCaustica, percentualeSconto);
    scontoControllo=1;
    }
   
    
    //Scelta dei Metodi

   rispostaMetodo = SceltaMetodi (rispMetodo);
   
    
    if((rispostaMetodo=='c') || (rispostaMetodo=='C'))
    {
        printf("Hai scelto il Metodo a Caldo\n\n");
        MetodoCaldo = MetodoCaldoCalc(totalePesoGrassi);
        caldoControllo=1;
    }
    else
    {
       printf("Hai scelto il Metodo a Freddo\n\n"); 
       MetodoFreddo = MetodoFreddoCalc(totalePesoGrassi);
       
    }
    
    //Output 
    printf("Il totale dei grassi inseriti sono: %d (Grammi)\n\n" , totalePesoGrassi);
    
    if(scontoControllo==1)
    {
        printf("La Soda Caustica scontata del %d è: %d (Grammi) \n\n", percentualeSconto,scontoTotale);
    }
    
    else
    {
        printf("Il totale della Soda Caustica è: %f (Grammi) \n\n", sodaCaustica);
    }
    
    if(caldoControllo==1)
    {
        printf("L'acqua necessaria con il Metodo a Caldo sarà: %d (Millilitri) \n\n" , MetodoCaldo);
    }
    else
    {
        printf("L'acqua necessaria con il Metodo a Freddo sarà: %d (Millilitri)\n\n" , MetodoFreddo);
    }
    
   
    
    
    return (EXIT_SUCCESS);
}

int InserimentoNumIgrediente(int x)
{
 printf("\n\nDigita il numero dell'ingrediente:\n\n: ");
    scanf("%d" , &x);  
    return x;
}

int InserimentoPeso(int pesoFunzione)
{
     printf("Inserisci il peso dell'Ingrediente selezionato: \n\n: ");
    scanf("%d" , &pesoFunzione);
    return pesoFunzione;
}

int ScontoTot(int causticaTotale, int percentoSconto)
{
int TotScont; 
TotScont = (causticaTotale*(100-percentoSconto))/100;  
return TotScont; 

}

int MetodoCaldoCalc (int totPesoGrassi)
{
 int MetCaldo;
 MetCaldo=((totPesoGrassi*37.5)/100);   
 return MetCaldo;
}

int MetodoFreddoCalc (int totPesoGrassi)
{
    int MetFreddo;
    MetFreddo = (totPesoGrassi*30)/100; 
    return MetFreddo;
}

int InserimentoRispSconto (char scontoFunzione)
{
  printf("Vuole applicare uno sconto alla soda calcolata? (S/N)\n\n");
    scanf("\n%c", &scontoFunzione);
    return scontoFunzione;  
}
char SceltaMetodi (char rispMetodo)
{
 printf("Quale metodo vuoi utilizzare? Caldo (C)-Freddo (F)\n\n");
    scanf("\n%c" , &rispMetodo); 
    return rispMetodo;
}
