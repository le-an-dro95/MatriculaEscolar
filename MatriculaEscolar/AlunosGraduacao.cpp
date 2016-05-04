#include "AlunosGraduacao.h"
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

const int MAX_ALUNOS=30;
AlunosGraduacao::AlunosGraduacao()
{
    this->nomeAluno="nomeAluno";
    this->codigoGraduacao=000;
}

AlunosGraduacao::AlunosGraduacao(string nomeAluno, int codigoGraduacao)
{
    this->nomeAluno=nomeAluno;
    this->codigoGraduacao=codigoGraduacao;
}


AlunosGraduacao::AlunosGraduacao(const AlunosGraduacao &outroAluno)
{
    this->nomeAluno=outroAluno.nomeAluno;
    this->codigoGraduacao=outroAluno.codigoGraduacao;
}


AlunosGraduacao::~AlunosGraduacao()
{
}

void AlunosGraduacao::pegarBancoDados()
{
    alunos[0].cadastrar("Maria_Joao");
    alunos[1].cadastrar("Leandro_Silva");
    alunos[2].cadastrar("Leticia_Santos");
    alunos[3].cadastrar("Eduardo_Junior");
    alunos[4].cadastrar("Orlando_Mateus");
    alunos[5].cadastrar("Lucifrance_Samara");
    alunos[6].cadastrar("Ana_Maria");
    alunos[7].cadastrar("Jorge_Junior");
    alunos[8].cadastrar("Manuel_Silva");
    alunos[9].cadastrar("Maria_Santos");
    alunos[10].cadastrar("Catarina_Silveira");
    alunos[11].cadastrar("Lordes_Santos");
    alunos[12].cadastrar("Cristina_Monteiro");
    alunos[13].cadastrar("Taina_Castro");
    alunos[14].cadastrar("Silvany_Trindade");
    alunos[15].cadastrar("Yan_Jose");
    alunos[16].cadastrar("Antonio_Bandeiras");
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