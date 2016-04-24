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
    
private:
    string *professores;
};

#endif // PROFESSORES_H
