#include <iostream>
using namespace std; 

// Função para a ação 1
void op1(){
    cout << "\nVoce selecionou Acao 1\n";
}

// Função para a ação 2
void op2(){
    cout << "\nVoce selecionou Acao 2.\n";
}

// Função para a ação 3
void op3(){
    cout << "\nVoce selecionou Acao 3.\n";
}

// Função para sair do programa
void sai(){
    cout << "\nVoce saiu do programa.\n";
}

// Função para opção inválida
void err(){
    cout << "\nOpcao invalida! Tente novamente.\n";
}

int main(){

   int op = -1; // variável para armazenar a opção do usuário

   // Loop principal do menu, continua enquanto op diferente de 0
   while (op != 0){ 

       // Exibe o menu
       cout << "\nMenu inicial:\n";
       cout << "\n1 - Acao 1\n";
       cout << "2 - Acao 2\n";
       cout << "3 - Acao 3\n";
       cout << "0 - Sair\n";
       cout << "\nSelecione a Acao: ";

       // Lê a opção do usuário
       cin >> op;

       // Verifica a opção escolhida e chama a função correspondente
       if (op == 1){
           op1(); // chama função ação 1
       }
       else if (op == 2){
           op2(); // chama função ação 2
       }
       else if (op == 3){
           op3(); // chama função ação 3
       }
       else if (op == 0){
           sai(); // chama função de saída
       }
       else {
           err(); // caso a opção seja inválida
       }
   }
    
   return 0; // encerra o programa
}
