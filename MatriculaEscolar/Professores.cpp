#include "Professores.h"
#include <iostream>
#include <conio.h>
using namespace std;

int qtddeProfessores=0;
Professores::Professores()
{
}

Professores::~Professores()
{
}

void Professores::cadastrar(const string &nomeProfessor)
{
    if(qtddeProfessores!=0)
    {
    string *aux = new string[qtddeProfessores];
    
    for(int i=0;i<qtddeProfessores;i++)
        aux[i] = professores[i];
    
    delete [] professores;
    
    professores = new string[++qtddeProfessores];
    
    for(int i=0;i<qtddeProfessores-1;i++)
        professores[i] = aux[i];
        
    professores[qtddeProfessores-1]= nomeProfessor;
    
    delete [] aux;
    }
     else
    {
        this->professores = new string[++qtddeProfessores];
        this->professores[0] = nomeProfessor;
    }
}

void Professores::professoresCadastrados()
{
    system("cls");
    if(qtddeProfessores!=0){

        cout<<"::: Professores Cadastrados ::: \n\n";
        for(int i=0;i<qtddeProfessores;i++){
            cout<<""<<i<<"- "<<professores[i]<<"\n";
        }
    }
    else cout<<"\nNao existe professores cadastrados";
    getch();
}




/*
int Alunos::getNumMatricula()
{
    return this->matricula;
}*/