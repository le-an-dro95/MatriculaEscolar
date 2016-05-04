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
    Disciplinas(string, string);
    Disciplinas(const Disciplinas &);
    ~Disciplinas();
    
    void cadastrarDisciplina(const string &);
    string getDisciplina();
    void detalharDisciplinas(int);
    void matricularAlunoEmDisciplina(int, string);
    int procurarDisciplinasDoProfessor(string);
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
    int procurarDisciplinasAluno(string);
    int procurarAlunoemDisciplina(int, string);
    void lancarNotadoAluno(int,int);
    void chamarAlunos(int);
    int qtdDisciplinas();
    void buscarNota(int);
    void visualizarNota(int,int);
    void buscarSala(int);
    void adicionarSala(int);
    int getNumeroSala();
    void mostrarNumeroSala(int);
    
    virtual void pegarBancoDados()=0;
    static void disciplinasCadastradas();
    
private:
    Alunos alunos;
    vector <string> alunosDisciplina;
    string nomeDisciplina;
    string nomeProfessor;
    int NumeroSala;

};

#endif // DISCIPLINAS_H
