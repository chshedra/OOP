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

void Album::SetSongs(Song* songs)
{
	this->_songs = songs;
}

void Album::SetCountSongs(int countSongs)
{
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

//TODO:+ Не правильно сделано, сейчас все параметры передаются напрямую в поля, без всяких проверок в методах-сетерах
//TODO: +это может привести к нарушению логики использования класса.
Album::Album() : _albumTitle(" "), _releaseYear(0), 
	_songs(nullptr), _countSongs(0) {}

Album::Album(const string& albumTitle, int releaseYear, Song* songs)
{
	this->SetAlbumTitle(albumTitle);
	this->SetReleaseYear(releaseYear);
	this->SetSongs(songs);
}

