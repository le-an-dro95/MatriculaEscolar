#include "Disciplinas.h"
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

using namespace std;

int qtddeDisciplinas=0;

Disciplinas::Disciplinas()
{
}

Disciplinas::~Disciplinas()
{
}

void Disciplinas::disciplinasCadastradas()
{
    system("cls");
    if(qtddeDisciplinas!=0){

        cout<<"::: Disciplinas Cadastradas ::: \n\n";
        for(int i=0;i<qtddeDisciplinas;i++){
            cout<<""<<i<<"- "<<disciplinas[i]<<"\n";
        }
    }
    else cout<<"\nNao existe disciplinas cadastradas";
    getch();
}

void Disciplinas::cadastrar(const string &nomeDisciplina)
{
    if(qtddeDisciplinas!=0)
    {
    string *aux = new string[qtddeDisciplinas];
    
    for(int i=0;i<qtddeDisciplinas;i++)
        aux[i] = disciplinas[i];
    
    delete [] disciplinas;
    
    disciplinas = new string[++qtddeDisciplinas];
    
    for(int i=0;i<qtddeDisciplinas-1;i++)
        disciplinas[i] = aux[i];
        
    disciplinas[qtddeDisciplinas-1]= nomeDisciplina;
    
    delete [] aux;
    }
     else
    {
        this->disciplinas = new string[++qtddeDisciplinas];
        this->disciplinas[0] = nomeDisciplina;
    }
}

string Disciplinas::getDisciplina(int nDisciplina)
{
    return this->disciplinas[nDisciplina];
}

