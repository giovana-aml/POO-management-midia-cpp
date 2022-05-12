#ifndef Midia_HPP // Lembra disso
#define Midia_HPP

#include <iostream>
#include <vector>

using namespace std;

class Midia
{

  string titulo;
  vector<string> artistas;
  int data;
  int duracao;
  vector<string> keywords;
  int numeroAcessos;

public:
  Midia()
  {
    vector<string> artistas;
    vector<string> keywords;
    setTitulo(".");
    setArtistas(artistas);
    setData(0);
    setDuracao(0);
    setKeywords(keywords);
    setNumeroAcessos(0);
  }

  Midia(string titulo, vector<string> artistas, int data, int duracao, vector<string> keywords, int numeroAcessos)
  {
    setTitulo(titulo);
    setArtistas(artistas);
    setData(data);
    setDuracao(duracao);
    setKeywords(keywords);
    setNumeroAcessos(numeroAcessos);
  }

  void setTitulo(string titulo)
  {
    this->titulo = titulo; // O this é importante para acessar o membro da classe
  }
  string getTitulo()
  {
    return this->titulo; // Lembra disso
  }

  void setArtistas(vector<string> artistas)
  {
    artistas = artistas;
  }
  vector<string> getArtistas()
  {
    return artistas;
  }

  void setData(int data)
  {
    data = data;
  }
  int getData()
  {
    return data;
  }

  void setDuracao(int duracao)
  {
    duracao = duracao;
  }
  int getDuracao()
  {
    return duracao;
  }

  void setKeywords(vector<string> keywords)
  {
    keywords = keywords;
  }
  vector<string> getKeywords()
  {
    return keywords;
  }

  void setNumeroAcessos(int numeroAcessos)
  {
    numeroAcessos = numeroAcessos;
  }
  int getNumeroAcessos()
  {
    return numeroAcessos;
  }
  void incrementNumeroAcessos(int numeroAcessos)
  {
    int atualNumeroAcessos = getNumeroAcessos() + 1;
  }
};

#endif