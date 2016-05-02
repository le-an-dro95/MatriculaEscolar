#ifndef PROFESSORES_H
#define PROFESSORES_H
#include <string>
using namespace std;

class Professores
{
public:
    Professores();
    ~Professores();
    
    void professoresCadastrados();
    string getNomeProfessor(int);
    int qtdProfessor();
    
    static void cadastrar(const string &);
    static void pegarBancoDados();
    
private:

};

#endif // PROFESSORES_H
