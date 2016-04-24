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
    int getNumMatricula();
    void alunosCadastrados();
private:

int matricula=0;
string *alunos;
};

#endif // ALUNOS_H
