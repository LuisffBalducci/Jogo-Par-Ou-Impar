#include <iostream>
#include <cstdlib> // Para rand() e srand()
#include <ctime>   // Para time()
#include <string>  // Para trabalhar com strings

int main() {
    // Declaração de variáveis
    std::string nomeJogador;    // Nome do jogador
    std::string escolhaJogador; // Escolha de par ou ímpar
    int jogadorNumero;          // Número escolhido pelo jogador
    int computadorNumero;       // Número gerado pela IA (computador)
    int soma;                   // Soma dos números

    // Pedir o nome do jogador e personalizar a interação
    std::cout << "Qual é o seu nome, herói? ";
    std::getline(std::cin, nomeJogador); // Captura o nome do jogador (inclusive espaços)

    // Exibir a história
    std::cout << "\nBem-vindo, " << nomeJogador << "!" << std::endl;
    std::cout << "A IA mais poderosa do mundo quer dominar o planeta.\n";
    std::cout << "A única forma de impedir essa conquista é vencendo-a em um jogo de par ou ímpar!" << std::endl;
    std::cout << "Você está pronto para salvar o mundo?\n\n";

    // Inicializar o gerador de números aleatórios
    srand(time(0));

    
    // Laço para garantir que a entrada seja válida ("par" ou "ímpar")
    do {
        std::cout << nomeJogador << ", escolha 'par' ou 'ímpar': ";
        std::cin >> escolhaJogador;

        if (escolhaJogador != "par" && escolhaJogador != "ímpar") {
            std::cout << "Entrada inválida! Tente novamente." << std::endl;
        }

    } while (escolhaJogador != "par" && escolhaJogador != "ímpar");

    // Entrada do número do jogador
    std::cout << "Digite um número entre 0 e 9: ";
    std::cin >> jogadorNumero;

    // Verificar se o número do jogador está dentro do intervalo permitido
    while (jogadorNumero < 0 || jogadorNumero > 9) {
        std::cout << "Número inválido! Digite um número entre 0 e 9: ";
        std::cin >> jogadorNumero;
    }

    // Gerar número aleatório para a IA
    computadorNumero = rand() % 10; // Número entre 0 e 9
    std::cout << "A IA escolheu o número: " << computadorNumero << std::endl;

    // Calcular a soma dos números
    soma = jogadorNumero + computadorNumero;
    std::cout << "A soma dos números é: " << soma << std::endl;

    // Verificar se a soma é par ou ímpar e comparar com a escolha do jogador
    if ((soma % 2 == 0 && escolhaJogador == "par") || (soma % 2 != 0 && escolhaJogador == "ímpar")) {
        std::cout << "Parabéns, " << nomeJogador << "! Você venceu e salvou o mundo!" << std::endl;
    } else {
        std::cout << "A IA venceu! O mundo está sob seu controle..." << std::endl;
    }

    return 0;
}
