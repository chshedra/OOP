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

Album* Band::GetAlbums()
{
	return this->_albums;
}

//TODO: +Не правильно сделано, сейчас все параметры передаются напрямую в поля, без всяких проверок в методах-сетерах
//TODO: +это может привести к нарушению логики использования класса.
Band::Band() : _bandName(" "), _description(" "),
	_albums(nullptr), _countAlbum(0) {}

Band::Band(string bandName, string description, Album* albums)
{
	this->SetBandName(bandName);
	this->SetDescription(description);
	this->SetAlbums(albums);
	this->SetCountAlbum(0);
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

void DemoBand()
{
	const int countAlbum = 3;
	const int countSong = 4;
	Song** songs = new Song*[countAlbum];

	for (int albumAmount = 0; albumAmount < countAlbum; albumAmount++)
	{
		songs[albumAmount] = new Song[countSong];
		for (int songAmount = 0; songAmount < countSong; songAmount++)
		{	
			string writeI = std::to_string(albumAmount + 1);
			string writeJ = std::to_string(songAmount + 1);
			songs[albumAmount][songAmount].SetSongTitle("song" + writeI+ writeJ);
			songs[albumAmount][songAmount].SetSongTiming(1.5 + songAmount);
			songs[albumAmount][songAmount].SetGenre(Rock);
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


	cout << "Имеющиеся песни: " << endl;
	for (int i = 0; i < band->GetCountAlbum(); i++)
	{
		for (int j = 0; j < band->GetAlbums()->GetCountSongs(); j++)
		{
			cout << band->GetAlbums()[i].GetSongs()[j].GetSongTitle()
				<< " ";
		}
		cout << endl;
	}

	cout << "Введите название искомой песни : ";
	string songTitle;
	cin >> songTitle;
	Song* findedSong = band->FindSong(songTitle);
	if (findedSong)
	{
		cout << *findedSong << endl;
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
		cout << "Альбом с данной песней  не найден" << endl;
	}

	int countAllSongs = 0;
	Song* allSongs = band->GetAllSongs(band, countAllSongs);

	delete[] songs;
	delete[] allSongs;
}