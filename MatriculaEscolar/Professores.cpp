#include "Professores.h"
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;


int qtddeProfessores=0;
vector <string> professores;

Professores::Professores()
{
}

Professores::~Professores()
{
}

void Professores::cadastrar(const string &nomeProfessor)
{
    professores.push_back(nomeProfessor);
}

void Professores::professoresCadastrados()
{
    system("cls");
    if(professores.size()!=0){
        
        cout<<"::: Professores Cadastrados ::: \n\n";
        for(int i=0;i<professores.size();i++){
            cout<<""<<i<<"- "<<professores[i]<<"\n";
        }
    }
    else cout<<"\nNao existe professores cadastrados";
}

void Professores::pegarBancoDados() //Simulando que algumas disciplinas ja estão cadastrada em um banco de dados
{
    professores.push_back("Herminio");
    professores.push_back("Regiane");
    professores.push_back("Mauro");
    professores.push_back("Claudomiro");
    professores.push_back("Constancia");
}

string Professores::getNomeProfessor(int indexProf)
{
    return professores[indexProf];
}

int Professores::qtdProfessor()
{
    if (professores.size() == 0) return 0;
    return professores.size()-1; 
    //nao sei porque, mais só funcionou assim..
    //tentei retornar apenas professores.size(), mas assim retorna o tamanho do vetor + 1.
}
