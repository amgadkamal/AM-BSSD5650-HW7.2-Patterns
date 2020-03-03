#pragma once
#ifndef Song_h
#define Song_h

#include"SongComponent.h"
#include<string>
#include<iostream>
class Song : public SongComponent
{

private:
	std::string songName;
	std::string bandName;
	int songYear;

public:
	Song(std::string name, std::string band, int year) {
		songName = name;
		bandName = band;
		songYear = year;
	}

	virtual std::string getSongName() { return songName; };
	virtual std::string getBandName() { return bandName; };
	virtual int getSongYear() { return songYear; };

	virtual void displaySongInfo() {
		std::cout << getSongName() << "by" << getBandName() << "in" << getSongYear() << std::endl;
	};

};




#endif // !Song_h
