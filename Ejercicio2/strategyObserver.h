#include <iostream>
using namespace std;

class StrategyObserver{	
public:
    virtual void play() = 0;
    virtual void update(int pState) = 0;
};


// Clases de los media
class Television : public StrategyObserver{
public:
    virtual void play(){
        cout << endl << "~~~Television esta en ejecucion" << endl;
    }

    virtual void update(int pState){
    	if (pState != 1){
    		cout << "Television detecto un media, Television apagado" << endl;
		}
    }
};

class Radio : public StrategyObserver{
public:
    virtual void play(){
        cout << endl << "~~~Radio esta en ejecucion" << endl;
    }

    virtual void update(int pState){
    	if (pState != 2){
    		cout << "Radio detecto un media, Radio apagado" << endl;
		}
    }
};

class Spotify : public StrategyObserver{
	
public:
    virtual void play(){
        cout << endl << "~~~Spotify esta en ejecucion" << endl;
    }

    virtual void update(int pState){
    	if (pState != 3){
    		cout << "Spotify detecto un media, Spotify apagado" << endl;
		}
    }
};

class YoutubeMusic : public StrategyObserver{
public:
    virtual void play(){
        cout << endl << "~~~YoutubeMusic esta en ejecucion" << endl;
    }

    virtual void update(int pState){
    	if (pState != 4){
    		cout << "YoutubeMusic detecto un media, YoutubeMusic apagado" << endl;
		}
    }
};
