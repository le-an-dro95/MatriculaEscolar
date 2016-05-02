#include "Aluno.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int Aluno::indexAluno=0;

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

Aluno::~Aluno()
{
}