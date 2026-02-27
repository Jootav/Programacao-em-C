/*

L05B_ex05 – Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo dispostos num tabuleiro de xadrez, de tal forma que o primeiro quadro deveria conter apenas um grão e os quadros subseqüentes, o dobro do quadro anterior.
			A rainha achou o trabalho barato e pediu que o serviço fosse executado, sem se dar conta de que seria impossível efetuar o pagamento.
			Elabore um algoritmo que calcule o número de grãos que o monge esperava receber.
Atenção: neste exercício será necessário utilizar o tipo de dados real devido ao resultado ter um valor muito alto, evitando o “estouro” de memória (over flow).


    Prof. Ernani Cláudio Borges
    data:
==============================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <math.h>


//==============================================================
//============    DECLARAR PROTOTIPOS ==========================
//==============================================================





//==============================================================
//============    CRIAR OS MÓDULOS DE FUNÇÕES ==================
//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================

//==============================================================



//==============================================================
//============    CODIGO PRINCIPAL   ===========================
//==============================================================
int main()
{
    //criar vars
    float soma, quadro;
    int cont;

    //inicializar vars
    soma = 0;
    quadro = cont = 1;
    printf ("\n\n calculo dos graos \n\n");
    while (cont <= 64)
    {
        soma = soma + quadro;
        quadro = quadro * 2;
        cont++;
    }
    printf ("\n\n soma = %.0f", soma);

    printf("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
    return 0;
}
