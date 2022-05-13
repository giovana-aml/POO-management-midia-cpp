#ifndef Musica_HPP
#define Musica_HPP

#include <iostream>
#include <vector>
#include "midia.hpp"

using namespace std;

enum FormatoDeAudio
{
  mp3,
  AAC,
  OGG, 
  WMA

};

enum GeneroDeMusica
{
  Rock,
  Heavy_Metal,
  Eletronica,
  Blues,
  Jazz,
  Pop,
  Samba

};

class Musica : public Midia
{
  vector<FormatoDeAudio> formatoAudio;
  vector<GeneroDeMusica> generoMusica;

public:
  Musica(vector<FormatoDeAudio> formatoAudio, vector<GeneroDeMusica> generoMusica)
  {
    setFormatoDeAudio(formatoAudio);
    setGeneroDeMusica(generoMusica);
  }

  Musica(vector<FormatoDeAudio> formatoAudio, vector<GeneroDeMusica> generoMusica,
         string titulo, vector<string> artistas, int data, int duracao, vector<string> keywords, int numeroAcessos) : Midia(titulo, artistas, data, duracao, keywords, numeroAcessos)
  {
    setFormatoDeAudio(formatoAudio);
    setGeneroDeMusica(generoMusica);
  }

  void setFormatoDeAudio(vector<FormatoDeAudio> formatoAudio)
  {
    formatoAudio = formatoAudio;
  }
  vector<FormatoDeAudio> getFormatoDeAudio()
  {
    return formatoAudio;
  }

  void setGeneroDeMusica(vector<GeneroDeMusica> generoMusica)
  {
    generoMusica = generoMusica;
  }
  vector<GeneroDeMusica> getGeneroDeMusica()
  {
    return generoMusica;
  }

  void print()
  {
    cout << "Titulo: " << getTitulo() << endl
         << "Genero: ";
    for (size_t i = 0; i < generoMusica.size(); i++)
    {
      cout << generoMusica[i] << ", ";
    }
    cout << endl;
  }
};

#endif
