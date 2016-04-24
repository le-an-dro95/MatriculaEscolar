#include "Alunos.h"
#include <iostream>
#include <conio.h>

using namespace std;

int qtddeAlunos=0;
Alunos::Alunos()
{
}

Alunos::~Alunos()
{
}

void Alunos::cadastrar(const string &nomeAluno)
{
    if(qtddeAlunos!=0)
    {
    string *aux = new string[qtddeAlunos];
    
    for(int i=0;i<qtddeAlunos;i++)
        aux[i] = alunos[i];
    
    delete [] alunos;
    
    alunos = new string[++qtddeAlunos];
    
    for(int i=0;i<qtddeAlunos-1;i++)
        alunos[i] = aux[i];
        
    alunos[qtddeAlunos-1]= nomeAluno;
    
    delete [] aux;
    }
     else
    {
        this->alunos = new string[++qtddeAlunos];
        this->alunos[0] = nomeAluno;
    }
}

void Alunos::alunosCadastrados()
{
    system("cls");
    if(qtddeAlunos!=0){

        cout<<"::: Alunos Cadastrados ::: \n\n";
        for(int i=0;i<qtddeAlunos;i++){
            cout<<""<<i<<"- "<<alunos[i]<<"\n";
        }
    }
    else cout<<"\nNao existe alunos cadastrados";
    getch();
}

int Alunos::getNumMatricula()
{
    return this->matricula;
}