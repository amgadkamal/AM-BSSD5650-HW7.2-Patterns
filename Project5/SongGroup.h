#pragma once
#ifndef SongGroup_h
#define SongGroup_h
#include <vector>
#include"SongComponent.h"


class SongGroup : public SongComponent {


private:
	std::vector<SongComponent* > songComponents;

public:
	void displaySongInfo() {
		for (int i = 0; i < songComponents.size(); i++) {
			songComponents[i]->displaySongInfo();}	};

	void add(SongComponent* ele) {
		songComponents.push_back(ele);};

	void remove(int index) {
		songComponents.erase(songComponents.begin() + index);

	};


public:

	typedef enum {
		Metal
		, Industrial
		, Dubstep
		,Electronic
		, Speedcore
		, Extratone
	} Musictype;

	SongGroup(Musictype musictype) {
		musictype;
		switch (musictype) {

		case Metal:
			cout << "Metal music";
			break;

		case Industrial:
			cout << "Industrial music";
			break;
		case Dubstep:
			cout << "Dubstep music";
			break;
		case Extratone:
			cout << "Extratone music";
			break;

		}

	}
};



#endif // !
