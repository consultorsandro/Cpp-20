//Esta aula trata de entra e saída de dados por meio da iostream. Aula 35. Seção 7

#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(){

//Exemplo de saída de dados no terminal (cout)
cout << "Olá aposentadoria!" << endl;

int age{21};
cout << "Age: " << age << endl;

// Comando específico para saída de mensagem de erro. 
std::cerr << "Mensagem de erro: Deu ruim" << endl;

// Comando específico para saída de mensagem de Log. 
std::clog << "Mensagem de Log: só sei que fizeram merda. Não me pergunte nada." << endl;

// Solicitando ao usuário que faça entrada de dados
/*  Declara as variáveis necessárias
int idade;
std::string nome;
cout << "Escreva seu nome e idade: " << endl;

// Operação de entrada de dados
//std::cin >> nome;
//std::cin >> idade;

// Operação de entrada de dados numa única linha
std::cin >> nome >> idade;


cout << "Olá " << nome << " você tem " << idade << " anos de idade!" << endl;
*/
//Gravação de dados com espaço
std::string nomeCompleto;
int idade2;

//getline pega a entrada de dados com os espaços
cout << "Escreva seu nome completo e idade: " << endl;
std::getline(std::cin,nomeCompleto);

std::cin >> idade2;
cout << "Olá " << nomeCompleto << " você tem " << idade2 << " anos de idade!" << endl;



    return 0;
} 