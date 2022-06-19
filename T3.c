#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, barco, ponto = 0;
    int camp[6][6], aux[6][6];
    int i, j, l, c, opm, w;

    
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            camp[i][j] = 0;
            aux[i][j] = 0;
        }
    }

        
                                                                                                                                         

printf("     ___            ___           ___ ___                                              ___  \n");
printf("    (   )          (   )         (   (   )                                            (   ) \n");
printf("     | |.-.   .---. | |_    .---. | | | | .-.   .---.   ___ .-.   .---. ___  ___ .---. | |  \n");
printf("     | /   | / .-, (   __) / .-, || | | |/   | / .-, | (   )   | / .-, (   )(   / .-, || |  \n");
printf("     |  .-. (__) ; || |   (__) ; || | |  .-. .(__) ; |  |  .-. .(__) ; || |  | (__) ; || |  \n");
printf("     | |  | | .'`  || | ___ .'`  || | | |  | |  .'`  |  | |  | |  .'`  || |  | | .'`  || |  \n");
printf("     | |  | |/ .'| || |(   / .'| || | | |  | | / .'| |  | |  | | / .'| || |  | |/ .'| || |  \n");
printf("     | |  | | /  | || | | | /  | || | | |  | || /  | |  | |  | || /  | || |  | | /  | || |  \n");
printf("     | '  | ; |  ; || ' | ; |  ; || | | |  | |; |  ; |  | |  | |; |  ; |' '  ; ; |  ; || |  \n");
printf("     ' `-' ;' `-'  |' `-' ' `-'  || | | |  | |' `-'  |  | |  | |' `-'  | | `' /' `-'  || |  \n");
printf("      `.__. `.__.'_. `.__.`.__.'_(___(___)(___`.__.'_. (___)(___`.__.'_.  '_.' `.__.'_(___) \n");
printf("                                                                                            \n");

    do {
                                                                                                                                                                                                                                        
        printf("\n\n    MENU PRINCIPAL:\n\n Digite:\n\n");
        printf("1 - jogar.                   ^                \n");
		printf("2 - Resultado.      |_               ^        \n");
		printf("3 - Regras do jogo. |__                       \n");
		printf("4 - Sair.           |___                      \n");
		printf("                    |____        ^            \n");
		printf("            ^       |_____                    \n");
		printf("                    |______              ^    \n");
		printf("                    |_______                  \n");
		printf("                    |________                 \n");
		printf("                    |_________      ___       \n");
		printf("                ____|______________|_*_|* *   \n");
		printf("                  __    |_ //_|     /         \n");
		printf("             ~ ~__________//______ /~~~~~     \n");
		printf("            ~~~~~___~__~_//~______/~~~~~~~    \n");
		printf("           ~~~~~~~~~~~~~//~~~~ ~~~~~~~~~~~~   \n");
        scanf("%d", &A);
        
        switch (A)
        {
       
        case 1: {
            
                    
                    for(i=0 ; i<6 ; i++)
                {
                        printf("\n|");
                        for(j=0 ; j<6 ; j++)
                        {
                                if(i==0 || j == 0) printf(" O");
                                else if(i!=0 || j!=0)printf("%2d",camp[i][j]);
                        }
                        printf(" |");
                }
                printf("\n");
        
        
        
        
                printf("escolha as opçoes de mapas:\n 1 \n 2\n");
                scanf("%d", &opm);
                if(opm==1){
                    
                    for (i = 0; i < 6; i++) {
                    for (j = 0; j < 6; j++) {
                        
                        if(j==1 && i==1){
                            camp[i][j] = 1; }
                            
                        else if(j==2 && i==1){
                            camp[i][j] = 1; 
                        }
                        
                        else if(j==3 && i==3){
                            camp[i][j] = 1;
                        }
                        else if(j==2 && i==3){
                            camp[i][j] = 1;
                        }
                        else if(j==1 && i==3){
                            camp[i][j] = 1;
                        }
                        else if(j==3 && i==4) {
                            camp[i][j] = 1;
                        }
                        else if(j==4 && i==4) {
                            camp[i][j] = 1;
                        }
                        else { camp[i][j] = 0;}
                                            }
                                            }
                    
                }
                else if(opm==2){
                    
                    for (i = 0; i < 6; i++) {
                    for (j = 0; j < 6; j++) {
                        
                        if(j==1 && i==1){
                            camp[i][j] = 1; }
                            
                        else if(j==1 && i==3){
                            camp[i][j] = 1; 
                        }
                        
                        else if(j==3 && i==1){
                            camp[i][j] = 1;
                        }
                        else if(j==1 && i==2){
                            camp[i][j] = 1;
                        }
                        else if(j==1 && i==3){
                            camp[i][j] = 1;
                        }
                        else if(j==2 && i==3) {
                            camp[i][j] = 1;
                        }
                        else if(j==3 && i==3) {
                            camp[i][j] = 1;
                        }
                        else if(j==4 && i==1) {
                            camp[i][j] = 1;
                        }
                        else { camp[i][j] = 0;}
                                            }
                                            }
                    
                }
                   
                   
                
                    
          //     for(i=0 ; i<6 ; i++)
          //     {
          //             printf("\n|");
          //             for(j=0 ; j<6 ; j++)
          //             {
          //                      if(i==0 || j == 0) printf(" O");
          //                      else if(i!=0 || j!=0)printf("%2d",camp[i][j]);
          //              }
          //              printf(" |");
          //      }
          //      printf("\n");
              
                    
                  
                for (w = 0; w < 9; w++) {
                        printf("voce tem %d balas", 9-w);
                        printf("\n\n2 - JOGAR\n");
                        printf("\tAtaque %d", w + 1);
                        printf("\nLinha: ", w + 1);
                        scanf("%d", &l);
        
                        printf("Coluna: ");
                        scanf("%d", &c);
                        
                        if(camp[l][c] == 1 ){
                            aux[l][c] = 1;
                        }
                        
                        //
                        //    for (i = 0; i < 6; i++) {
                        //    for (j = 0; j < 6; j++) {
                        //       //camp[i][j] = 0;
                        //        aux[i][j] = 0;
                        //    }
                        //}   
                        //
        
                        if (camp[l][c] == 0) {
                            printf("\nTiro na agua, splash! \n\n");
                        }
                        else {
                            printf("\nAcertou!!!!!\n\n");
                            ponto += camp[l][c];
                        }   
                                for(i=0 ; i<6 ; i++)
                               {
                                       printf("\n|");
                                       for(j=0 ; j<6 ; j++)
                                       {
                                                if(i==0 || j == 0) printf(" O");
                                                else if(i!=0 || j!=0)printf("%2d",aux[i][j]);
                                        }
                                       printf(" |");
                                }
                               printf("\n");
                                            
                    
                    
                    
                            }
                            
                            
                            
                            
                            
                    for (i = 0; i < 6; i++) {
                for (j = 0; j < 6; j++) {
            camp[i][j] = 0;
            aux[i][j] = 0;
        }
    }
                            
                            
                            
                    

            break;
        }
        case 2: {
            printf("\n\n1 - PONTUACAO\n");
            printf("Sua pontucao: %d", ponto);
            break;
        }
        case 3: {
            printf("REGRAS:\n\n");
            printf(" .Existirao duas opções de campo distintas\n");
            printf(" .O jogador devera escolher a linha e a coluna para atirar uma bala de canhao na coordenada proposta\n");
            printf(" .A soma da pontuação nas duas partidas serao armazenadas, isso pode ajudar a comparação de possiveis jogadores\n");
            printf(" .As cordenadas permitidas para linha e colunas variam de 1 a 5\n");
            printf(" .Cada jogador tera 9 tiros\n");
            
            break;
        }
        case 4: {
            printf("\n\nFim do jogo\n");
            
            break;
        }
        default: {
            printf("Essa opcao nao existe!");
        }
    }
    } while (A != 4);
    
    system("PAUSE");
} 
