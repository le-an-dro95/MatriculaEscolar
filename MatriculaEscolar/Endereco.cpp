#include "Endereco.h"
#include <string>
#include <iostream>

using namespace std;

Endereco::Endereco(const string &rua, const int &n, const string &bairro, const string &cidade, const string &estado)
{
    this->rua = rua;
    this->n = n;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
}

void Endereco::setEndereco(const string &rua, const int &n, const string &bairro, const string &cidade, const string &estado)
{
    this->rua = rua;
    this->n = n;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
}


Endereco::~Endereco()
{
}

void Endereco::getEndereco()
{
    cout<<"\nEndereco: \n";
    cout<<"Rua: "<<rua<<" n: "<<n<<"\n";
    cout<<"Bairro: "<<bairro<<"\n";
    cout<<"Cidade: "<<cidade<<"\n";
    cout<<"Estado: "<<estado<<"\n";
}
