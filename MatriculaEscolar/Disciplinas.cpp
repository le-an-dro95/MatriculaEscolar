#include "Disciplinas.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int qtddeDisciplinas=0;

Disciplinas::Disciplinas()
{
}

Disciplinas::~Disciplinas()
{
}

void Disciplinas::consultarDisciplina()
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

/*void Disciplinas::cadastrarDisciplina(const string &nomeDisciplina)
{
    if(qtddeDisciplinas!=0)
    {
    string *aux = new string[qtddeDisciplinas];
    
    for(int i=0;i<qtddeDisciplinas;i++)
        aux[i] = disciplinas[i];
    
    delete [] disciplinas;
    
    disciplinas = new string[++qtddeDisciplinas];
    
    for(int i=0;i<qtddeLivros-1;i++)
        disciplinas[i] = aux[i];
        
    disciplinas[qtddeLivros-1]= nomeDisciplina;
    
    delete [] aux;
    }
     else
    {
        this->disciplinas = new string[++qtddeDisciplinas];
        this->disciplinas[0] = nomeDisciplina;
    }
}*\