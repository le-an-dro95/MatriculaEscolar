#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Professores.h"
#include "Alunos.h";
#include "Disciplinas.h"
#include "Usuario.h"
#include <string>

using namespace std;

class Professor: public Usuario
{
    friend ostream &operator<<(ostream &, const Professor &);
public:
    Professor();
    Professor(string, string);
    Professor(const Professor &);
    ~Professor();

    virtual void apresentarMenu();
    void consultarTurma();
    void lancarNotaAluno();
    void lancarFrequencia();
    void incluirDisciplina();
    void mostrarDisciplinas();
    
    bool operator==(const Professor &) const;
    const Professor &operator=(const Professor &);
    
private:

    string registro;
    string senha;
    
    Disciplinas disciplinasprof;
    Alunos alunos;
    Professores professores;

};

#endif // PROFESSOR_H
