#include "Alunos.h"
#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int qtddeAlunos=0;
Alunos alunos[20];

Alunos::Alunos()
{
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

void Alunos::alunosCadastrados()
{
    if(qtddeAlunos!=0){

        cout<<"::: Alunos Cadastrados ::: \n\n";
        for(int i=0;i<qtddeAlunos;i++){
            cout<<""<<i<<"- "<<alunos[i].nomeAluno<<"\n";
        }
    }
    else cout<<"\nNao existe alunos cadastrados";
    getch();
}

void Alunos::pegarBancoDados()
{
    alunos[0].cadastrar("AdrieneCarvalho");
    alunos[1].cadastrar("LeandroSilva");
    alunos[2].cadastrar("LeticiaSiva");
    alunos[3].cadastrar("EduardoJunior");
    alunos[4].cadastrar("OrlandoSilva");
    alunos[5].cadastrar("LucifranceSIlva");
    alunos[6].cadastrar("AnaMaria");
    alunos[7].cadastrar("JorgeJunior");
    alunos[8].cadastrar("ManuelSilva");
    alunos[9].cadastrar("MariaSantos");
    alunos[10].cadastrar("Toninha");
    alunos[11].cadastrar("LordesSantos");
    alunos[12].cadastrar("CristinaMonteiro");
    alunos[13].cadastrar("TainaCastro");
    alunos[14].cadastrar("SilvanyTrindade");
    alunos[15].cadastrar("YanJose");
    alunos[16].cadastrar("AntonioBandeiras");
    alunos[17].cadastrar("Waldisnei");
}

int Alunos::qtdAlunos()
{
    return qtddeAlunos;
}

void Alunos::lancarNotas(int indexAluno)
{
    double priAv, segAv, terAv;
    cout<<"1Av: ";
    cin>>priAv;
    cout<<"2Av: ";
    cin>>segAv;
    cout<<"3Av: ";
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
    cout<<"Primeira Avalicao: "<<priAv;
    cout<<"Segunda Avalicao: "<<segAv;
    cout<<"Terceira Avalicao: "<<terAv;
    getch();
}