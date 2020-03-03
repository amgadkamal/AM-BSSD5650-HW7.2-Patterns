#ifndef songComponent_h
#define songComponent_h
#include<string>
#include<iostream>
#include <functional>

class SongComponent
{
public:
	virtual std::string getSongName() {
		std::bad_function_call bfc;
		throw(bfc);

	}


	virtual std::string getBandName() {
		std::bad_function_call bfc;
		throw(bfc);


	}


	virtual int getSongYear() {
		std::bad_function_call bfc;
		throw(bfc);

	};

	
	virtual void displaySongInfo() = 0;

	virtual void add(SongComponent* newComponent) {

		std::bad_function_call bfc;
		throw(bfc);

	}


	virtual void remove(SongComponent* newComponent) {

		std::bad_function_call bfc;
		throw(bfc);

	}
	virtual SongComponent* getSongComponent(int songIndex) {

		std::bad_function_call bfc;
		throw(bfc);

	}

};




#endif // !songComponent_h

