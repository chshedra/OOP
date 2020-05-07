#include "Album.h"

void Album::SetAlbumTitle(string AlbumTitle)
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

Album::Album()
{
	//TODO: Для таких штук правильнее использовать делегирующие конструкции, чтобы сократить дублирование
	// должно выглядеть примерно так
	// Album::Album(): Album(" ", 0, nullptr) {}
	//
	// Тогда весь код из конструктора по-умолчанию можно убрать, а при
	// его вызове будет вызываться делегирующий конструктор с нужными параметрами
	this->SetAlbumTitle(" ");
	this->SetReleaseYear(0);
	this->SetSongs(nullptr);
}

Album::Album(string albumTitle, int releaseYear, Song* songs)
{
	this->SetAlbumTitle(albumTitle);
	this->SetReleaseYear(releaseYear);
	this->SetSongs(songs);
}

