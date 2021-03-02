#include "context.h"
using namespace std;

void menu(Subject subject, Television television, Radio radio, Spotify spotify, YoutubeMusic youtubeMusic){
	int option = 0;
	bool on = true;
	Context context(&television);
	
	while (on){
		cout << "=== Media Selector ===" << endl;
		cout << "1. Television" << endl;
		cout << "2. Radio" << endl;
		cout << "3. Spotify" << endl;
		cout << "4. Youtube Music" << endl;
		cout << "5. Salir" << endl;
		cout << "Que media desea usar?: ";
		cin >> option;
		cout << endl;
		
		switch(option){
			case 1:
				subject.setState(1);
				context.setStrategy(&television);
				context.execute();
				break;
			case 2:
				subject.setState(2);
				context.setStrategy(&radio);
				context.execute();
				break;
			case 3:
				subject.setState(3);
				context.setStrategy(&spotify);
				context.execute();
				break;
			case 4:
				subject.setState(4);
				context.setStrategy(&youtubeMusic);
				context.execute();
				break;
			case 5:
				on = false;
				break;
			default:
				cout << "Esa opcion no esta disponible" << endl;
		}
		
		cout << endl;
	}
}


int main(){
	Subject subject;
	
	Television television;
	Radio radio;
    Spotify spotify;
    YoutubeMusic youtubeMusic;
    
    subject.attach(&television);
    subject.attach(&radio); 
    subject.attach(&spotify); 
    subject.attach(&youtubeMusic); 
    
    menu(subject, television, radio, spotify, youtubeMusic);

    return 0;
}
