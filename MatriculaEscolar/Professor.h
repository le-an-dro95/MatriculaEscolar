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

 
    void lancarNotaAluno();
    void mostrarDisciplinas();
    
    bool operator==(const Professor &) const;
    const Professor &operator=(const Professor &);
 
    virtual void apresentarMenu();
    static void logar();   
    
private:

    int indexProfessor;
    string senha;
    
    Disciplinas disciplinasprof;
    Alunos alunos;
    Professores professores;

};

#endif // PROFESSOR_H
