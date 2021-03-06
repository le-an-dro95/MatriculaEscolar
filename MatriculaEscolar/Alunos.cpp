#include "Alunos.h"
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int qtddeAlunos=0;
const int MAX_ALUNOS=30;
Alunos alunos[MAX_ALUNOS];

Alunos::Alunos()
{
    this->nomeAluno="nomeAluno";
    this->priAv=0;
    this->segAv=0;
    this->terAv=0;
}

Alunos::Alunos(string nomeAluno, double priAv, double segAv, double terAv)
{
    this->nomeAluno=nomeAluno;
    this->priAv=priAv;
    this->segAv=segAv;
    this->terAv=terAv;
}


Alunos::Alunos(const Alunos &outroAluno)
{
    this->nomeAluno=outroAluno.nomeAluno;
    this->priAv=outroAluno.priAv;
    this->segAv=outroAluno.segAv;
    this->terAv=outroAluno.terAv;
}

Alunos::~Alunos()
{
}

void Alunos::setAlunos(string nomeAluno)
{
    this->nomeAluno=nomeAluno;
}

void Alunos::cadastrar(const string &nomeAluno)
{
    alunos[qtddeAlunos].setAlunos(nomeAluno);
    qtddeAlunos+=1;
}

string Alunos::getNomeAluno(int indexAluno)
{
    return alunos[indexAluno].nomedoAluno();
}

string Alunos::nomedoAluno()
{
    return this -> nomeAluno;
}

int Alunos::qtdAlunos()
{
    if(qtddeAlunos==0) return 0;
    else return qtddeAlunos-1;
}

void Alunos::lancarNotas(int indexAluno)
{
    cout<<"\nPrimeira Avaliacao: ";
    cin>>priAv;
    cout<<"\nSegunda Avaliacao: ";
    cin>>segAv;
    cout<<"Terceira Avaliacao: ";
    cin>>terAv;
    alunos[indexAluno].armazenarNotaAluno(priAv,segAv,terAv);
}

void Alunos::armazenarNotaAluno(double priAv, double segAv, double terAv)
{
    this->priAv=priAv;
    this->segAv=segAv;
    this->terAv=terAv;
}

void Alunos::mostrarNotas(int indexAluno)
{
    alunos[indexAluno].mostrarNotadoAluno();
}

void Alunos::mostrarNotadoAluno()
{
    cout<<"Primeira Avalicao: "<<get1av();
    cout<<"\nSegunda Avalicao: "<<get2av();
    cout<<"\nTerceira Avalicao: "<<get3av();
    getch();
}

double Alunos::get1av()
{
    return this->priAv;
}

double Alunos::get2av()
{
    return this->segAv;
}

double Alunos::get3av()
{
    return this->terAv;
}