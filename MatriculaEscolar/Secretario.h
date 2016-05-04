#ifndef SECRETARIO_H
#define SECRETARIO_H
#include "Usuario.h"
#include "DisciplinaGraduacao.h"
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
    Secretario(int, string);
    Secretario(const Secretario &);
    ~Secretario();
    
    virtual void apresentarMenu();
    void cadastrarAluno();
    void cadastrarProfesssor();
    void cadastrarDisciplina();
    void ligarDisciplinaProfessor();
    void matricularAlunoDisciplina();
    void mostrarAlunosdaDisciplina();
    void detalharDisciplina();
    void alocarSalaDisciplina();
    
    virtual void logarNoSistema();

    static void listadeAlunos();
    
    bool operator==(const Secretario &) const;
    const Secretario &operator=(const Secretario &);
    
    
private:

    int registro;
    string senha;
    string senhaMestra;
    DisciplinaGraduacao disciplinas;
    Alunos alunos;
    Professores professores;
    //Professor professor;
};

#endif // SECRETARIO_H
