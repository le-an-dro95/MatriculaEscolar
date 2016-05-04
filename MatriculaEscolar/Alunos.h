#ifndef ALUNOS_H
#define ALUNOS_H
#include <string>
using namespace std;

class Alunos
{
public:
    Alunos();
    Alunos(string, double, double, double);
    Alunos(const Alunos &);
    ~Alunos();
    
    void cadastrar(const string &);
    string getNomeAluno(int);
    int qtdAlunos();
    void setAlunos(string);
    void lancarNotas(int);
    string nomedoAluno();
    void mostrarNotas(int);
    void mostrarNotadoAluno();
    void armazenarNotaAluno(double, double, double);
    double get1av();
    double get2av();
    double get3av();
    
    virtual void pegarBancoDados()=0;
    virtual void alunosCadastrados()=0;
    
private:

    string nomeAluno;
    double priAv;
    double segAv;
    double terAv;
};

#endif // ALUNOS_H
