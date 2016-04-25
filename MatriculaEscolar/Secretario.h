#ifndef SECRETARIO_H
#define SECRETARIO_H
#include "Usuario.h"
#include "Disciplinas.h"
#include "Alunos.h"
#include "Professores.h"
#include "Professor.h"
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
    void listadeAlunos();
    void ligarDisciplinaProfessor();
    void matricularAlunoDisciplina();

    bool operator==(const Secretario &) const;
    const Secretario &operator=(const Secretario &);
private:

    string registro;
    string senha;
    string senhaMestra;
    Disciplinas disciplinas;
    Alunos alunos;
    Professores professores;
    //Professor professor;
};

#endif // SECRETARIO_H
