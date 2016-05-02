#include "AlunoGraduado.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int AlunoGraduado::indexAluno=0;

AlunoGraduado::AlunoGraduado()
{
}

AlunoGraduado::~AlunoGraduado()
{
}


void AlunoGraduado::apresentarMenu()
{
    /*system("cls");
    if (alunos.qtdAlunos()==0) {cout<<"\n\n Nenhum Aluno Cadastrado"; getch(); return;}
    int resp;
    int op;
    cout<<"Numero de Registro: ";
    cin>>indexAluno;
    */
    int resp;
    do{
    resp=99;
    system("cls");
    int op;
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Visualizar Historico Escolar \n 2 - Registro de Diploma \n"
    <<" 3 - 2a Via de Diploma \n 4 - Gerar Atestado de Finalizacao de Graduacao \n 5 - SAIR \n";
    cin>>op;
    switch(op)
    {
        case 1: {visualizarHistoricoEscolar(); break;}
        case 2: {solicitarRegistroDiploma(); break;}
        case 3: {solicitarSegundaViaDiploma(); break;}
        case 4: {gerarAtestadoFinalizacaoGraduacao(); break;}
        case 5: {resp=0; break;}
        default: {resp=0; break;}
    }
    }while (resp != 0);

}

void AlunoGraduado::visualizarHistoricoEscolar()
{
    system("cls");
    cout<<"\n Historico Escolar \n\n";
    getch();
}

void AlunoGraduado::solicitarRegistroDiploma()
{
    system("cls");
    cout<<"\n Como realizar o Registro de Diploma \n\n"
    <<"A obtencao do registro depende do cumprimento das exigencias legais e mediante a apresentacao dos seguintes documentos:\n"
    <<"1. Portaria de Credenciamento da IES;\n"
    <<"2. Portaria de Autorizacao do Curso;\n"
    <<"3. Portaria de Reconhecimento do Curso ( Obs: Caso o processo de reconhecimento ainda nao esteja concluido o numero do processo de entrada no MEC e a folha de acompanhamento do referido processo).\n"
    <<"4. Estrutura Curricular.\n"
    <<"5. Relacao dos concluintes por curso.\n"
    <<"6. Diplomas e Historicos da Graduacao devidamente assinados e registrados pela IES de origem.\n"
    <<"7. Relacao do ENADE (Se o Curso tiver sido avaliado no periodo da integralizacao do aluno).\n"
    <<"8. Documentos Pessoais de identificação dos alunos concluintes, juntamente com o certificado de conclusao do Ensino Medio.\n"
    <<"9. Comprovante de pagamento da taxa de 67,33 reais. As informacoes da conta corrente para o deposito serao prestadas no ato da solicitacao no CIAC;\n"
    <<"10. Oficio de Encaminhamento da documentacao acima referida\n";
    getch();
}

void AlunoGraduado::solicitarSegundaViaDiploma()
{
    system("cls");
    cout<<"\n Como solicitar a segunda Via de Diploma \n\n"
    <<"DOCUMENTOS NECESSARIOS:\n\n"
    <<"- Comprovante de pagamento da taxa de 173,87 reais. As informacoes da conta corrente para o deposito serao dadas no ato da solicitacao no CIAC;\n"
    <<"- Anexar copia legivel da carteira de identidade;\n"
    <<"- Anexar copia legivel do CPF;\n"
    <<"- Quando o Diploma Original estiver danificado ou rasgado (apresentar o diploma original e justificativa);\n"
    <<"- Quando tratar-se de Perda ou Roubo (apresentar Boletim de Ocorrencia Policial);\n"
    <<"- Anexar copia legivel do diploma (frente e verso), se tiver. Na impossibilidade, informar a data de colacao de grau, nunca grampear o diploma original no requerimento.\n"
    <<"- Prazo de Entrega: 45 a 90 dias (uteis).\n\n"
    <<"OBS: Sera admitido requerimento por terceiros, mediante procuracao simples acompanhada de copia legivel de documento de identidade do requerente. Esses documentos ficarao retidos;\n"
    <<"Para mais informações ligue 3201-7158 ou 3201-7339.";
    getch();
}

void AlunoGraduado::gerarAtestadoFinalizacaoGraduacao()
{
    system("cls");
    cout<<"\n Gerar Atestado de Finalizacao de Graduacao \n\n";
    cout<<"";
    getch();
}