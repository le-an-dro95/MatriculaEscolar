#ifndef DISCIPLINAS_H
#define DISCIPLINAS_H
#include "Usuario.h"
#include <string>

using namespace std;


class Disciplinas: public Usuario
{
public:
    Disciplinas();
    ~Disciplinas();
    
    void consultarDisciplina();
    
private:
    string codigo;
    string nome;
};

#endif // DISCIPLINAS_H
