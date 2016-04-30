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
    void procurarDisciplinasAluno(string);
    void procurarAlunoemDisciplina(int, string);
    void lancarNotadoAluno(int,int);
    void chamarAlunos(int);
    
private:
    Alunos alunos;
    vector <string> alunosDisciplina;
    //vector <double> notasAluno;
    string nomeDisciplina;
    string nomeProfessor;

};

#endif // DISCIPLINAS_H
