#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.h"

///
/// As classes das quais os atributos de entidade são instâncias, representam domínios.

/// Entidade Participante.

class Participante {
    private:
        Matricula matricula;
        Nome nome;
        Nome sobrenome;
        Email email;
        Telefone telefone;
        Senha senha;
        Cargo cargo;
    public:
        void setMatricula (const Matricula &valor);
///
/// @return Matícula.
///
        string getMatricula (void) const{
            return matricula.getValor();
        }
///
/// Atributo nome, no contexto da classe Participante, é instância da classe Nome.
///
        void setNome (const Nome &valor);
///
/// @return Nome.
///    
        string getNome (void) const{
            return nome.getValor();
        }
///
/// Atributo sobrenome, no contexto da classe Participante, é instância da classe Nome.
///
        void setSobrenome (const Nome &valor);
///
/// @return Sobrenome.
///
        string getSobrenome (void) const{
            return sobrenome.getValor();
        }
///
/// Atributo email, no contexto da classe Participante, é instância da classe Email.
///
        void setEmail (const Email &valor);
///
/// @return E-mail.
///
        string getEmail (void) const{
            return email.getValor();
        }
///
/// Atributo telefone, no contexto da classe Participante, é instância da classe Telefone.
///
        void setTelefone (const Telefone &valor);
///
/// @return Telefone.
///
        string getTelefone (void) const{
            return telefone.getValor();
        }
///
/// Atributo senha, no contexto da classe Participante, é instância da classe Senha.
///
        void setSenha (const Senha &valor);
///
/// @return Senha.
///
        string getSenha (void) const{
            return senha.getValor();
        }
///
/// Atributo cargo, no contexto da classe Participante, é instância da classe Cargo.
///
        void setCargo (const Cargo &valor);
///
/// @return Cargo.
///
        string getCargo (void) const{
            return cargo.getValor();
        }
};

inline void Participante::setMatricula(const Matricula &valor){
    this->matricula=valor;
}
inline void Participante::setNome(const Nome &valor){
    this->nome=valor;
}
inline void Participante::setEmail(const Email &valor){
    this->email=valor;
}
inline void Participante::setTelefone(const Telefone &valor){
    this->telefone=valor;
}
inline void Participante::setSenha(const Senha &valor){
    this->senha=valor;
}
inline void Participante::setCargo(const Cargo &valor){
    this->cargo=valor;
}

/// Entidade Peça.
class Peca {
    private:
        Codigo identificador;
        Nome nome;
        Tipo tipo;
        Classificacao classificacao;

    public:
///
/// Atributo código, no contexto da classe Peça, é instância da classe Código.
///
        void setIdcodigo(const Codigo &valor);
///
/// @return Identificador do código.
///
        string getIdcodigo(void) const{
            return identificador.getValor();
        }
///
/// Atributo nome, no contexto da classe Participante, é instância da classe Nome.
///
        void setNome(const Nome &valor);
///
/// @return Nome.
///  
        string getNome(void) const{
            return nome.getValor();
        }
///
/// Atributo tipo, no contexto da classe Peça, é instância da classe Tipo.
///      
        void setTipo(const Tipo &valor);
///
/// @return Tipo.
///  
        string getTipo(void) const{
            return tipo.getValor();
        }
///
/// Atributo classificacao, no contexto da classe Peça, é instância da classe Classificação.
///
        void setClassificacao(const Classificacao &valor);
///
/// @return Classificação.
///
        string getClassificacao(void) const{
            return classificacao.getValor();
        }
};

inline void Peca::setIdcodigo(const Codigo &valor){
    this->identificador=valor;
}
inline void Peca::setNome(const Nome &valor){
    this->nome=valor;
}
inline void Peca::setTipo(const Tipo &valor){
    this->tipo=valor;
}
inline void Peca::setClassificacao(const Classificacao &valor){
    this->classificacao=valor;
}

/// Entidade Sessão.
class Sessao {
    private:
        Codigo identificador;
        Data data;
        Horario horario;
    public:
///
/// Atributo indentificador, no contexto da classe Sessão, é instância da classe Código.
///
        void setIdcodigo(const Codigo &valor);
///
/// @return Identificador para código sessão.
///
        string getIdcodigo(void) const{
            return identificador.getValor();
        }
///
/// Atributo data, no contexto da classe Sessão, é instância da classe Data.
///
        void setData (const Data &valor);
///
/// @return Data.
///
        string getData(void) const{
            return data.getValor();
        }
///
/// Atributo horario, no contexto da classe Sessão, é instância da classe Horário.
///
        void setHorario (const Horario &valor);
///
/// @return Horário.
///
        string getHorario(void) const{
            return horario.getValor();
        }
};

inline void Sessao::setIdcodigo(const Codigo &valor){
    this->identificador=valor;
}
inline void Sessao::setData(const Data &valor){
    this->data=valor;
}
inline void Sessao::setHorario(const Horario &valor){
    this->horario=valor;
}

/// Entidade Sala.
class Sala {
    private:
        Codigo identificador;
        Nome nome;
        Capacidade capacidade;
    public:
///
/// Atributo codigo, no contexto da classe Sala, é instância da classe Codigo.
///
        void setIdcodigo(const Codigo &valor);
///
/// @return Identificador do código sala.
///
        string getIdcodigo(void) const{
            return identificador.getValor();
        }
///
/// Atributo nome, no contexto da classe Sala, é instância da classe Nome.
///
        void setNome(const Nome &valor);
///
/// @return Nome.
///
        string getNome(void) const{
            return nome.getValor();
        }
///
/// Atributo capacidade, no contexto da classe Sala, é instância da classe Capacidade.
///
        void setCapacidade(const Capacidade &valor);
///
/// @return Capacidade.
///
        float getCapacidade(void) const{
            return capacidade.getValor();
        }

};

inline void Sala::setIdcodigo(const Codigo &valor){
    this->identificador=valor;
}
inline void Sala::setNome(const Nome &valor){
    this->nome=valor;
}
inline void Sala::setCapacidade(const Capacidade &valor){
    this->capacidade=valor;
}

#endif  // ENTIDADES_H_INCLUDED
