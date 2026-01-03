#include <stdio.h>
#include <string.h>

#define tam 5

typedef struct {
    char titulo[50];
    int id, status;
}Livro;

int main(){
    Livro livros[tam];
    int emprestimos[20][5] = {0};
    int idUsuario, idLivro;
    int i=0,j=0,opc=1,flag=0;

    for(i=0;i<tam;i++){ // le ^\n]s",livros[i].titulo);
        scanf(" %d",&livros[i].id);
        livros[i].status=0;
    }
    while(1){
        i=j=0;
        printf("==================\n");
        printf("1 - Emprestar\n");
        printf("2 - Devolver\n");
        printf("0 - Sair\n");
        scanf("%d",&opc);
        switch(opc){
            case 1:
                scanf("%d %d",&idUsuario,&idLivro);
                while(idLivro!=livros[i].id && i<tam){
                    i++;
                }
                if(i==tam){
                    printf("Livro nao encontrado.\n");
                }
                else{
                    if(livros[i].status==1){ // ja esta emprestado
                        printf("Livro ja emprestado.\n");
                    }
                    else{ // emprestar
                        while(emprestimos[idUsuario][j]!=0){
                            j++;
                        }
                        if(j==5){ // maximo atingido
                            printf("Limite de emprestimos atingido!\n");
                        }
                        else{
                            emprestimos[idUsuario][j]=idLivro;
                            livros[i].status=1;
                            printf("Emprestimo realizado!\n");
                        } 
                    }  
                }
                break;
            case 2:
                scanf("%d %d",&idUsuario,&idLivro);
                while(idLivro!=emprestimos[idUsuario][i]){
                    i++;
                }
                if(i>4){
                    printf("Livro nao encontrado.\n");
                }
                else{
                    emprestimos[idUsuario][i]=0;
                    while(idLivro!=livros[j].id && j<tam){
                        j++;
                    }
                    livros[j].status=0;
                    printf("Devolvido.\n");
                }
                break;
            case 0:
                return 0;
        }
    }
    return 0;
}