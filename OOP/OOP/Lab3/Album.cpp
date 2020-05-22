#include "Album.h"

void Album::SetAlbumTitle(const string &AlbumTitle)
{
	this->_albumTitle = AlbumTitle;
}

void Album::SetReleaseYear(int releaseYear)
{
	if (releaseYear < 0)
	{
		throw("Год выпуска альбома не может быть отрицательным");
	}
	this->_releaseYear = releaseYear;
}

void Album::SetSongs(Song* songs, int countSongs)
{
	this->_songs = songs;
	if (countSongs < 0)
	{
		throw("Размер массива песен не может быть отрицательным");
	}
	this->_countSongs = countSongs;
}


int Album::GetCountSongs()
{
	return this->_countSongs;
}

string Album::GetAlbumTitle()
{
	return this->_albumTitle;
}

int Album::GetReleaseYear()
{
	return this->_releaseYear;
}

Song* Album::GetSongs()
{
	return this->_songs;
}

Album::Album() : Album(" ", 0, nullptr, 0) {}

Album::Album(const string& albumTitle, int releaseYear, Song* songs, int countSongs)
{
	this->SetAlbumTitle(albumTitle);
	this->SetReleaseYear(releaseYear);
	this->SetSongs(songs, countSongs);
}

