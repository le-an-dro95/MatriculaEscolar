#ifndef DISCIPLINAS_H
#define DISCIPLINAS_H
#include "Usuario.h"
#include <string>
#include <vector>

using namespace std;


class Disciplinas: public Usuario
{
public:
    Disciplinas();
    ~Disciplinas();
    
    void consultarDisciplina();
    void cadastrarDisciplina();
    
private:
    string codigo;
    string nome;
    string *disciplinas;
};

#endif // DISCIPLINAS_H
