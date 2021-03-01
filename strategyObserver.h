#include <iostream>

using namespace std;

class StrategyObserver{
public:
    virtual void play() = 0;
    virtual void update() = 0;
};


// Clases de los media
class Spotify : public StrategyObserver{
public:
    virtual void play(){
        cout << "Spotify esta en ejecucion" << endl;
    }

    virtual void update(){
        cout << "Me notificaron de la ejecucion(Spotify)" << endl;   // Pendiente aun
    }
};

class YoutubeMusic : public StrategyObserver{
public:
    virtual void play(){
        cout << "YoutubeMusic esta en ejecucion" << endl;
    }

    virtual void update(){
        cout << "Me notificaron de la ejecucion(YoutubeMusica)" << endl;   // Pendiente aun
    }
};

class Television : public StrategyObserver{
public:
    virtual void play(){
        cout << "Television esta en ejecucion" << endl;
    }

    virtual void update(){
        cout << "Me notificaron de la ejecucion(Television)" << endl;   // Pendiente aun
    }
};

class Radio : public StrategyObserver{
public:
    virtual void play(){
        cout << "Radio esta en ejecucion" << endl;
    }

    virtual void update(){
        cout << "Me notificaron de la ejecucion(Radio)" << endl;   // Pendiente aun
    }
};