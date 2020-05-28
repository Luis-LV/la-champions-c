#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int opcion;
    

      while(opcion!=6){
            printf("\nFASE DE FINALES UEFA CHAMPIONS LEAGE\n");
            printf("\n===Menu===");
            printf("\n 1.Octavos de Final");
            printf("\n 2.Cuartos de Final");
            printf("\n 3.Semifinal");
            printf("\n 4.Final");
            printf("\n 5.Campeon");
            printf("\n 6.Salir");
            printf("\n SU OPCION: ");
            scanf("%d", &opcion );
            
              
              
              if(opcion==1){
                  printf("\n Real Madrid vs Ajax\n");
                  printf("\n Borussia Dortmund vs Tottenham\n");
                  printf("\n PSG vs Manchester United\n");
                  printf("\n Porto vs AS Roma\n");
                  printf("\n Manchester City vs Schalke\n");
                  printf("\n Juventus vs Atletico de Madrid\n");
                  printf("\n Barcelona vs Lyon\n");
                  printf("\n Bayern Muninch vs Liverpool\n");
                  
                  
              }  
                  if(opcion==2){
                      printf("\n Barcelona vs Manchester United\n");
                      printf("\n Juventus vs Ajax\n");
                      printf("\n Manchester City vs Tottenham\n");
                      printf("\n Porto vs Liverpool\n");
                      
                      
                      
                  }
                  if(opcion==3){
                      printf("\n Liverpool vs Barcelona\n");
                      printf("\n Ajax vs Tottenham\n");
                      
                      
                      
                      
                  }
                  if(opcion==4){
                      printf("\n Tottenham VS Liverpool\n");
                      
                      
                  
                   }
                   if(opcion==5){
                       printf("\n LIVERPOOL\n");
                       
                         
                   }
                   if(opcion==6){
                       printf("\n!!!LA CHAMPIOOOOOOOOOOOOOOOOOONS¡¡¡.\n");
                         
                   }
      }

    return 0;
}