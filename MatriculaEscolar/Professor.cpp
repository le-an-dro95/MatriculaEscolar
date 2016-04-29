#include "Professor.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

Professor::Professor()
{
    indexProfessor = 0;
    senha = "p123";
}

Professor::Professor(int indexProfessor, string senha)
{
    this->indexProfessor = indexProfessor;
    this->senha = senha;
}

Professor::Professor(const Professor &outro):Usuario(outro)
{
    indexProfessor = outro.indexProfessor;
    senha= outro.senha;
}

Professor::~Professor()
{
}

ostream &operator<<(ostream &out, const Professor &gente)
{
    out << "Registro: "<<gente.indexProfessor;
    return out;
}

const Professor & Professor::operator=(const Professor &gente)
{
    Usuario::operator =(gente);
    indexProfessor = gente.indexProfessor;
    senha = gente.senha;
    
    return *this;
}

bool Professor::operator==(const Professor &gente) const
{
    if(Usuario::operator ==(gente) && (indexProfessor == gente.indexProfessor) && (senha == gente.senha))
        return true;
    return false;
}

void Professor::apresentarMenu()
{  
    string resp;
    char op;
    cout<<"Numero de Registro: ";
    
    do{
    cin>>indexProfessor;
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Consultar Disciplinas Atuais \n 2 - Lancar Nota de Aluno \n 3 - Lancar Frequencia \n 4 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case '1': {mostrarDisciplinas(); break;}
        case '2': {lancarNotaAluno(); break;}
        case '3': {lancarFrequencia(); break;}
        case '4': {resp='4'; break;}
        default:  {resp='0'; break;}
    }
    }while (resp != "4");
}

void Professor::mostrarDisciplinas()
{
    string nomeProfessor;
    nomeProfessor = professores.getNomeProfessor(indexProfessor);
    disciplinasprof.proucurarDisciplinasDoProfessor(nomeProfessor);
}

void Professor::consultarTurma()
{
    int indexDisciplina;
    system("cls");
    cout<<":: Consultar Turma ::\n\n";
    mostrarDisciplinas();
    cout<<"Digite o numero da disciplina";
    cin>>indexDisciplina;
    disciplinasprof.detalharDisciplinas(indexDisciplina);
    getch();
}

void Professor::lancarNotaAluno()
{
    system("cls");
    cout<<":: Lancar Notas ::\n\n";
    getch();
}

void Professor::lancarFrequencia()
{
    system("cls");
    cout<<":: Lancar frequencia :: \n\n";
    getch();
}

void Professor::logar()
{
    int indexProfessor;
    string senha;
    cout<<"Numero de Registro: ";
    cin>>indexProfessor;
    cout<<"Senha: ";
    cin>>senha;
}

