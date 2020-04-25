#pragma once
#include <iostream>
#include "SongGenre.h"
using namespace std;

class Song
{
private:
	string _songTitle;
	double _songTiming;
	SongGenre _genre;
	
public:
	void SetSongTitle(string songTitle);

	void SetSongTiming(double songTiming);

	void SetGenre(SongGenre genre);

	double GetTiming();

	string GetSongTitle();

	SongGenre GetSongGenre();

	Song();

	Song(string songTitle, double songTiming, SongGenre genre);
};

void WriteSongGenre(SongGenre genre);
