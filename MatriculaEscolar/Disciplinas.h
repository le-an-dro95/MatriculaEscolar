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
    void procurarDisciplinasAluno(string);
    void procurarAlunoemDisciplina(int, string);
    void lancarNotadoAluno(int,int);
    void chamarAlunos(int);
    int qtdDisciplinas();
    void buscarNota(int);
    void visualizarNota(int,int);
    void buscarSala(int);
    void adicionarSala(int);
    int getNumeroSala();
    void mostrarNumeroSala(int);
    
    static void pegarBancoDados();
    static void disciplinasCadastradas();
    
private:
    Alunos alunos;
    vector <string> alunosDisciplina;
    string nomeDisciplina;
    string nomeProfessor;
    int NumeroSala;

};

#endif // DISCIPLINAS_H
