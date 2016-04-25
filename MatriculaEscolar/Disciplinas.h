#ifndef DISCIPLINAS_H
#define DISCIPLINAS_H
#include <string>
#include <vector>
#include "Alunos.h"

using namespace std;


class Disciplinas
{
public:
    Disciplinas();
    ~Disciplinas();
    
    void disciplinasCadastradas();
    void cadastrar(const string &);
    string getDisciplina(int);
    void pegarBancoDados();
    void detalharDisciplinas();
    void matricularPartipantes(int, string);
    void participantesdaDisciplina(int);
    void proucurarProfessor(string);
    
private:
    string codigo;
    string nome;
    Alunos alunos;
};

#endif // DISCIPLINAS_H
