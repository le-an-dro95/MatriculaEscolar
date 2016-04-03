#ifndef ALUNO_H
#define ALUNO_H
#include "Usuario.h"
#include <string>

using namespace std;

class Aluno: public Usuario
{
     friend ostream &operator<<(ostream &, const Aluno &);
public:
    Aluno();
    Aluno(string, string);
    Aluno(const Aluno &);
    ~Aluno();
    
    virtual void apresentarMenu();
    void consultarNotas();
    void consultarFrequencias();
    void consultarDisciplinas();
    
    bool operator==(const Aluno &) const;
    const Aluno &operator=(const Aluno &);
    
private: 
    string matricula;
};

#endif // ALUNO_H
