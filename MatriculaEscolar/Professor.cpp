#include "Professor.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

Professor::Professor()
{
    registro = "professor123";
    senha = "p123";
}

Professor::Professor(string registro, string senha)
{
    this->registro = registro;
    this->senha = senha;
}

Professor::Professor(const Professor &outro):Usuario(outro)
{
    registro = outro.registro;
    senha= outro.senha;
}

Professor::~Professor()
{
}

ostream &operator<<(ostream &out, const Professor &gente)
{
    out << "Registro: "<<gente.registro;
    return out;
}

const Professor & Professor::operator=(const Professor &gente)
{
    Usuario::operator =(gente);
    registro = gente.registro;
    senha = gente.senha;
    
    return *this;
}

bool Professor::operator==(const Professor &gente) const
{
    if(Usuario::operator ==(gente) && (registro == gente.registro) && (senha == gente.senha))
        return true;
    return false;
}

void Professor::apresentarMenu()
{  
    string resp;
    char op;
    do{
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Consultar Turmas \n 2 - Lancar Nota de Aluno \n 3 - Lancar Frequencia \n 4 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case '1': {consultarTurma(); break;}
        case '2': {lancarNotaAluno(); break;}
        case '3': {lancarFrequencia(); break;}
        case '4': {resp='4'; break;}
        default:  {resp='0'; break;}
    }
    }while (resp != "4");
}

void Professor::consultarTurma()
{
    system("cls");
    cout<<":: Consultar Turma ::\n\n";
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