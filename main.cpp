#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testeDominio.h"
#include "testeEntidade.h"


using namespace std;

int main(){

    cout<<"TESTES MANUAIS DAS CLASSES DE DOMÍNIO:\n"<<endl;

    Capacidade testeCapacidade;
    testeCapacidade.setValor(100);
    cout << testeCapacidade.getValor() << endl;

    Cargo testeCargo;
    testeCargo.setValor("ator");
    cout << testeCargo.getValor() << endl;

    Classificacao testeClassificao;
    testeClassificao.setValor("10");
    cout << testeClassificao.getValor() << endl;

    Codigo testeCodigo;
    testeCodigo.setValor("AA0000");
    cout << testeCodigo.getValor() << endl;

    Data testeData;
    testeData.setValor("29/02/2000");
    cout << testeData.getValor() << endl;

    Email testeEmail;
    testeEmail.setValor("juninhoPlay@unb.com");
    cout << testeEmail.getValor() << endl;

    Horario testeHorario;
    testeHorario.setValor("12:15");
    cout << testeHorario.getValor() << endl;

    Matricula testeMatricula;
    testeMatricula.setValor("10293");
    cout << testeMatricula.getValor() << endl;

    Nome testeNome;
    testeNome.setValor("Neymar JR");
    cout << testeNome.getValor() << endl;

    Senha testeSenha;
    testeSenha.setValor("OcTav1@!");
    cout << testeSenha.getValor() << endl;

    Telefone testeTelefone;
    testeTelefone.setValor("(61)-998713797");
    cout<< testeTelefone.getValor() << endl;

    Tipo testeTipo;
    testeTipo.setValor("ópera");
    cout << testeTipo.getValor() << endl;

    cout<<"\nTESTES UNITÁRIOS DAS CLASSES DOMÍNIO:\n"<<endl;

    TUCapacidade testeA;
    switch(testeA.run()){
        case TUCapacidade::SUCESSO: cout << "SUCESSO - CAPACIDADE" << endl;
                                break;
        case TUCapacidade::FALHA  : cout << "FALHA - CAPACIDADE" << endl;
                                break;
    }

    TUCargo testeB;
    switch(testeB.run()){
        case TUCargo::SUCESSO: cout << "SUCESSO - CARGO" << endl;
                                break;
        case TUCargo::FALHA  : cout << "FALHA - CARGO" << endl;
                                break;
    }

    TUClassificacao testeC;
    switch(testeC.run()){
        case TUClassificacao::SUCESSO: cout << "SUCESSO - CLASSIFICACAO" << endl;
                                break;
        case TUClassificacao::FALHA  : cout << "FALHA - CLASSIFICACAO" << endl;
                                break;
    }

    TUCodigo testeD;
    switch(testeD.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA - CODIGO" << endl;
                                break;
    }

    TUData testeE;
    switch(testeE.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA - DATA" << endl;
                                break;
    }

    TUEmail testeF;
    switch(testeF.run()){
        case TUEmail::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUEmail::FALHA  : cout << "FALHA - EMAIL" << endl;
                                break;
    }

    TUHorario testeG;
    switch(testeG.run()){
        case TUHorario::SUCESSO: cout << "SUCESSO - HORARIO" << endl;
                                break;
        case TUHorario::FALHA  : cout << "FALHA - HORARIO" << endl;
                                break;
    }

    TUMatricula testeH;
    switch(testeH.run()){
        case TUMatricula::SUCESSO: cout << "SUCESSO - MATRICULA" << endl;
                                break;
        case TUMatricula::FALHA  : cout << "FALHA - MATRICULA" << endl;
                                break;
    }

    TUNome testeI;
    switch(testeI.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA - NOME" << endl;
                                break;
    }

    TUSenha testeJ;
    switch(testeJ.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA - SENHA" << endl;
                                break;
    }

    TUTelefone testeK;
    switch(testeK.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE" << endl;
                                break;
        case TUTelefone::FALHA  : cout << "FALHA - TELEFONE" << endl;
                                break;
    }

    TUTipo testeL;
    switch(testeL.run()){
        case TUTipo::SUCESSO: cout << "SUCESSO - TIPO" << endl;
                                break;
        case TUTipo::FALHA  : cout << "FALHA - TIPO" << endl;
                                break;
    }

    cout<<"\nTESTES UNITÁRIOS DAS CLASSES ENTIDADES:\n"<<endl;

    TUParticipante testePa;
    switch(testePa.run()){
        case TUParticipante::SUCESSO: cout << "SUCESSO - Teste de unidade da entidade participante" << endl;
                                break;
        case TUParticipante::FALHA  : cout << "FALHA - Teste de unidade da entidade participante" << endl;
                                break;
    }

    TUPeca testePe;
    switch(testePe.run()){
        case TUPeca::SUCESSO: cout << "SUCESSO - Teste de unidade da entidade peça" << endl;
                                break;
        case TUPeca::FALHA  : cout << "FALHA - Teste de unidade da entidade peça" << endl;
                                break;
    }

    TUSessao testeSe;
    switch(testeSe.run()){
        case TUSessao::SUCESSO: cout << "SUCESSO - Teste de unidade da entidade sessão" << endl;
                                break;
        case TUSessao::FALHA  : cout << "FALHA - Teste de unidade da entidade sessão" << endl;
                                break;
    }

    TUSala testeSa;
    switch(testeSa.run()){
        case TUSala::SUCESSO: cout << "SUCESSO - Teste de unidade da entidade sala" << endl;
                                break;
        case TUSala::FALHA  : cout << "FALHA - Teste de unidade da entidade sala" << endl;
                                break;
    }
    return 0;

}
