#pragma once
#include "Album.h"

class Band
{
private:
	string _bandName;
	string _description;
	Album* _albums;
	int _countAlbum;

public:
	void SetBandName(string bandName);
	void SetDescription(string description);
	void SetAlbums(Album* albums);
	void SetCountAlbum(int countAlbum);

	int GetCountAlbum();

	Song* FindSong(string songTitle);
	Album* FindAlbum(Song* song);
	Song* GetAllSongs(Band* band, int& allSongsCount);

	Band();
	Band(string bandName, string description, Album* albums);
};

void DemoBand();