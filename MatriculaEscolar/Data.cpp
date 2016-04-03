#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(int dia, int mes, int ano)
{
    this->mes = mes;
    this->ano = ano;     
    this->dia = checarDia(dia);
}

Data::Data(const Data &novaData)
{
    this->mes = novaData.mes;
    this->ano = novaData.ano;
    this->dia = novaData.dia;
}

Data::~Data()
{
}

void Data::setData(int dia, int mes, int ano)
{
    this->mes = mes;
    this->ano = ano;
    this->dia = checarDia(dia);
}

int Data::getDia()
{
    return this->dia;
}

int Data::getMes()
{
    return this->mes;
}

int Data::getAno()
{
    return this->ano;
}

int Data::checarDia(int dia) const
{
    static const int diasPorMes[13] = {0, 31, 28, 31, 30, 30, 31, 31, 30, 31, 30, 31};
    
    if(dia > 0 && dia <= diasPorMes[mes])
        return dia;
    
    if (mes == 2 && dia == 29 && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
        return dia;
    
    cout << "\nDia invalido\n";
    cout << "Digite novamente: \n\n";
    return dia=-9999;
}