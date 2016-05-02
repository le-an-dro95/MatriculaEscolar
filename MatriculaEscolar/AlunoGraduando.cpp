#include "AlunoGraduando.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


AlunoGraduando::AlunoGraduando()
{
    indexAluno = 20;
}

AlunoGraduando::AlunoGraduando(int matricula, string senha)
{
    this->indexAluno=matricula;
    //this->senha=senha;
}

AlunoGraduando::AlunoGraduando(const AlunoGraduando &outro):Aluno(outro)
{
    indexAluno = outro.indexAluno;
    //senha = outro.senha;
}
ostream &operator<<(ostream &out, const AlunoGraduando &gente)
{
    out <<"Login: "<<gente.indexAluno;
    return out;
}

const AlunoGraduando & AlunoGraduando::operator=(const AlunoGraduando &gente)
{
    Aluno::operator =(gente);
    indexAluno = gente.indexAluno;
    //senha = gente.senha;
     
    return *this;
}

bool AlunoGraduando::operator==(const AlunoGraduando &gente) const
{
    if(Aluno::operator ==(gente) && (indexAluno == gente.indexAluno)) //&& (senha == gente.senha))
        return true;
    return false;
}

AlunoGraduando::~AlunoGraduando()
{
}

void AlunoGraduando::apresentarMenu()
{
    system("cls");
    if (alunos.qtdAlunos()==0) {cout<<"\n\n Nenhum Aluno Cadastrado"; getch(); return;}
    int resp;
    int op;
    cout<<"Numero de Registro: ";
    cin>>indexAluno;
    
    do{
    resp=99;
    system("cls");
    cout<<" "<<alunos.getNomeAluno(indexAluno);
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Consultar Notas \n 2 - Consultar Disciplinas \n 3 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case 1: {consultarNotas(); break;}
        case 2: {consultarDisciplinas(); break;}
        case 3: {resp=0; break;}
        default: {resp=0; break;}
    }
    }while (resp != 0);

}

void AlunoGraduando::consultarNotas()
{
    int indexDisciplina;
    string nomeAluno;
    system("cls");
    cout<<":: Consultar Notas :: \n\n";
    nomeAluno = alunos.getNomeAluno(indexAluno);
    disciplinasdoAluno.procurarDisciplinasAluno(nomeAluno);
    cout<<"\nDisciplina: ";
    cin>>indexDisciplina;
    disciplinasdoAluno.visualizarNota(indexDisciplina,indexAluno);
    getch();
}

void AlunoGraduando::consultarDisciplinas()
{
    string nomeAluno;
    int resp, indexDisciplina;
    do{
    system("cls");
    cout<<":: Disciplinas Cadastradas :: \n\n";
    nomeAluno = alunos.getNomeAluno(indexAluno);
    disciplinasdoAluno.procurarDisciplinasAluno(nomeAluno);
    cout<<"\nVisulizar Informacoes de Disciplina? (1 - Sim, 0 - SAIR): ";
    cin>>resp;
    switch(resp){
    case 1: 
    {
        cout<<"\n\nNumero da Disciplina: ";
        cin>>indexDisciplina;
        if (indexDisciplina> disciplinasdoAluno.qtdDisciplinas()) {break;}
        disciplinasdoAluno.detalharDisciplinas(indexDisciplina);
        getch();
        break;
    }
    case 0: {return;}
    default: {break;}
    }
    }while (1);
}
