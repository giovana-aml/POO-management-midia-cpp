#include <iostream>
#include <vector>

using namespace std;

enum FormatoDeAudio
{

};

enum GeneroDeMusica
{

};

class Musica
{
  vector<FormatoDeAudio> formatoAudio;
  vector<GeneroDeMusica> generoMusica;

public:
  Musica(vector<FormatoDeAudio> formatoAudio, vector<GeneroDeMusica> generoMusica)
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
};