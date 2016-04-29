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
    void cadastrarDisciplina(const string &);
    string getDisciplina();
    void pegarBancoDados();
    void detalharDisciplinas(int);
    void matricularAlunoEmDisciplina(int, string);
    void proucurarDisciplinasDoProfessor(string);
    void matricularAlunosnaDisciplina(int);
    void setDisciplinas(string);
    void adicionarProfessor(string);
    string getNomeProfessor();
    void adicionarProfessorDisciplina(string, int);
    void incluirNoVetorAluno(string);
    void percorrerVetorAlunosDisciplina();
    void listarAlunosDisciplina(int);
    int qtdDeAlunosNaDisciplina(int);
    int tamanhoDoVetorDisciplina();
    
private:
    Alunos alunos;
    vector <string> alunosDisciplina;
    string nomeDisciplina;
    string nomeProfessor;
    string aluno;

};

#endif // DISCIPLINAS_H
