#ifndef PROFESSORES_H
#define PROFESSORES_H
#include <string>
using namespace std;

class Professores
{
public:
    Professores();
    ~Professores();
    
    void cadastrar(const string &);
    int getNumMatricula();
    void professoresCadastrados();
    string getNomeProfessor(int);
    void pegarBancoDados();
    
private:

};

#endif // PROFESSORES_H
