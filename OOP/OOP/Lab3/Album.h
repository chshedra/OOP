#pragma once
#include "Song.h"


class Album
{
private:
	string _albumTitle;
	int _releaseYear;
	Song* _songs;
	int _countSongs;

public:
	void SetAlbumTitle(const string &albumTitle);
	void SetReleaseYear(int releaseYear);
	void SetSongs(Song* songs);
	void SetCountSongs(int countSongs);

	int GetCountSongs();
	string GetAlbumTitle();
	int GetReleaseYear();
	Song* GetSongs();

	Album();
	Album(const string &albumTitle, int releaseYear, Song* songs);
};