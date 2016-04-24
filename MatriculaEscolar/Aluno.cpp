#include "Aluno.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

Aluno::Aluno()
{
    matricula = 20;
    //senha = "0L@#";
}


Aluno::Aluno(int matricula, string senha)
{
    this->matricula=matricula;
    //this->senha=senha;
}

Aluno::Aluno(const Aluno &outro):Usuario(outro)
{
    matricula = outro.matricula;
    //senha = outro.senha;
}

ostream &operator<<(ostream &out, const Aluno &gente)
{
    out <<"Login: "<<gente.matricula;
    return out;
}

const Aluno & Aluno::operator=(const Aluno &gente)
{
    Usuario::operator =(gente);
    matricula = gente.matricula;
    //senha = gente.senha;
     
    return *this;
}

bool Aluno::operator==(const Aluno &gente) const
{
    if(Usuario::operator ==(gente) && (matricula == gente.matricula)) //&& (senha == gente.senha))
        return true;
    return false;
}

void Aluno::apresentarMenu()
{
    string resp;
    char op;
    do{
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Consultar Notas \n 2 - Consultar Frequencia \n 3 - Consultar Disciplinas \n 4 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case '1': {consultarNotas(); break;}
        case '2': {consultarFrequencias(); break;}
        case '3': {consultarDisciplinas(); break;}
        case '4': {resp='4'; break;}
        default:  {resp='0'; break;}
    }
    }while (resp != "4");

}

void Aluno::consultarNotas()
{
    system("cls");
    cout<<":: Consultar Notas :: \n\n";
    getch();
}

void Aluno::consultarFrequencias()
{
    system("cls");
    cout<<":: Consultar Frequencia :: \n\n";
    getch();
}

void Aluno::consultarDisciplinas()
{
    system("cls");
    cout<<":: Consultar Disciplinas :: \n\n";
    getch();
}