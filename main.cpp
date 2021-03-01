#include "context.h"


int main(){
    Spotify spotify;
    YoutubeMusic youtubeMusic;
    Television television;
    Radio radio;

    Context contexto(&spotify);
    contexto.execute();

    /*
    int opcion = 1;
    while(opcion != 0){
        cout << "Ingrese una opcion de media a usar: /n
                "
    }*/
}