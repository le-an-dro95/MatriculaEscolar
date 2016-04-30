#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Professores.h"
#include "Alunos.h"
#include "Disciplinas.h"
#include "Usuario.h"
#include <string>

using namespace std;

class Professor: public Usuario
{
    friend ostream &operator<<(ostream &, const Professor &);
public:
    Professor();
    Professor(int, string);
    Professor(const Professor &);
    ~Professor();

    virtual void apresentarMenu();
    void lancarNotaAluno();
    void lancarFrequencia();
    void incluirDisciplina();
    void mostrarDisciplinas();
    void logar();
    
    bool operator==(const Professor &) const;
    const Professor &operator=(const Professor &);
    
private:

    int indexProfessor;
    string senha;
    
    Disciplinas disciplinasprof;
    Alunos alunos;
    Professores professores;

};

#endif // PROFESSOR_H
