#include "Alunos.h"
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int qtddeAlunos=0;
vector <string> alunos;

Alunos::Alunos()
{
}

Alunos::~Alunos()
{
}

void Alunos::cadastrar(const string &nomeAluno)
{
    alunos.push_back(nomeAluno);
}

void Alunos::alunosCadastrados()
{
    if(alunos.size()!=0){

        cout<<"::: Alunos Cadastrados ::: \n\n";
        for(int i=0;i<alunos.size();i++){
            cout<<""<<i<<"- "<<alunos[i]<<"\n";
        }
    }
    else cout<<"\nNao existe alunos cadastrados";
}

string Alunos::getNomeAluno(int indexAluno)
{
    return alunos[indexAluno];
}

void Alunos::pegarBancoDados()
{
    alunos.push_back("LeandroSilva");
    alunos.push_back("LeticiaSiva");
    alunos.push_back("EduardoJunior");
    alunos.push_back("OrlandoSilva");
    alunos.push_back("LucifranceSIlva");
}