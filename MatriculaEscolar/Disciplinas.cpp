#include "Disciplinas.h"
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

const int maxAlunos=30;
int qtddeDisciplinas=0;
int qtddeAlunosDisciplina=0;

Disciplinas disciplinas[10];


Disciplinas::Disciplinas()
{
}

Disciplinas::~Disciplinas()
{
}


void Disciplinas::cadastrarDisciplina(const string &nomeDisciplina)
{
    disciplinas[qtddeDisciplinas].setDisciplinas(nomeDisciplina);
    qtddeDisciplinas+=1;
}

void Disciplinas::setDisciplinas(string nomeDisciplina)
{
    this->nomeDisciplina=nomeDisciplina;
}

string Disciplinas::getDisciplina()
{
    return this->nomeDisciplina;
}

void Disciplinas::detalharDisciplinas(int indexDisciplina)
{
    int resp;
    cout<<"Nome da Disciplina: "<<disciplinas[indexDisciplina].getDisciplina();
    cout<<"Numero de Registro: "<<indexDisciplina;
    cout<<"Professor: "<<disciplinas[indexDisciplina].getNomeProfessor();
    cout<<"Quantidade de Alunos Matriculados: "<<qtdDeAlunosNaDisciplina(indexDisciplina);
    cout<<"Visualizar Lista de Alunos? 1-sim, 0 - Sair\n\n";
    if (resp==1) listarAlunosDisciplina(indexDisciplina);
    else return;
}//Falta testar..

void Disciplinas::disciplinasCadastradas()
{
    system("cls");
    if(qtddeDisciplinas!=0){

        cout<<"::: Disciplinas Cadastradas ::: \n\n";
        for(int i=0;i<qtddeDisciplinas;i++){
            cout<<""<<i<<"- "<<disciplinas[i].getDisciplina()<<"\n";
        }
    }
    else cout<<"\nNao existe disciplinas cadastradas";
    getch();
}

void Disciplinas::pegarBancoDados() //Simulando que algumas disciplinas ja estão cadastrada em um banco de dados
{
    disciplinas[0].setDisciplinas("Matematica_Computacional");
    disciplinas[1].setDisciplinas("Sistemas_Operacionais");
    disciplinas[2].setDisciplinas("Programacao_II");
    disciplinas[3].setDisciplinas("Calculo_II");
    disciplinas[4].setDisciplinas("Programacao_I");
    qtddeDisciplinas=5;
}

void Disciplinas::matricularAlunoEmDisciplina(int indexDisciplina, string nomeAluno)
{
    disciplinas[indexDisciplina].incluirNoVetorAluno(nomeAluno);
}

void Disciplinas::incluirNoVetorAluno(string nomeAluno)
{ 
    this->alunosDisciplina.push_back(nomeAluno);
} 

void Disciplinas::listarAlunosDisciplina(int indexDisciplina)
{
    disciplinas[indexDisciplina].percorrerVetorAlunosDisciplina();
}

int Disciplinas::qtdDeAlunosNaDisciplina(int indexDisciplina)
{
    return disciplinas[indexDisciplina].tamanhoDoVetorDisciplina();
}

int Disciplinas::tamanhoDoVetorDisciplina()
{
    return alunosDisciplina.size();
}

void Disciplinas::percorrerVetorAlunosDisciplina()
{
    system("cls");
    cout<<"---- Lista de Alunos da Disciplina ----\n\n";
    for(int i=0;i<alunosDisciplina.size();i++)
        cout<<""<<i<<" - "<<alunosDisciplina[i]<<"\n";
}

void Disciplinas::adicionarProfessorDisciplina(string nomeProfessor, int indexDisciplina)
{
    disciplinas[indexDisciplina].adicionarProfessor(nomeProfessor);
}

void Disciplinas::adicionarProfessor(string nomeProfessor)
{
    this->nomeProfessor=nomeProfessor;
}

string Disciplinas::getNomeProfessor()
{
    return this->nomeProfessor;
}

void Disciplinas::proucurarDisciplinasDoProfessor(string nomeProfessor)
{
    int numerar=0;
    for (int i=0;i<qtddeDisciplinas;i++)
    {
    if(disciplinas[i].getNomeProfessor()==nomeProfessor)
        { 
        numerar=numerar+1;
        cout<<" "<<numerar<<" - "<<disciplinas[i].getDisciplina()<<"\n";
        }
    }
}