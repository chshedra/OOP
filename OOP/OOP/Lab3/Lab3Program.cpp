#include "Lab3Program.h"



void Lab3Program::DemoBook()
{
	const int size = 1;
	Book books[size];
	for (int i = 0; i < size; i++)
	{
		ReadBookFromConsole(books[i]);
	}
	for (int i = 0; i < size; i++)
	{
		WriteBookToConsole(books[i]);
	}

	cout << "Введите автора для поиска книги: ";
	string author;
	cin >> author;
	int index = FindBookByAuthor(books, size, author);
	if (index == -1)
	{
		cout << "Книга не найдена" << endl;
	}
	else
	{
		WriteBookToConsole(books[index]);
	}
}

void Lab3Program::DemoFlightWithTime()
{
	const int size = 5;
	Flight* flights = new Flight[size];

	for (int i = 0; i < size; i++)
	{
		string writeI = std::to_string(i);
		flights[i].SetFlightNumber("S105" + writeI);
		flights[i].SetDeparturePoint("Moscow" + writeI);
		flights[i].SetDestination("Tomsk" + writeI);
		Time departureTime(2020, 1 + i, 10 + i, 12 + i, 30 + i);
		flights[i].SetDepartureTime(&departureTime);
		Time arriveTime(2020, 1 + i, 10 + i, 16 + i, 59 - i);
		flights[i].SetArriveTime(&arriveTime);
	}

	for (int i = 0; i < size; i++)
	{
		cout << flights[i] << endl;
	}
}

void Lab3Program::DemoRoute()
{
	const int size = 3;
	Route routes[size];

	cin.ignore(); // игнорируется /n
	for (int i = 0; i < size; i++)
	{
		ReadRouteFromConsole(routes[i]);
	}
	for (int i = 0; i < size; i++)
	{
		WriteRouteToConsole(routes[i]);
	}
	cout << "Введите остановку для поиска маршрута: ";
	string author;
	cin >> author;
	int index = FindRouteByStop(routes, size, author);
	if (index == -1)
	{
		cout << "Маршрут не найден" << endl;
	}
	else
	{
		WriteRouteToConsole(routes[index]);
	}
}

void Lab3Program::DemoBand()
{
	const int countAlbum = 3;
	const int countSong = 4;
	Song** songs = new Song * [countAlbum];

	for (int albumAmount = 0; albumAmount < countAlbum; albumAmount++)
	{
		songs[albumAmount] = new Song[countSong];
		for (int songAmount = 0; songAmount < countSong; songAmount++)
		{
			string writeI = std::to_string(albumAmount + 1);
			string writeJ = std::to_string(songAmount + 1);
			songs[albumAmount][songAmount].SetSongTitle("song" + writeI + writeJ);
			songs[albumAmount][songAmount].SetSongTiming(1.5 + songAmount);
			songs[albumAmount][songAmount].SetGenre(Rock);
		}
	}

	Album* albums = new Album[countAlbum];

	for (int i = 0; i < countAlbum; i++)
	{
		string writeI = std::to_string(i + 1);
		albums[i].SetAlbumTitle("Album №" + writeI);
		albums[i].SetReleaseYear(2010 + i);
		albums[i].SetSongs(songs[i], countSong);
	}

	Band* band = new Band;
	band->SetBandName("LinkinPark");
	band->SetDescription("LinkinPark - description");
	band->SetAlbums(albums, countAlbum);


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

void Lab3Program::DemoRectangleWithPoint()
{
	try
	{
		const int size = 5;
		Rectangle* rectangles = new Rectangle[size];

		for (int i = 0; i < size; i++)
		{
			rectangles[i].SetCenter(1.2 * i, 2.4 * i);
			rectangles[i].SetLength(2.5 * i);
			rectangles[i].SetWidth(3.4 * i);
		}

		for (int i = 0; i < size; i++)
		{
			cout << "X:" << rectangles[i].GetX() << "; "
				<< "Y:" << rectangles[i].GetY() << "; "
				<< "Length:" << rectangles[i].GetLength() << "; "
				<< "Width:" << rectangles[i].GetWidth() << endl;
		}

		double averageCenterX = 0;
		double averageCenterY = 0;
		for (int i = 0; i < size; i++)
		{
			averageCenterX += rectangles[i].GetX();
			averageCenterY += rectangles[i].GetY();
		}

		cout << "Xcenter = " << averageCenterX / size
			<< " ; Ycenter = " << averageCenterY / size << endl;
	}
	catch (DoubleValidator::NegativeValue)
	{
		cout << "Длина и ширина должны иметь полоительные значения" << endl;
	}
}

void Lab3Program::Lab3Menu()
{
	while (true)
	{
		cout << "1.DemoBook" << endl
			<< "2.DemoRoute" << endl
			<< "3.DemoRectangleWithPoint" << endl
			<< "4.DemoFlightWithTime" << endl
			<< "5.DemoBand" << endl
			<< "6. Выход" << endl;
		int choice = InputValidation();
		switch (choice)
			{
			case 1:
			{
				DemoBook();
				break;
			}
			case 2:
			{
				DemoRoute();
				break;
			}
			case 3:
			{
				DemoRectangleWithPoint();
				break;
			}
			case 4:
			{
				DemoFlightWithTime();
				break;
			}
			case 5:
			{
				DemoBand();
				break;
			}
			case 6:
			{
				return;
			}
			default:
			{
				cout << "Выберите правильный пункт меню!" << endl;
			}
		}
	}
}

