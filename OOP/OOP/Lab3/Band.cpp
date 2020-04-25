#include "Band.h"
#include <string>

void Band::SetBandName(string bandName)
{
	this->_bandName = bandName;
}

void Band::SetDescription(string description)
{
	this->_description = description;
}

void Band::SetAlbums(Album* albums)
{
	this->_albums = albums;
}

void Band::SetCountAlbum(int countAlbum)
{
	this->_countAlbum = countAlbum;
}

int Band::GetCountAlbum()
{
	return this->_countAlbum;
}

Band::Band()
{
	this->SetBandName(" ");
	this->SetDescription(" ");
	this->SetAlbums(nullptr);
}

Band::Band(string bandName, string description, Album* albums)
{
	this->SetBandName(bandName);
	this->SetDescription(description);
	this->SetAlbums(albums);
}

Song* Band::FindSong(string songTitle)
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

Song* Band::GetAllSongs(Band* band, int& allSongsCount)
{
	if (band == nullptr)
	{
		return nullptr;
	}

	allSongsCount = 0;
	for (int i = 0; i < this->GetCountAlbum(); i++)//подсчет всех песен
	{
		allSongsCount += this->_albums->GetCountSongs();
	}

	Song* allSongs = new Song[allSongsCount];
	for (int i = 0; i < this->GetCountAlbum(); i++)//копирование значений в одномерный массив
	{
		for (int j = 0; j < this->_albums->GetCountSongs(); j++)
		{
			allSongs[i * this->_albums->GetCountSongs() + j] =  
				this->_albums[i].GetSongs()[j];
		}
	}

	return allSongs;
}

void DemoBand()
{
	const int countAlbum = 3;
	const int countSong = 4;
	Song** songs = new Song*[countAlbum];
	// двумерный массив песен, i-кол-во альбомов, j-кол-во песен в i-том альбоме
	for (int i = 0; i < countAlbum; i++)
	{
		songs[i] = new Song[countSong];
		for (int j = 0; j < countSong; j++)
		{	
			string writeI = std::to_string(i + 1);
			string writeJ = std::to_string(j + 1);
			songs[i][j].SetSongTitle("song" + writeI+ writeJ);
			songs[i][j].SetSongTiming(1.5 + j);
			songs[i][j].SetGenre(Rock);
		}
	}

	Album* albums = new Album[countAlbum];
	albums->SetCountSongs(countSong);
	for (int i = 0; i < countAlbum; i++)
	{
		string writeI = std::to_string(i + 1);
		albums[i].SetAlbumTitle("Album №" + writeI);
		albums[i].SetReleaseYear(2010 + i);
		albums[i].SetSongs(songs[i]);
	}
	
	Band* band = new Band;
	band->SetBandName("LinkinPark");
	band->SetDescription("LinkinPark - description");
	band->SetAlbums(albums);
	band->SetCountAlbum(countAlbum);

	cout << "Введите название искомой песни: ";
	string songTitle;
	cin >> songTitle;
	Song* findedSong = band->FindSong(songTitle);
	if (findedSong)
	{
		cout << findedSong->GetSongTitle() << " time:"
			<< findedSong->GetTiming() << " minutes; genre:";
		WriteSongGenre(findedSong->GetSongGenre());
		cout << endl;
	}
	else
	{
		cout << "Песня с таким названием не найдена" << endl;
	}

	Album* findedAlbum = band->FindAlbum(findedSong);
	if (findedAlbum)
	{
		cout << findedAlbum->GetAlbumTitle() << " ("
			<< findedAlbum->GetReleaseYear() << ")" << endl;
	}
	else
	{
		cout << "Альбом с данной песней  не найден";
	}

	int countAllSongs = 0;
	Song* allSongs = band->GetAllSongs(band, countAllSongs);
	for (int i = 0; i < countAllSongs; i++)
	{
		cout << allSongs[i].GetSongTitle() << endl;
	}

	delete[] songs;
	delete[] allSongs;
}