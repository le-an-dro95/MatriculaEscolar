#ifndef ALUNOGRADUANDO_H
#define ALUNOGRADUANDO_H
#include "Aluno.h"
#include "Alunos.h"
#include "Disciplinas.h"
#include "Professores.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class AlunoGraduando: public Aluno
{
    friend ostream &operator<<(ostream &, const AlunoGraduando &);
public:
    AlunoGraduando();
    AlunoGraduando(int, string);
    AlunoGraduando(const AlunoGraduando &);
    ~AlunoGraduando();
    void consultarNotas();
    void consultarDisciplinas();
    
    bool operator==(const AlunoGraduando &) const;
    const AlunoGraduando &operator=(const AlunoGraduando &);
    
    virtual void apresentarMenu();
    
private:
    int indexAluno;
    Alunos alunos;
    Disciplinas disciplinasdoAluno;
    Professores professordoAluno;

};

#endif // ALUNOGRADUANDO_H
