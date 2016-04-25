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

vector <string> sistComp;
vector <string> progII;
vector <string> matComp;
vector <string> sistOp;
vector <string> calcII;
vector <string> disciplinas;

void Disciplinas::disciplinasCadastradas()
{
    system("cls");
    if(disciplinas.size()!=0){

        cout<<"::: Disciplinas Cadastradas ::: \n\n";
        for(int i=0;i<disciplinas.size();i++){
            cout<<""<<i<<"- "<<disciplinas[i]<<"\n";
        }
    }
    else cout<<"\nNao existe disciplinas cadastradas";
    getch();
}

void Disciplinas::pegarBancoDados() //Simulando que algumas disciplinas ja estão cadastrada em um banco de dados
{
    disciplinas.push_back("Sistemas_de_Computacao");
    disciplinas.push_back("Programacao_II");
    disciplinas.push_back("Matematica_Computacional");
    disciplinas.push_back("Sistemas_Operacionais");
    disciplinas.push_back("Calculo_II");
}

void Disciplinas::matricularPartipantes(int indexDisciplina, string nomeParticipante)
{
    switch(indexDisciplina)
    {
        case 0: { sistComp.push_back(nomeParticipante); break;}
        case 1: { progII.push_back(nomeParticipante); break;}
        case 2: { matComp.push_back(nomeParticipante); break;}
        case 3: { sistOp.push_back(nomeParticipante); break;}
        case 4: { calcII.push_back(nomeParticipante); break;}
    }
}

void Disciplinas::participantesdaDisciplina(int indexDisciplina)
{
        int i;
        cout<<"Alunos Matriculados em: ";
        switch(indexDisciplina)
        {
        case 0: 
        { 
            cout<<"Sistemas de Computacao\n\n";
            for(i=0;i<sistComp.size();i++) cout<<" "<<i<<" - "<<sistComp[i];
            break;
        }
        case 1:
        {
            cout<<"Programacao II\n\n";
            for(i=0;i<progII.size();i++) cout<<" "<<i<<" - "<<progII[i];
            break;
        }
        case 2: 
        {
            cout<<"Matematica Computacional\n\n";
            for(i=0;i<matComp.size();i++) cout<<" "<<i<<" - "<<matComp[i];
            break;
        }
        case 3:
        {
            cout<<"Sistemas Operacionais\n\n";
            for(i=0;i<sistOp.size();i++) cout<<" "<<i<<" - "<<sistOp[i];
            break;
        }
        case 4:
        {
            cout<<"Calculo II\n\n";
            for(i=0;i<calcII.size();i++) cout<<" "<<i<<" - "<<calcII[i];
            break;
        }
        }
        getch();
}

void Disciplinas::proucurarProfessor(string nomeProfessor)
{//considerando que a primeria pessoa do vetor sempre é um professor;
    if (sistComp[0] == nomeProfessor) cout<<"\n1 - Sistemas de Computacao \n";
    if (progII[0] == nomeProfessor) cout<<"2 - Programacao II \n";
    if (matComp[0] == nomeProfessor) cout<<"3 - Matematica Computacional \n";
    if (sistOp[0] == nomeProfessor) cout<<"4 - Sistemas Operacionais \n";
    if (calcII[0] == nomeProfessor) cout<<"5 - Calculo II \n";
}

void Disciplinas::detalharDisciplinas()
{
    int nDisciplina;
    disciplinasCadastradas();
    if (disciplinas.size()==0) return;
    
    cout<<"\nDigite o numero da Disciplina: ";
    cin>>nDisciplina;
    switch(nDisciplina)
    {
        case 0:
        {
            cout<<"Disciplina: Sistemas de Computacao";
            cout<<"\n Professor(a): Regiane Kawasaki";
            cout<<"\n Numero de Registro: "<<nDisciplina;
            alunos.alunosCadastrados();
            getch();
            break;
        }
        case 1: 
        {
            cout<<"Disciplina: Programacao II";
            cout<<"\n Professor(a): Claudomiro";
            cout<<"\n Numero de Registro: "<<nDisciplina;
            cout<<"\n Alunos Matriculados: ";
            alunos.alunosCadastrados();
            getch();
            break;
        }
        case 2:
        {
            cout<<"Disciplina: Matematica Computacional";
            cout<<"\n Professor(a): Herminio ";
            cout<<"\n Numero de Registro: "<<nDisciplina;
            cout<<"\n Alunos Matriculados: ";
            alunos.alunosCadastrados();
            getch();
            break;
        }
        case 3:
        {
            cout<<"Disciplina: Sistemas Operacionais";
            cout<<"\n Professor(a): Regiane Kawasaki";
            cout<<"\n Numero de Registro: "<<nDisciplina;
            cout<<"\n Alunos Matriculados: ";
            alunos.alunosCadastrados();
            getch();
            break;
        }
        case 4: 
        {
            cout<<"Disciplina: Calculo II";
            cout<<"\n Professor(a): Amanda";
            cout<<"\n Numero de Registro: "<<nDisciplina;
            cout<<"\n Alunos Matriculados: ";
            alunos.alunosCadastrados();
            getch();
            break;
        }
    }
}

void Disciplinas::cadastrar(const string &nomeDisciplina)
{
    disciplinas.push_back(nomeDisciplina);
}

string Disciplinas::getDisciplina(int indexDisciplina)
{
    return disciplinas[indexDisciplina];
}