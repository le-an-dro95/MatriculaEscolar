#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
public:
    
    Endereco(const string &, const int &, const string &, const string &, const string &);
    ~Endereco();
    void setEndereco(const string &rua, const int &n, const string &bairro, const string &cidade, const string &estado);
    void getEndereco();
    
private:
    int n;
    string rua;
    string bairro;
    string cidade;
    string estado;
};

#endif // ENDERECO_H
