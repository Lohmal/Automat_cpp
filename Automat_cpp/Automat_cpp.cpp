#include <iostream>
#include <conio.h>
using namespace std;
int secim;
class Otomat
{
public:
	float popkekFiyat = 2, kolaFiyat = 3.75, suFiyat = 1.5;
	int popkekSay = 100, kolaSay = 100, suSay = 100;
	void Menu();
	void popkekVerme();
	void kolaVerme();
	void suVerme();
};
void Otomat::Menu()
{

	cout << "------------Urunler------------" << endl;
	cout << "1) Popkek" << endl;
	cout << "2) Kola" << endl;
	cout << "3) Su" << endl;
	cin >> secim;
}
void Otomat::popkekVerme()
{
	float odeme, fark;
	cout << "Popkek Fiyati: " << popkekFiyat << " lira." << endl;
	cout << "Odemeniz: ";
	cin >> odeme;
	if ((odeme >= popkekFiyat) && (popkekSay > 0))
	{
		cout << "Popkek veriliyor." << endl;
		popkekSay--;
		fark = odeme - popkekFiyat;
		if (fark >= 0)
		{
			cout << "Para Ustunuz: ";
			if (fark < 1.0)
			{
				cout << fark * 100 << " kurus" << endl;
			}
			else
			{
				cout << fark << " lira" << endl;
			}
			cout << "Otomatda kalan Popkek: " << popkekSay << endl;
		}

		else
		{
			cout << "Otomatta popkek mevcut degil";
		}
	}
}
void Otomat::kolaVerme()
{
	float odeme, fark;
	cout << "Kola Fiyati: " << kolaFiyat << " lira." << endl;
	cout << "Odemeniz: ";
	cin >> odeme;
	if ((odeme >= kolaFiyat) && (kolaSay > 0))
	{
		cout << "Kola veriliyor." << endl;
		kolaSay--;
		fark = odeme - kolaFiyat;
		if (fark >= 0)
		{
			cout << "Para Ustunuz: ";
			if (fark < 1.0)
			{
				cout << fark * 100 << " kurus" << endl;
			}
			else
			{
				cout << fark << " lira" << endl;
			}
			cout << "Otomatda kalan Kola: " << kolaSay << endl;
		}
		else
		{
			cout << "Otomatta kola mevcut degil";
		}
	}
}
void Otomat::suVerme()
{
	float odeme, fark;
	cout << "Su Fiyati: " << suFiyat << " lira." << endl;
	cout << "Odemeniz: ";
	cin >> odeme;
	if ((odeme >= suFiyat) && (suSay > 0))
	{
		cout << "Su veriliyor." << endl;
		suSay--;
		fark = odeme - suFiyat;
		if (fark >= 0)
		{
			cout << "Para Ustunuz: ";
			if (fark < 1.0)
			{
				cout << fark * 100 << " kurus" << endl;
			}
			else
			{
				cout << fark << " lira" << endl;
			}
			cout << "Otomatda kalan Su: " << suSay << endl;
		}
		else
		{
			cout << "Otomatta su mevcut degil";
		}
	}
}
int main()
{
	Otomat a;
	while (1)
	{
		a.Menu();
		switch (secim)
		{
		case 1:
			//popkek
			a.popkekVerme();
			break;
		case 2:
			//kola
			a.kolaVerme();
			break;
		case 3:
			//su
			a.suVerme();
			break;
		default:
			cout << "Hatali secim yaptiniz!!!" << endl;
			break;
		}
		_getch();
		system("cls");
		char x;
		cout << "Devam etmek istiyor musun? (y/n) : ";
		cin >> x;
		system("cls");
		if (x == 'n' || x == 'N')
		{
			break;
		}
	}
	return 0;
}
