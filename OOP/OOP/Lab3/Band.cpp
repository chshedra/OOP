#include "Band.h"
#include <string>

void Band::SetBandName(const string &bandName)
{
	this->_bandName = bandName;
}

void Band::SetDescription(const string &description)
{
	this->_description = description;
}

void Band::SetAlbums(Album* albums, int countAlbum)
{
	this->_albums = albums;
	if (countAlbum < 0)
	{
		throw("Значение массива альбомов не может быть отрицательным");
	}
	this->_countAlbum = countAlbum;
}



int Band::GetCountAlbum()
{
	return this->_countAlbum;
}

Album* Band::GetAlbums()
{
	return this->_albums;
}

Band::Band() : Band(" ", " ", nullptr, 0) {}

Band::Band(const string &bandName, string description, Album* albums, int countAlbum)
{
	this->SetBandName(bandName);
	this->SetDescription(description);
	this->SetAlbums(albums, countAlbum);
}


Song* Band::FindSong(string &songTitle)
{
	for (int i = 0; i < this->GetCountAlbum(); i++)
	{
		for (int j= 0; j < this->_albums->GetCountSongs(); j++)
		{
			if (this->_albums[i].GetSongs()[j].GetSongTitle() == songTitle)
			{
				return &this->_albums[i].GetSongs()[j];
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum (Song* song) 
{
	if (song == nullptr)
	{
		return nullptr;
	}
	for (int i = 0; i < this->GetCountAlbum(); i++)
	{
		for (int j = 0; j < this->_albums->GetCountSongs(); j++)
		{
			if (&this->_albums[i].GetSongs()[j] == song) 
			{
				return &this->_albums[i];
			}
		}
	}
	return nullptr;
}

void Band::CountAllSongs(int &countAllSongs)
{
	countAllSongs = 0;
	for (int i = 0; i < this->GetCountAlbum(); i++)
	{
		countAllSongs += this->_albums->GetCountSongs();
	}
}

void Band::CopyAllSongs(Song* allSongs)
{
	for (int i = 0; i < this->GetCountAlbum(); i++)
	{
		for (int j = 0; j < this->_albums->GetCountSongs(); j++)
		{
			allSongs[i * this->_albums->GetCountSongs() + j] =
				this->_albums[i].GetSongs()[j];
		}
	}
}

Song* Band::GetAllSongs(Band* band, int& allSongsCount)
{
	if (band == nullptr)
	{
		return nullptr;
	}	
	CountAllSongs(allSongsCount);

	Song* allSongs = new Song[allSongsCount];
	CopyAllSongs(allSongs);

	return allSongs;
}

