#include "testeDominio.h"

void TUCapacidade::setUp(){ // octavio - 190094087
    capacidade = new Capacidade();
    estado = SUCESSO;
}

void TUCapacidade::tearDown(){
    delete capacidade;
}

void TUCapacidade::testarCenarioSucesso(){
    try{
        capacidade->setValor(VALOR_VALIDO);
        if (capacidade->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCapacidade::testarCenarioFalha(){
    try{
        capacidade->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (capacidade->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCapacidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUCargo::setUp(){ // octavio - 190094087
    cargo = new Cargo();
    estado = SUCESSO;
}

void TUCargo::tearDown(){
    delete cargo;
}

void TUCargo::testarCenarioSucesso(){
    try{
        cargo->setValor(VALOR_VALIDO);
        if (cargo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCargo::testarCenarioFalha(){
    try{
        cargo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (cargo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCargo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUClassificacao::setUp(){ // octavio - 190094087
    classificacao = new Classificacao();
    estado = SUCESSO;
}

void TUClassificacao::tearDown(){
    delete classificacao;
}

void TUClassificacao::testarCenarioSucesso(){
    try{
        classificacao->setValor(VALOR_VALIDO);
        if (classificacao->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUClassificacao::testarCenarioFalha(){
    try{
        classificacao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (classificacao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUClassificacao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUCodigo::setUp(){ // Lorenzo - 200022610
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUData::setUp(){ // Lorenzo - 200022610
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUEmail::setUp(){ // Lorenzo - 200022610
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setValor(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUHorario::setUp(){ // Eder - 170140636
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown(){
    delete horario;
}

void TUHorario::testarCenarioSucesso(){
    try{
        horario->setValor(VALOR_VALIDO);
        if (horario->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha(){
    try{
        horario->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (horario->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUMatricula::setUp(){ // Eder - 170140636
    matricula = new Matricula();
    estado = SUCESSO;
}

void TUMatricula::tearDown(){
    delete matricula;
}

void TUMatricula::testarCenarioSucesso(){
    try{
        matricula->setValor(VALOR_VALIDO);
        if (matricula->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUMatricula::testarCenarioFalha(){
    try{
        matricula->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (matricula->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUMatricula::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUNome::setUp(){ // Lorenzo - 200022610
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUSenha::setUp(){ // octavio - 190094087
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUTelefone::setUp(){ // Lorenzo - 200022610
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setValor(VALOR_VALIDO);
        if (telefone->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (telefone->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUTipo::setUp(){ // Eder - 170140636
    tipo = new Tipo();
    estado = SUCESSO;
}

void TUTipo::tearDown(){
    delete tipo;
}

void TUTipo::testarCenarioSucesso(){
    try{
        tipo->setValor(VALOR_VALIDO);
        if (tipo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTipo::testarCenarioFalha(){
    try{
        tipo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (tipo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTipo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
