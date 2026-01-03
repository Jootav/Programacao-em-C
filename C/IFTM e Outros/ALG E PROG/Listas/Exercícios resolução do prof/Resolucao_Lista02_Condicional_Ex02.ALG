Algoritmo "Resolucao_Lista01_Lista02_Condicional_Ex02"
// Disciplina ...: [Algoritmos I]
// Professor ....: Ernani Cláudio Borges
// Descrição ....:
//   Lista02_Ex02.alg -  Elaborar um algoritmo que receba o
//   Nome e ano nascimento de uma pessoa.
//   Fazer as verificações em cada entrada e se não atender a
//   condição desejada para cálculo dar uma mensagem de
//   "inválido" e finalizar o algoritmo, caso contrário,
//   processar e mostrar o nome e sua idade.
//   Obs.:
//   a)	Nome da pessoa não pode ser "vazio";
//   b)	Ano tem que ser maior ou igual 1900 e menor ou
//       igual ao ano atual;
//   Considerar que a pessoa já fez aniversário este ano.

// Autor(a) .....: Ernani Cláudio Borges
// Data atual ...: 19/08/2024

Var
   // Seção de Declarações das variáveis
   nm_pessoa : caracter
   vl_ano_nasc, vl_idade : inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   //inicializar
   nm_pessoa <- "" //vazio
   vl_ano_nasc <- 0
   vl_idade <- 0
   
   //receber dados e verificar cada entrada antes de receber a proxima
   escreval
   escreva ("digite nome da pessoa .....: ")
   leia (nm_pessoa)
   //varificar
   se (nm_pessoa = "") entao
      escreval
      escreval ("voce TECLOU ENTER sem ter digitado o nome da pessoa ... isso eh invalido")
   senao
      escreval
      escreva ("digite o ano de nascimento (maior 1900 e menor que 2025) ...: ")
      leia (vl_ano_nasc)
      //verificar
      se (vl_ano_nasc >= 1900) e (vl_ano_nasc <= 2024) entao
         //calculo
         vl_idade <- 2024 - vl_ano_nasc
         escreval
         escreval (nm_pessoa, " voce tem ", vl_idade, " anos de vida")
         escreval
      senao
         //invalido
         escreval
         escreval ("ano nascimento invalido para calculo")
      fimse
   fimse
   escreval
   escreval
   escreval
   escreval ("acabou ... tchau ... obrigado")
   escreval
   escreval
   escreval
   escreval
Fimalgoritmo