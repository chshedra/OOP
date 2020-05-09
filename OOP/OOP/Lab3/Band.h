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
	//TODO:+ ������ �� ������?
	void SetBandName(const string &bandName);
	void SetDescription(const string &description);
	void SetAlbums(Album* albums);
	void SetCountAlbum(int countAlbum);

	int GetCountAlbum();

	//TODO: +������ �� ������?
	Song* FindSong(string &songTitle);
	Album* FindAlbum(Song* song);
	Song* GetAllSongs(Band* band, int &allSongsCount);
	void CountAllSongs(int &countAllSongs);
	void CopyAllSongs(Song* allSongs);
	
	Band();	
	Band(string bandName, string description, Album* albums);
};

void DemoBand();