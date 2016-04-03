#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data(int=01, int=01, int=1900);
    Data(const Data &novaData);
    ~Data();
    
    void printData () const;
    void setData(int, int, int);
    int getDia();
    int getMes();
    int getAno();
  
 
private:   
    int dia;
    int mes;
    int ano;
    
    int checarDia(int) const;
};

#endif // DATA_H