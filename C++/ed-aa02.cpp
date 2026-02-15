#include <iostream>
using namespace std; 

int main(){
    int op = 0;           // opção escolhida no menu
    int N = 0;            // quantidade temporária de números a inserir
    int M = 0;            // quantidade válida de números armazenados
    double soma = 0;      // soma dos números para cálculo da média
    double media = 0;     // média dos números
    double variancia = 0; // variância dos números
    double numeros[100];  // vetor para armazenar os números

    // loop principal do menu, continua enquanto op diferente de 3
    while (op != 3){
        // exibe o menu
        cout << "\nMenu Inicial: \n";
        cout << "\n1 - Informar numeros\n";
        cout << "2 - Calcular media e variancia\n";
        cout << "3 - Sair\n";
        cout << "\nSelecione uma opcao: ";
        cin >> op;

        if (op == 1){
            // loop para garantir que o usuário informe pelo menos 8 números
            while (N < 8){
                cout << "\nQuantos numeros quer informar: ";
                cin >> N;
            
                if (N < 8){
                    // mensagem de erro se quantidade menor que 8
                    cout << "\nValor Invalido!\n";
                }
                else {
                    // quantidade válida, armazenada em M
                    M = N;
                    // solicita os números um por um
                    for(int i = 0; i < N; i++){
                        cout << "\nDigite o numero " << i+1 << ": ";
                        cin >> numeros[i];
                    }
                }
            }

            // exibe os números informados pelo usuário
            cout << "\nNumeros informados: ";
            for(int i = 0; i < N; i++){
                cout << numeros[i] << " ";
            }
            cout << "\n";

            // zera N para permitir nova inserção no futuro
            N = 0;
        } 
        else if (op == 2){
            // verifica se números já foram informados
            if (M < 8){
                cout << "\nValor ainda nao colocado!\n";
            }
            else {
                // inicializa variáveis para cálculo
                soma = 0;
                media = 0;
                variancia = 0;

                // calcula soma para média
                for(int i = 0; i < M; i++){
                    soma += numeros[i];
                }

                // calcula média
                media = soma / M;

                // calcula variância
                for (int i = 0; i < M; i++){
                    variancia += (numeros[i] - media) * (numeros[i] - media);
                }
                variancia /= M;

                // exibe resultados
                cout << "\nMedia e igual a: " << media << "\n";
                cout << "\nVarianca e igual a: " << variancia << "\n";
            }
        }
        else if (op == 3){
            // mensagem de saída
            cout << "\nVoce saiu do programa.\n";
        }
        else {
            // mensagem caso o usuário digite uma opção inválida
            cout << "\nOpcao invalida! Tente novamente.\n";
        }
    }

    return 0;
}
