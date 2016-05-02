#ifndef ALUNO_H
#define ALUNO_H
#include "Usuario.h"
#include "Alunos.h"
#include "Disciplinas.h"
#include "Professores.h"
#include <string>

using namespace std;

class Aluno: public Usuario
{
     friend ostream &operator<<(ostream &, const Aluno &);
public:
    Aluno();
    Aluno(int, string);
    Aluno(const Aluno &);
    ~Aluno();
    
    virtual void apresentarMenu()=0;
    
    bool operator==(const Aluno &) const;
    const Aluno &operator=(const Aluno &);
    
private: 
    
    static int indexAluno;
};

#endif // ALUNO_H
