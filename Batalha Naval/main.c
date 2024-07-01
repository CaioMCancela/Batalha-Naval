#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int posicaoi;
    int posicaoj;
}frota;

int main(){
    int tUsuario[8][8];
    int tComputador[8][8];
    int rdm,rdm2;
    int i,j,d;
    int disparoi;
    int disparoj;
    int campeaoU=0;
    int campeaoC=0;
    char tCompfront[8][8];
    char ch;
    frota submarino[5];
    frota couracados[2];
    frota portaAviao;
    srand(time(NULL));


    //Preenchendo o tabuleiro tUsuario e tComputador com zero(0) e o tabuleiro tCompFront com espaço (tipo char).
     for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            tUsuario[i][j]=0;
            tComputador[i][j]=0;
            tCompfront[i][j] = ' ';
        }
     }

   //Gerando embarcaçoes do Usuario
    for(i=0;i<1;i++){
        rdm = rand() %6;
        rdm2 = rand() %6;
        if(tUsuario[rdm][rdm2]==0 && tUsuario[rdm-1][rdm2-1]==0 && tUsuario[rdm-1][rdm2]==0 && tUsuario[rdm-1][rdm2+1]==0 && tUsuario[rdm][rdm2-1]==0 && tUsuario[rdm][rdm2+1]==0 && tUsuario[rdm+1][rdm2-1]==0 && tUsuario[rdm+1][rdm2]==0 && tUsuario[rdm+1][rdm2+1]==0 &&tUsuario[rdm+2][rdm2-1]==0 && tUsuario[rdm][rdm2-1]==0 && tUsuario[rdm+2][rdm2]==0 && tUsuario[rdm+2][rdm2+1]==0 && tUsuario[rdm+3][rdm2-1]==0 &&tUsuario[rdm+3][rdm2]==0 && tUsuario[rdm+3][rdm2+1]==0 ){
            tUsuario[rdm][rdm2] = 3;
            tUsuario[rdm][rdm2+1] = 3;
            tUsuario[rdm][rdm2+2] = 3;
        }else{
            i--;
        }
    }
    for(i=0;i<2;i++){
        rdm = rand() %7;
        rdm2 = rand() %7;
        if(tUsuario[rdm][rdm2]==0 && tUsuario[rdm-1][rdm2-1]==0 && tUsuario[rdm-1][rdm2]==0 && tUsuario[rdm-1][rdm2+1]==0 && tUsuario[rdm][rdm2-1]==0 && tUsuario[rdm][rdm2+1]==0 && tUsuario[rdm+1][rdm2-1]==0 && tUsuario[rdm+1][rdm2]==0 && tUsuario[rdm+1][rdm2+1]==0 &&tUsuario[rdm+2][rdm2-1]==0 && tUsuario[rdm][rdm2-1]==0 && tUsuario[rdm+2][rdm2]==0 && tUsuario[rdm+2][rdm2+1]==0){
            tUsuario[rdm][rdm2] = 2;
            tUsuario[rdm][rdm2+1] = 2;
        }else{
            i--;
        }
    }

    for(i=0;i<5;i++){
        rdm = rand() %8;
        rdm2 = rand() %8;
        if(tUsuario[rdm][rdm2]==0 && tUsuario[rdm-1][rdm2]==0 && tUsuario[rdm][rdm2-1]==0 && tUsuario[rdm+1][rdm2]==0 && tUsuario[rdm][rdm2+1]==0 && tUsuario[rdm-1][rdm2-1]==0 && tUsuario[rdm-1][rdm2+1]==0 && tUsuario[rdm+1][rdm2-1]==0 && tUsuario[rdm+1][rdm2+1]==0){
            tUsuario[rdm][rdm2] = 1;
        }else{
            i--;
        }
    }

    //Gerando embarcações da tabela do computador
    for(i=0;i<1;i++){
        rdm = rand() %6;
        rdm2 = rand() %6;
        if(tComputador[rdm][rdm2]==0 && tComputador[rdm-1][rdm2-1]==0 && tComputador[rdm-1][rdm2]==0 && tComputador[rdm-1][rdm2+1]==0 && tComputador[rdm][rdm2-1]==0 && tComputador[rdm][rdm2+1]==0 && tComputador[rdm+1][rdm2-1]==0 && tComputador[rdm+1][rdm2]==0 && tComputador[rdm+1][rdm2+1]==0 &&tComputador[rdm+2][rdm2-1]==0 && tComputador[rdm][rdm2-1]==0 && tComputador[rdm+2][rdm2]==0 && tComputador[rdm+2][rdm2+1]==0 && tComputador[rdm+3][rdm2-1]==0 &&tComputador[rdm+3][rdm2]==0 && tComputador[rdm+3][rdm2+1]==0 ){
            tComputador[rdm][rdm2] = 3;
            tComputador[rdm][rdm2+1] = 3;
            tComputador[rdm][rdm2+2] = 3;
        }else{
            i--;
        }
    }
    for(i=0;i<2;i++){
        rdm = rand() %7;
        rdm2 = rand() %7;
        if(tComputador[rdm][rdm2]==0 && tComputador[rdm-1][rdm2-1]==0 && tComputador[rdm-1][rdm2]==0 && tComputador[rdm-1][rdm2+1]==0 && tComputador[rdm][rdm2-1]==0 && tComputador[rdm][rdm2+1]==0 && tComputador[rdm+1][rdm2-1]==0 && tComputador[rdm+1][rdm2]==0 && tComputador[rdm+1][rdm2+1]==0 &&tComputador[rdm+2][rdm2-1]==0 && tComputador[rdm][rdm2-1]==0 && tComputador[rdm+2][rdm2]==0 && tComputador[rdm+2][rdm2+1]==0){
            tComputador[rdm][rdm2] = 2;
            tComputador[rdm][rdm2+1] = 2;
        }else{
            i--;
        }
    }

    for(i=0;i<5;i++){
        rdm = rand() %8;
        rdm2 = rand() %8;
        if(tComputador[rdm][rdm2]==0 && tComputador[rdm-1][rdm2]==0 && tComputador[rdm][rdm2-1]==0 && tComputador[rdm+1][rdm2]==0 && tComputador[rdm][rdm2+1]==0 && tComputador[rdm-1][rdm2-1]==0 && tComputador[rdm-1][rdm2+1]==0 && tComputador[rdm+1][rdm2-1]==0 && tComputador[rdm+1][rdm2+1]==0){
            tComputador[rdm][rdm2] = 1;
        }else{
            i--;
        }
    }
    while (1) {
        printf("JOGO BATALHA NAVAL\n");
        printf("============================================================================================\n");
        printf("                                         REGRAS DO JOGO          \n");
        printf("============================================================================================\n");
        printf("1. Significado dos simbolos:\n");
        printf("   0(mar), 1(submarino), 2(couracados), 3(porta-avioes).\n");
        printf("   t(disparo no mar), T(Disparo em uma embarcacao).\n");
        printf("2. O usuario sempre deve digitar a posicao do disparo conforme indicado: linha, coluna.\n");
        printf("3. lembre que a primeira posicao tanto da linha e da coluna e 0.\n");
        printf("4. Acertos na aqua/fora do tabuleiro ou disparos repetidos, passa a vez para o computador.\n");
        printf("5. Quando o computador acerta, o local do acerto vira mar (0).\n");
        printf("6. Vence quem destruir a frota inimiga primeiro.\n");
        printf("============================================================================================\n");
        printf("Pressione Enter para iniciar o jogo...");
        fflush(stdin);
        ch = getchar();
        if(ch == 10){
            break;
        }
        system("cls");
    }
    system("cls");

    while(1){
        system("cls");
        printf("JOGO BATALHA NAVAL\n\n");

        // Imprimindo tabuleiro do usuário
        printf("TABULEIRO USUARIO\n");
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                printf("| %d ", tUsuario[i][j]);
            }
            printf("|\n");
        }

        // Imprimindo tabuleiro do computador
        printf("TABULEIRO COMPUTADOR\n");
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                printf("| %c ",tCompfront[i][j]);
            }
            printf("|\n");
        }

        printf("\nVez do Usuario:\n");
        while(1){
            printf("Digite a posicao do disparo (x,y): ");
            scanf("%d,%d",&disparoi,&disparoj);
            if(disparoi<8&& disparoj<8&& tCompfront[disparoi][disparoj]!= 'T' &&tCompfront[disparoi][disparoj]!='t'){
                if(tComputador[disparoi][disparoj]==1 || tComputador[disparoi][disparoj]==2 || tComputador[disparoi][disparoj]==3){
                    printf("Disparo certeiro...\n");
                    tCompfront[disparoi][disparoj] = 'T';
                    tComputador [disparoi][disparoj] = 0;
                }else{
                    printf("Disparo na agua,vez do computador...\n\n");
                    tCompfront[disparoi][disparoj] = 't';
                break;
                }
            }else{
                printf("Disparo fora do tabuleiro ou disparo repitido...\n\n");
                break;
            }
        }

        printf("\nVez do Computador:\n");
        while(1){
            disparoi = rand() %9;
            disparoj = rand() %9;

            if(disparoi<9 && disparoj<9){
                    printf("COMPUTADOR: disparo em (%d,%d)\n",disparoi,disparoj);
                if(tUsuario[disparoi][disparoj]==1 || tUsuario[disparoi][disparoj]==2 || tUsuario[disparoi][disparoj]==3){
                    printf("Disparo certeiro...\n");
                    tUsuario[disparoi][disparoj] = 0;
                }else{
                    printf("Disparo na agua...\n");
                break;
                }
            }
        }
        campeaoU=0;
        campeaoC=0;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(tComputador[i][j] !=0){
                    campeaoU=1;
                }
                if(tUsuario[i][j] !=0){
                    campeaoC=1;
                }
            }
        }
        if(campeaoU ==0){
            printf("\nVitoria do Usuario\n\n");
            exit(0);
        }
        if(campeaoC ==0){
            printf("\nVitoria do computador\n\n");
            exit(0);
        }
        printf("\n\n");
        system("Pause");
    }
    printf("\n\n");
    system("pause");
    return 0;
}
