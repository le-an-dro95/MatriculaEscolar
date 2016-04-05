#ifndef SECRETARIO_H
#define SECRETARIO_H
#include "Usuario.h"
#include "Disciplinas.h"
#include <string>

using namespace std;

class Secretario: public Usuario
{
    friend ostream &operator<<(ostream &, const Secretario &);
public:
    Secretario();
    Secretario(string, string);
    Secretario(const Secretario &);
    ~Secretario();
    
    virtual void apresentarMenu();
    void cadastrarAluno();
    void cadastrarProfesssor();
    void cadastrarDisciplina();

    bool operator==(const Secretario &) const;
    const Secretario &operator=(const Secretario &);
private:

    string registro;
    string senha;
    string senhaMestra;
    Disciplinas diciplinas;
};

#endif // SECRETARIO_H
