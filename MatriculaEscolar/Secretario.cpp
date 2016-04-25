#include "Secretario.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
using namespace std;


Secretario::Secretario()
{
    registro = "NomeUsuario";
    senha= "123";
    senhaMestra = "0L@#";
}

Secretario::Secretario(string registro, string senhaMestre)
{
    this->registro=registro;
    this->senha=senha;
    this->senhaMestra=senhaMestra;
    this->disciplinas=disciplinas;
}

Secretario::Secretario(const Secretario &outro):Usuario(outro)
{
    registro = outro.registro;
    senha = outro.senha;
    senhaMestra = outro.senhaMestra;
}

Secretario::~Secretario()
{
}
 
ostream &operator<<(ostream &out, const Secretario &gente)
{
    out <<"Login: "<<gente.registro;
    return out;
}

const Secretario & Secretario::operator=(const Secretario &gente)
{
    Usuario::operator =(gente);
    registro = gente.registro;
    senha = gente.senha;
    senhaMestra = gente.senhaMestra;
    
    return *this;
}

bool Secretario::operator==(const Secretario &gente) const
{
    if(Usuario::operator ==(gente) && (registro == gente.registro) && (senha == gente.senha) && (senhaMestra==gente.senhaMestra))
        return true;
    return false;
}

void Secretario::apresentarMenu()
{
    string resp;
    char op;
    do{
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Cadastrar Aluno \n 2 - Consultar Alunos \n 3 - Cadastrar Professor \n"; 
    cout<<" 4 - Consutar Professores\n 5 - Cadastrar Disciplinas \n 6 - Consultar Disciplinas \n";
    cout<<" 7 - ligar \n 8 - Matricular Aluno\n 9 - SAIR \n";
    cin>>op;
    switch(op)
    {
        //case '1': {cadastrarAluno(); break;}
        case '1': {alunos.pegarBancoDados(); break;}
        case '2': {alunos.alunosCadastrados(); break;}
        //case '3': {cadastrarProfesssor(); break;}
        case '3': {professores.pegarBancoDados(); break;}
        case '4': {professores.professoresCadastrados(); break;}
        //case '5': {cadastrarDisciplina(); break;}
        case '5': {disciplinas.pegarBancoDados(); break;}
        case '6': {disciplinas.disciplinasCadastradas(); break;}
        case '7': {ligarDisciplinaProfessor(); break;}
        case '8': {matricularAlunoDisciplina(); break;}
        case '9': {resp='4'; break;}
        default:  {resp='0'; break;}
    }
    }while (resp != "4");
}

void Secretario::cadastrarAluno()
{
    string nomeAluno;
    system("cls");
    cout<<":: Cadastro de Alunos ::\n\n";
    cout<<"Nome: ";
    cin>>nomeAluno; 
    alunos.cadastrar(nomeAluno);
    cout<<"Aluno Cadastrado";
    getch();
}

void Secretario::matricularAlunoDisciplina()
{
    int indexAluno, nDisciplina;
    string nomeAluno;
    alunos.alunosCadastrados();
    cout<<"Aluno: ";
    cin>>indexAluno;
    nomeAluno=alunos.getNomeAluno(indexAluno);
    disciplinas.disciplinasCadastradas();
    cout<<"Disciplina: ";
    cin>>nDisciplina;
    disciplinas.matricularPartipantes(nDisciplina, nomeAluno);
}

void Secretario::ligarDisciplinaProfessor()
{
    int indexProfessor, nDisciplina;
    string nomeProfessor;
    professores.professoresCadastrados();
    cout<<"Professores: ";
    cin>>indexProfessor;
    nomeProfessor=professores.getNomeProfessor(indexProfessor);
    disciplinas.disciplinasCadastradas();
    cout<<"Disciplina: ";
    cin>>nDisciplina;
    disciplinas.matricularPartipantes(nDisciplina, nomeProfessor);
}

void Secretario::listadeAlunos()
{
    alunos.alunosCadastrados();
}

void Secretario::cadastrarProfesssor()
{
    string nomeProfessor;
    system("cls");
    cout<<":: Cadastro de Professor ::\n\n";
    cout<<"Nome: ";
    cin>>nomeProfessor;
    professores.cadastrar(nomeProfessor);
    cout<<"Professor Cadastrado";
    getch();
}

void Secretario::cadastrarDisciplina()
{
    string nomeDisciplina;
    system("cls");
    cout<<":: Cadastro de Disciplinas ::\n\n";
    cout<<"Nome da Disciplina: ";
    cin>>nomeDisciplina;
    disciplinas.cadastrar(nomeDisciplina);
    cout<<"Disciplina Cadastrada";
    getch();
}