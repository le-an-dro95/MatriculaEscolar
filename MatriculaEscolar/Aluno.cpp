#include "Aluno.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

Aluno::Aluno()
{
    indexAluno = 20;
    //senha = "0L@#";
}


Aluno::Aluno(int matricula, string senha)
{
    this->indexAluno=matricula;
    //this->senha=senha;
}

Aluno::Aluno(const Aluno &outro):Usuario(outro)
{
    indexAluno = outro.indexAluno;
    //senha = outro.senha;
}

ostream &operator<<(ostream &out, const Aluno &gente)
{
    out <<"Login: "<<gente.indexAluno;
    return out;
}

const Aluno & Aluno::operator=(const Aluno &gente)
{
    Usuario::operator =(gente);
    indexAluno = gente.indexAluno;
    //senha = gente.senha;
     
    return *this;
}

bool Aluno::operator==(const Aluno &gente) const
{
    if(Usuario::operator ==(gente) && (indexAluno == gente.indexAluno)) //&& (senha == gente.senha))
        return true;
    return false;
}

void Aluno::apresentarMenu()
{
    system("cls");
    if (alunos.qtdAlunos()==0) {cout<<"\n\n Nenhum Aluno Cadastrado"; getch(); return;}
    int resp;
    int op;
    cout<<"Numero de Registro: ";
    cin>>indexAluno;
    
    do{
    resp=99;
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Consultar Notas \n 2 - Consultar Frequencia \n 3 - Consultar Disciplinas \n 4 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case 1: {consultarNotas(); break;}
        case 2: {consultarFrequencias(); break;}
        case 3: {consultarDisciplinas(); break;}
        case 4: {resp=0; break;}
        default: {resp=0; break;}
    }
    }while (resp != 0);

}

void Aluno::consultarNotas()
{
    system("cls");
    cout<<":: Consultar Notas :: \n\n";
    getch();
    alunos.mostrarNotas(indexAluno);
}

void Aluno::consultarFrequencias()
{
    system("cls");
    cout<<":: Consultar Frequencia :: \n\n";
    getch();
}

void Aluno::consultarDisciplinas()
{
    string nomeAluno;
    system("cls");
    cout<<":: Consultar Disciplinas :: \n\n";
    nomeAluno = alunos.getNomeAluno(indexAluno);
    disciplinasdoAluno.procurarDisciplinasAluno(nomeAluno);
    getch();
}

Aluno::~Aluno()
{
}