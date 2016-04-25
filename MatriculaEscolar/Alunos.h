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
    
private:

int matricula=0;
};

#endif // ALUNOS_H
