#ifndef ALUNOS_H
#define ALUNOS_H
#include <string>
#include <vector>
using namespace std;

class Alunos
{
public:
    Alunos();
    ~Alunos();
    void cadastrar(const string &);
    string getNomeAluno(int);
    void alunosCadastrados();
    void pegarBancoDados();
    int qtdAlunos();
    void setAlunos(string);
    void lancarNotas(int);
    string nomedoAluno();
    void mostrarNotas(int);
    void mostrarNotadoAluno();
    void armazenarNotaAluno(double, double, double);
    
private:

string nomeAluno;
int matricula=0;
double priAv;
double segAv;
double terAv;
};

#endif // ALUNOS_H
