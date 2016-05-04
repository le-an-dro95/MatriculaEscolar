#include "AlunosPosGraduacao.h"
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

const int MAX_ALUNOS=30;

AlunosPosGraduacao::AlunosPosGraduacao()
{
    this->nomeAluno="nomeAluno";
    this->codigoPos=000;
}

AlunoPossGraduacao::AlunosPosGraduacao(string nomeAluno, int codigoPos)
{
    this->nomeAluno=nomeAluno;
    this->codigoPos=codigoPos;
}


AlunosPosGraduacao::AlunosPosGraduacao(const AlunosPosGraduacao &outroAluno)
{
    this->nomeAluno=outroAluno.nomeAluno;
    this->codigoGraduacao=outroAluno.codigoPos;
}

AlunosPosGraduacao::~AlunosPosGraduacao()
{
}


void AlunosGraduacao::pegarBancoDados()
{
    alunos[0].cadastrar("Carolina_Santos");
    alunos[1].cadastrar("Tania_Mara");
    alunos[2].cadastrar("Caetano_Veloso");
    alunos[3].cadastrar("Manuel_Junior");
    alunos[4].cadastrar("Miguel_Mateus");
    alunos[5].cadastrar("Ana_Samara");
    alunos[6].cadastrar("Artur_Meireles");
    alunos[7].cadastrar("Jorge_Junior");
    alunos[8].cadastrar("Manueela_Sillva");
    alunos[9].cadastrar("Mariana_Santos");
    alunos[10].cadastrar("Catarina_veloso");
    alunos[11].cadastrar("Lordes_Samuel");
    alunos[12].cadastrar("Cristina_Monteiro");
    alunos[13].cadastrar("Taina_Castro");
    alunos[14].cadastrar("SUzelly_Trindade");
    alunos[15].cadastrar("Jose_Yan");
    alunos[16].cadastrar("Carlos_Bandeiras");
    alunos[17].cadastrar("Miguel_Rafael");
}

void AlunosGraduacao::alunosCadastrados()
{
    system("cls");
    if(qtddeAlunos!=0){

        cout<<"::: Alunos Cadastrados ::: \n\n";
        for(int i=0;i<qtddeAlunos;i++){
            cout<<""<<i<<"- "<<alunos[i].nomeAluno<<"\n";
        }
    }
    else cout<<"\nNao existe alunos cadastrados";
}