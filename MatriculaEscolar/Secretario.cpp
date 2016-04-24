#include "Secretario.h"
#include <iostream>
#include <string>
#include <conio.h>
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
    cout<<" 1 - Cadastrar Aluno \n 2 - Consultar Alunos \n 3 - Cadastrar Professor \n 4 - Consutar Professores\n 5 - Cadastrar Disciplinas \n 6 - Consultar Disciplinas \n 7 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case '1': {cadastrarAluno(); break;}
        case '2': {alunos.alunosCadastrados(); break;}
        case '3': {cadastrarProfesssor(); break;}
        case '4': {professores.professoresCadastrados(); break;}
        case '5': {cadastrarDisciplina(); break;}
        case '6': {disciplinas.disciplinasCadastradas(); break;}
        case '7': {resp='4'; break;}
        default:  {resp='0'; break;}
    }
    }while (resp != "4");
}


void Secretario::cadastrarAluno()
{
    string nomeAluno;
    system("cls");
    cout<<":: Cadastro de Alunos ::\n\n";
    /*
    cout<<"Nome: ";
    cin>>nomeAluno; 
    aluno.cadastrar(nomeAluno);*/
    alunos.cadastrar("LeandroSilva");
    alunos.cadastrar("LeticiaSiva");
    alunos.cadastrar("EduardoJunior");
    alunos.cadastrar("OrlandoSilva");
    alunos.cadastrar("LucifranceSIlva");
    cout<<"Aluno Cadastrado";
    getch();
}

void Secretario::cadastrarProfesssor()
{
    string nomeProfessor;
    system("cls");
    cout<<":: Cadastro de Professor ::\n\n";
    /*
    cout<<"Nome: ";
    cin>>nomeProfessor;
    professor.cadastrar(nomeProfessor);
    */
    professores.cadastrar("Mauro");
    professores.cadastrar("Claudormiro");
    professores.cadastrar("Herminio");
    professores.cadastrar("Regiane");
    professores.cadastrar("Marcelle");
    cout<<"Professor Cadastrado";
    getch();
}

void Secretario::cadastrarDisciplina()
{
    string nomeDisciplina;
    system("cls");
    cout<<":: Cadastro de Disciplinas ::\n\n";
    /*
    cout<<"Nome da Disciplina: ";
    cin>>nomeDisciplina;
    disciplina.cadastrarDisciplina(nomeDisciplina);
     */
    disciplinas.cadastrar("Banco_de_Dados");
    disciplinas.cadastrar("Programacao_II");
    disciplinas.cadastrar("Matematica_Computacional");
    disciplinas.cadastrar("Sistemas_Operacionais");
    disciplinas.cadastrar("Calculo_II");
    cout<<"Disciplina Cadastrada";
    getch();
}

/*
void Secretario::ligarDisciplinaProfessor()
{
    int nProfessor, nDisciplina;
    professores.professoresCadastrados();
    cout<<"Digite o numero do Professor: ";
    cin>>nProfessor;
    disciplinas.disciplinasCadastradas();
    cout<<"Digite o numero da Disciplina: ";
    cin>>nDisciplina;

}*/