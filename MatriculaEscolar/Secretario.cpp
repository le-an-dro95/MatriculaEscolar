#include "Secretario.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
using namespace std;


Secretario::Secretario()
{
    registro = 123;
    senha= "123";
    senhaMestra = "0L@#";
}

Secretario::Secretario(int registro, string senha)
{
    this->registro=registro;
    this->senha=senha;
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

void Secretario::logarNoSistema()
{
    int registro;
    string senha;
    cout<<"\n\nNumero de Registro: ";
    cin>>registro;
    cout<<"Senha: ";
    cin>>senha;
    if (registro==123 && senha == "123")
        apresentarMenu();
    else{
        cout<<"Numero de Registro e/ou senha Incorreta";
        getch();
        return;
    }
}

void Secretario::apresentarMenu()
{
    string resp;
    int op;
    do{
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Cadastrar Aluno \n 2 - Consultar Alunos \n 3 - Cadastrar Professor \n"; 
    cout<<" 4 - Consutar Professores\n 5 - Cadastrar Disciplinas \n 6 - Consultar Disciplinas \n";
    cout<<" 7 - Cadastrar Professor em Disciplina \n 8 - Matricular Aluno \n 9 - Dados de Disciplina \n";
    cout<<" 10 - Alocar Sala Para Disciplina \n 11 - SAIR \n\n --> ";
    cin>>op;
    switch(op)
    {
        //case '1': {cadastrarAluno(); break;}
        case 1: {alunos.pegarBancoDados(); break;}
        case 2: {alunos.alunosCadastrados(); getch(); break;}
        //case '3': {cadastrarProfesssor(); break;}
        case 3: {professores.pegarBancoDados(); break;}
        case 4: {professores.professoresCadastrados(); getch(); break;}
        //case '5': {cadastrarDisciplina(); break;}
        case 5: {disciplinas.pegarBancoDados(); break;}
        case 6: {disciplinas.disciplinasCadastradas(); getch(); break;}
        case 7: {ligarDisciplinaProfessor(); break;}
        case 8: {matricularAlunoDisciplina(); break;}
        case 9: {detalharDisciplina(); break;} 
        case 10: {alocarSalaDisciplina(); break;}
        case 11: {resp='4'; break;}
        default: {resp='0'; break;}
    }
    }while (resp != "4");
}

void Secretario::alocarSalaDisciplina()
{
    int indexDisciplina;
    cout<<"Alocar Sala Para Disciplina\n\n";
    disciplinas.disciplinasCadastradas();
    if(disciplinas.qtdDisciplinas()==0) {getch(); return;}
    cout<<"\nDigite a Disciplina: ";
    cin>>indexDisciplina;
    disciplinas.buscarSala(indexDisciplina);
}

void Secretario::detalharDisciplina()
{
    int indexDisciplina;
    do{
    disciplinas.disciplinasCadastradas();
    if (disciplinas.qtdDisciplinas()==0) {getch(); return;}
    cout<<"\n\nNumero da Disciplina: ";
    cin>>indexDisciplina;
    } while (indexDisciplina>disciplinas.qtdDisciplinas());
    disciplinas.detalharDisciplinas(indexDisciplina);
    getch();
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
    int indexAluno, indexDisciplina;
    string nomeAluno;
    do{
    alunos.alunosCadastrados();
    if (alunos.qtdAlunos()==0) {getch(); return;}
    cout<<"\n\nNumero do Aluno: ";
    cin>>indexAluno;
    } while(indexAluno>alunos.qtdAlunos());
    nomeAluno=alunos.getNomeAluno(indexAluno);
    do{
    disciplinas.disciplinasCadastradas();
    if (disciplinas.qtdDisciplinas()==0) {getch(); return;}
    cout<<"\n\nDisciplina: ";
    cin>>indexDisciplina;
    }while(indexDisciplina>disciplinas.qtdDisciplinas());
    disciplinas.matricularAlunoEmDisciplina(indexDisciplina, nomeAluno);
}

void Secretario::mostrarAlunosdaDisciplina()
{
    int indexDisciplina;
    disciplinas.disciplinasCadastradas();
    cout<<"Numero da Disciplina: ";
    cin>>indexDisciplina;
    disciplinas.listarAlunosDisciplina(indexDisciplina);
    getch();
}//não é daqui.. só pra testar.

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
    disciplinas.cadastrarDisciplina(nomeDisciplina);
    cout<<"Disciplina Cadastrada";
    getch();
}

void Secretario::ligarDisciplinaProfessor()
{
    int indexProfessor, indexDisciplina;
    string nomeProfessor;
    do{
    professores.professoresCadastrados();
    if(professores.qtdProfessor() == 0) {getch(); return;}
    cout<<"\n\nNumero do Professor que deseja: ";
    cin>>indexProfessor;
    } while (indexProfessor>professores.qtdProfessor());
    nomeProfessor=professores.getNomeProfessor(indexProfessor);
    do{
    disciplinas.disciplinasCadastradas();
    if(disciplinas.qtdDisciplinas()==0) {getch(); return;}
    cout<<"\n\nDisciplina: ";
    cin>>indexDisciplina;
    }while(indexDisciplina>disciplinas.qtdDisciplinas());
    disciplinas.adicionarProfessorDisciplina(nomeProfessor,indexDisciplina);
}