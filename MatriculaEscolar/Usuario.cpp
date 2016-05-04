#include "Usuario.h"
#include <iostream>
#include <string>
#include <conio.h>
#include "Data.h"
#include "Endereco.h"

using namespace std;

Usuario::Usuario()
:dataNascimento(01,01,1900), dadosEndereco("Rua",0,"bairro","cidade","estado")
{
    this -> nome= "nome";
    this -> idade= 0;
    this -> genero= "genero";
}

Usuario::Usuario(const Usuario &p)
:dataNascimento(p.dataNascimento), dadosEndereco(p.dadosEndereco)
{
    this->nome = p.nome; 
    this->idade = p.idade;
    this->genero = p.genero;
}

Usuario::~Usuario()
{
}

ostream & operator<<(ostream &o, const Usuario &gente)
{
o <<"\nNome: "<<gente.nome<<".\n"<<"Idade: "<<gente.idade<<".\n"<<"Genero:  "<<gente.genero<<"\n";

return o;
}

bool Usuario::operator==(const Usuario &gente) const
{
    if (nome == gente.nome && idade == gente.idade && genero == gente.genero)
            return true;
    return false;
}

const Usuario &Usuario::operator=(const Usuario &gente)
{
    nome = gente.nome;
    genero = gente.genero;
    idade = gente.idade;
}

void Usuario::setDadosEndereco()
{   
    string rua, bairro, cidade, estado;
    int n;
    cout<<"Rua: ";
    cin>>rua;
    cout<<"Numero: ";
    cin>>n;
    cout<<"Bairro: ";
    cin>>bairro;
    cout<<"Cidade: ";
    cin>>cidade;
    cout<<"Estado: ";
    cin>>estado;
    dadosEndereco.setEndereco(rua,n,bairro,cidade,estado);
}

void Usuario::setDataNascimento()
{   
    int dia, mes, ano;
    do{
    cout<<"Data de Nascimento\n";   
    cout<<"Dia: ";
    cin>>dia;
    cout<<"Mes: ";
    cin>>mes;
    cout<<"Ano: ";
    cin>>ano;
    dataNascimento.setData(dia, mes, ano);
    }while(dataNascimento.getDia() == -9999);
}

void Usuario::setNome(const string &nome)
{
    this->nome = nome;
}


void Usuario::setIdade(int idade)
{
    this->idade = idade;
}

void Usuario::setGenero(const string &genero)
{
    this->genero = genero;   
}

string Usuario::getNome()
{
    return this->nome;
}
int Usuario::getIdade()
{
    return this->idade;
}
string Usuario::getGenero()
{
    return this->genero;
}

void Usuario::setDados()
{   
    system("cls");
    cout<<"Dados: \n";
    cout<<"Nome: "<<nome;
    cout<<"\nIdade: "<<idade;
    cout<<"\nData de nascimento: "<<dataNascimento.getDia()<<"/"
    <<dataNascimento.getMes()<<"/"<<dataNascimento.getAno();
    cout<<"\nGenero: "<<genero;
    dadosEndereco.getEndereco();
}

