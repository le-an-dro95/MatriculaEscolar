#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include "Data.h"
#include "Endereco.h"

class Usuario
{
friend ostream & operator<<(ostream&, const Usuario &);
public:    
    Usuario();
    Usuario(const Usuario &); 
    ~Usuario();
    void setNome(const string &);
    void setIdade(int);
    void setGenero(const string &);
    void setDataNascimento();
    void setDadosEndereco();
    void setDados();
    string getNome();
    int getIdade();
    string getGenero();   
    
    virtual void apresentarMenu()=0;
    virtual void logarNoSistema()=0;

    bool operator==(const Usuario &) const;
    const Usuario &operator=(const Usuario &);
    
private:    

    string nome;
    int idade;
    string genero; 

    Data dataNascimento;
    Endereco dadosEndereco;
};

#endif // USUARIO_H
