Algoritmo "Resolucao_Lista04_Condicional_Ex01"
// Disciplina ...: [Algoritmos]
// Professor ....: Ernani Cláudio Borges
// Descrição ....:
//   L04_ex01 - Elaborar um algoritmo que receba dois
//   números e um o símbolo para representação as
//   operação básicas da matemática ( +,  - ,  *,
//   / , ou seja: adição, subtração, multiplicação,
//   divisão) processar e mostrar o resultado da
//   operação do primeiro número pelo segundo.
//   Obs.:
//   a) verificar para que não haja divisão por zero,
//      caso aconteça, dê uma mensagem ao usuário.
//   b) Finalizar o algoritmo caso o sinal informado
//      seja diferente dos sinais das operações
//      básicas solicitadas.

// Autor(a) .....: Ernani Cláudio Borges
// Data atual ...: 26/08/2024

Var
   // Seção de Declarações das variáveis
   num1, num2, resultado : real
   simbolo : caracter

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   // inicializar vars
   num1 <- 0
   num2 <- 0
   resultado <- 0
   simbolo <- ""
   
   //Receber dados
   escreval
   escreva ("Informe o valor do primeiro numero ..: ")
   leia (num1)

   escreval
   escreva ("informe o valor do  segundo numero ..: ")
   leia (num2)
   
   escreval
   escreval ("infome simbolo da operacao matematica")
   escreval (" + para adicao")
   escreval (" - para subtracao")
   escreval (" * para multiplicacao")
   escreval (" / para divisao")
   escreval
   escreva ("informe simbolo (+, -, * ou  /) ..: ")
   leia (simbolo)
   //verificar simbolo
   se (simbolo <> "+") e (simbolo <> "-") e (simbolo <> "*") e (simbolo <> "/") entao
      escreval
      escreval ("simbolo invalido ...")
   senao
      //verificar qual calculo
      se (simbolo = "/") entao
         se (num2 = 0) entao
            escreval
            escreval ("impossivel divisao por zero")
         senao
            resultado <- num1 / num2
            escreval
            escreval ("a divisao de ", num1, " por ", num2, " = ", resultado:2:2)
         fimse
      senao
         se (simbolo = "*") entao
            resultado <- num1 * num2
         senao
            se (simbolo = "+") entao
               resultado <- num1 + num2
            senao
               resultado <- num1 - num2
            fimse
         fimse
         escreval
         escreval ("    ", num1:2:2, "  ", simbolo, "  ", num2:2:2, " = ", resultado:2:2)
      fimse
   fimse
   escreval
   escreval
   escreval
   escreval ("acabou ... tchau ... obrigado.")
   escreval
   escreval
   escreval
Fimalgoritmo