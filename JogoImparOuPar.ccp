// Incluímos a biblioteca iostream para usar funções de entrada e saída (cin, cout)
#include <iostream>

// Incluímos as bibliotecas cstdlib e ctime para gerar números aleatórios
#include <cstdlib> // Para rand() e srand()
#include <ctime>   // Para time()

int main() {
    // Declaração de variáveis
    std::string escolhaJogador; // Armazena se o jogador escolheu "par" ou "ímpar"
    int jogadorNumero;          // Armazena o número escolhido pelo jogador
    int computadorNumero;       // Armazena o número gerado aleatoriamente pelo computador
    int soma;                   // Armazena a soma dos dois números

    // Inicializamos o gerador de números aleatórios com a função srand()
    srand(time(0)); // Usamos time(0) para que os números sejam sempre diferentes a cada execução

    // Exibimos uma mensagem pedindo que o jogador escolha "par" ou "ímpar"
    std::cout << "Escolha par ou ímpar: ";
    std::cin >> escolhaJogador; // Capturamos a escolha do jogador

    // Pedimos ao jogador que insira um número
    std::cout << "Digite um número entre 0 e 9: ";
    std::cin >> jogadorNumero; // Capturamos o número escolhido pelo jogador

    // Geramos um número aleatório entre 0 e 9 para o computador
    computadorNumero = rand() % 10; // rand() % 10 gera números entre 0 e 9
    std::cout << "O computador escolheu o número: " << computadorNumero << std::endl;

    // Calculamos a soma dos números do jogador e do computador
    soma = jogadorNumero + computadorNumero;

    // Exibimos o resultado da soma
    std::cout << "A soma dos números é: " << soma << std::endl;

    // Verificamos se a soma é par ou ímpar e comparamos com a escolha do jogador
    if ((soma % 2 == 0 && escolhaJogador == "par") || (soma % 2 != 0 && escolhaJogador == "ímpar")) {
        // Se a condição for verdadeira, o jogador venceu
        std::cout << "Parabéns, você venceu!" << std::endl;
    } else {
        // Se a condição for falsa, o computador venceu
        std::cout << "O computador venceu!" << std::endl;
    }

    return 0; // Finalizamos o programa com sucesso
}
