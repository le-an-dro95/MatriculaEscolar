#include "Secretario.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


Secretario::Secretario()
{
    registro = "NomeUsuario";
    senha= "123";
    senhaMestra = "0L@#";
}

Secretario::Secretario(string registro, string senhaMestre)
{
    this->registro=registro;
    this->senha=senha;
    this->senhaMestra=senhaMestra;
}

Secretario::Secretario(const Secretario &outro):Usuario(outro)
{
    registro = outro.registro;
    senha = outro.senha;
    senhaMestra = outro.senhaMestra;
}

Secretario::~Secretario()
{
}

ostream &operator<<(ostream &out, const Secretario &gente)
{
    out <<"Login: "<<gente.registro;
    return out;
}

const Secretario & Secretario::operator=(const Secretario &gente)
{
    Usuario::operator =(gente);
    registro = gente.registro;
    senha = gente.senha;
    senhaMestra = gente.senhaMestra;
    
    return *this;
}

bool Secretario::operator==(const Secretario &gente) const
{
    if(Usuario::operator ==(gente) && (registro == gente.registro) && (senha == gente.senha) && (senhaMestra==gente.senhaMestra))
        return true;
    return false;
}

void Secretario::apresentarMenu()
{
    string resp;
    char op;
    do{
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Cadastrar Aluno \n 2 - Cadastrar Professor \n 3 - Cadastrar Disciplinas \n 4 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case '1': {cadastrarAluno(); break;}
        case '2': {cadastrarProfesssor(); break;}
        case '3': {cadastrarDisciplina(); break;}
        case '4': {resp='4'; break;}
        default:  {resp='0'; break;}
    }
    }while (resp != "4");
}


void Secretario::cadastrarAluno()
{
    system("cls");
    cout<<":: Cadastro de Alunos ::\n\n";
    getch();
}

void Secretario::cadastrarProfesssor()
{
    system("cls");
    cout<<":: Cadastro de Professor ::\n\n";
    getch();
}

void Secretario::cadastrarDisciplina()
{
    system("cls");
    cout<<":: Cadastro de Disciplinas ::\n\n";
    diciplinas.cadastrar();
    getch();
}