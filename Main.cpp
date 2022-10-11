#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <time.h>

using namespace std;
#define Green SetConsoleTextAttribute(h, 2)
#define Blue SetConsoleTextAttribute(h, 1)
#define White SetConsoleTextAttribute(h, 7)
#define Red SetConsoleTextAttribute(h, 4)
#define Yellow SetConsoleTextAttribute(h, 6)
#define Pink SetConsoleTextAttribute(h, 5)
#define Cyan SetConsoleTextAttribute(h, 3)
/*----------------------------------------------------------------------------------
	 Programmer:  Khoa Nguyen
	 Date:  11/2/2021
	 Description of project: This will be a slot machine program that uses
	 random number generation.
----------------------------------------------------------------------------------*/

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

//write a function to print title
void printTitle()
{

	Green;
	cout << setw(30) << setfill(' ') << "|" << "--------------------------------------------" << "|" << endl;
	cout << setw(30) << setfill(' ') << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << setw(30) << setfill(' ') << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << setw(30) << setfill(' ') << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << setw(30) << setfill(' ') << "|" << setw(41) << setfill(' ');

	Blue;
	cout << "Khoa Nguyen's Random Number Program" << setw(5) << setfill(' ');

	Green;
	cout << "|\n";
	cout << setw(30) << setfill(' ') << "|" << setw(27) << setfill(' ');

	Blue;
	cout << setw(30) << setfill(' ') << "11/2/2021" << setw(16) << setfill(' ');

	Green;
	cout << "|\n";
	cout << setw(30) << setfill(' ') << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << setw(30) << setfill(' ') << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << setw(30) << setfill(' ') << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << setw(30) << setfill(' ') << "|" << "--------------------------------------------" << "|" << endl;

	White;

	system("pause");
	system("cls");






	return;
}



//Write a function to print the trademark

void printTrademark() {

	Red;
	cout << "     )                       )                                 \n";
	cout << "  ( /(     )              ( /(                                 \n";
	cout << "  )\\()) ( /(          )   )\\()) (  (     (   (       (         \n";

	Yellow;
	cout << " ((_)\\  )\())  (   ( /(  ((_)\\  )\\))(   ))\\  )\\ )   ))\\  (     \n";
	cout << "(_ ((_)((_)\\   )\\  )(_))  _((_)((_))\\  /((_)(()/(  /((_) )\\ )  \n";

	White;
	cout << "| |/ / | |";

	Yellow;
	cout << "(_) ((_)((_)_ ";

	White;
	cout << " | \\| |";

	Yellow;
	cout << "(()(_)(_))(  )(_))(_))  _(_/(  \n";
	White;
	cout << "| ' <  | ' \\ / _ \\/ _` | | .` |/ _` | | || || || |/ -_)| ' \\";
	Yellow;
	cout << ")) \n";
	White;
	cout << "|_|\\_\\ |_||_|\\___/\\__,_| |_|\\_|\\__, |  \\_,_| \\_, |\\___||_||_|  \n";
	cout << "                               |___/         |__/              \n";




	cout << "\n" << "\n" << "\n" << "\n";









	return;
}

void printGreeting() {


	Red;


	cout << "    _/  " << endl;
	cout << "   _/     " << endl;
	cout << "  _/_/   " << endl;
	cout << " _/     " << endl;
	cout << "_/       " << endl;

	system("cls");

	cout << "    _/  " << endl;
	cout << "   _/     " << endl;
	cout << "  _/_/   " << endl;
	cout << " _/     " << endl;
	cout << "_/       " << endl;

	system("cls");

	cout << "    _/  " << endl;
	cout << "   _/     " << endl;
	cout << "  _/_/   " << endl;
	cout << " _/     " << endl;
	cout << "_/       " << endl;

	system("cls");

	cout << "    _/  " << endl;
	cout << "   _/     " << endl;
	cout << "  _/_/   " << endl;
	cout << " _/     " << endl;
	cout << "_/       " << endl;

	system("cls");

	cout << "    _/  " << endl;
	cout << "   _/     " << endl;
	cout << "  _/_/   " << endl;
	cout << " _/     " << endl;
	cout << "_/       " << endl;

	system("cls");

	cout << "    _/  " << endl;
	cout << "   _/     " << endl;
	cout << "  _/_/   " << endl;
	cout << " _/     " << endl;
	cout << "_/       " << endl;

	system("cls");

	cout << "    _/    _/" << endl;
	cout << "   _/    _/  " << endl;
	cout << "  _/_/_/_/   " << endl;
	cout << " _/    _/  " << endl;
	cout << "_/    _/   " << endl;

	system("cls");

	cout << "    _/    _/" << endl;
	cout << "   _/    _/  " << endl;
	cout << "  _/_/_/_/   " << endl;
	cout << " _/    _/  " << endl;
	cout << "_/    _/   " << endl;

	system("cls");

	cout << "    _/    _/" << endl;
	cout << "   _/    _/  " << endl;
	cout << "  _/_/_/_/   " << endl;
	cout << " _/    _/  " << endl;
	cout << "_/    _/   " << endl;

	Pink;

	system("cls");

	cout << "    _/    _/" << endl;
	cout << "   _/    _/  " << endl;
	cout << "  _/_/_/_/   " << endl;
	cout << " _/    _/  " << endl;
	cout << "_/    _/   " << endl;

	system("cls");

	cout << "    _/    _/" << endl;
	cout << "   _/    _/  " << endl;
	cout << "  _/_/_/_/   " << endl;
	cout << " _/    _/  " << endl;
	cout << "_/    _/   " << endl;

	system("cls");

	cout << "    _/    _/" << endl;
	cout << "   _/    _/  " << endl;
	cout << "  _/_/_/_/   " << endl;
	cout << " _/    _/  " << endl;
	cout << "_/    _/   " << endl;

	Yellow;
	system("cls");

	cout << "    _/    _/  _/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_ " << endl;

	Green;
	system("cls");

	cout << "    _/    _/  _/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_/_/  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_/_/  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_/_/  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_/_/ " << endl;

	system("cls");
	Cyan;
	cout << "    _/    _/  _/_/_/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_/_/  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_/_/  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/ " << endl;
	cout << "   _/    _/  _/        " << endl;
	cout << "  _/_/_/_/  _/_/_/  " << endl;
	cout << " _/    _/  _/       " << endl;
	cout << "_/    _/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/      " << endl;
	cout << "   _/    _/  _/             " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/      " << endl;
	cout << "   _/    _/  _/             " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/      " << endl;
	cout << "   _/    _/  _/             " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/  " << endl;

	system("cls");
	Blue;
	cout << "    _/    _/  _/_/_/_/      " << endl;
	cout << "   _/    _/  _/             " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/      " << endl;
	cout << "   _/    _/  _/             " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/      " << endl;
	cout << "   _/    _/  _/             " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/    " << endl;
	cout << "   _/    _/  _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/    " << endl;
	cout << "   _/    _/  _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  " << endl;

	system("cls");
	Red;
	cout << "    _/    _/  _/_/_/_/  _/    " << endl;
	cout << "   _/    _/  _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/    " << endl;
	cout << "   _/    _/  _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/    " << endl;
	cout << "   _/    _/  _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/    " << endl;
	cout << "   _/    _/  _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/      " << endl;
	cout << " _/    _/  _/        _/        " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/              " << endl;
	cout << "   _/    _/  _/        _/        _     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/              " << endl;
	cout << "   _/    _/  _/        _/        _     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/              " << endl;
	cout << "   _/    _/  _/        _/        _     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/              " << endl;
	cout << "   _/    _/  _/        _/        _     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/ " << endl;
	Pink;
	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/              " << endl;
	cout << "   _/    _/  _/        _/        _     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/              " << endl;
	cout << "   _/    _/  _/        _/        _     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/       " << endl;
	cout << "   _/    _/  _/        _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/       " << endl;
	cout << "   _/    _/  _/        _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/       " << endl;
	cout << "   _/    _/  _/        _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/ " << endl;

	system("cls");
	Yellow;
	cout << "    _/    _/  _/_/_/_/  _/        _/       " << endl;
	cout << "   _/    _/  _/        _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/       " << endl;
	cout << "   _/    _/  _/        _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/       " << endl;
	cout << "   _/    _/  _/        _/        _/     " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/ " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/          _/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/      " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/        _/       " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/       " << endl;

	system("cls");
	Green;
	cout << "    _/    _/  _/_/_/_/  _/        _/          _/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/      " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/        _/       " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/       " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/          _/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/      " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/        _/       " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/       " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/          _/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/      " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/        _/       " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/       " << endl;

	system("cls");
	Cyan;
	cout << "    _/    _/  _/_/_/_/  _/        _/          _/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/      " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/        _/       " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/       " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/          _/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/      " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/      " << endl;
	cout << " _/    _/  _/        _/        _/        _/       " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/       " << endl;

	system("cls");
	Blue;
	cout << "    _/    _/  _/_/_/_/  _/        _/          _/_/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/    _/   " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/    _/    " << endl;
	cout << " _/    _/  _/        _/        _/        _/    _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/_/        " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/          _/_/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/    _/   " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/    _/    " << endl;
	cout << " _/    _/  _/        _/        _/        _/    _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/_/        " << endl;
	system("cls");


	cout << "    _/    _/  _/_/_/_/  _/        _/          _/_/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/    _/   " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/    _/    " << endl;
	cout << " _/    _/  _/        _/        _/        _/    _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/_/        " << endl;

	system("cls");

	cout << "    _/    _/  _/_/_/_/  _/        _/          _/_/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/    _/   " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/    _/    " << endl;
	cout << " _/    _/  _/        _/        _/        _/    _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/_/        " << endl;

	system("cls");
	White;
	cout << "    _/    _/  _/_/_/_/  _/        _/          _/_/    " << endl;
	cout << "   _/    _/  _/        _/        _/        _/    _/   " << endl;
	cout << "  _/_/_/_/  _/_/_/    _/        _/        _/    _/    " << endl;
	cout << " _/    _/  _/        _/        _/        _/    _/     " << endl;
	cout << "_/    _/  _/_/_/_/  _/_/_/_/  _/_/_/_/    _/_/         " << endl << endl;

	Cyan;
	cout << "Random Number Game by Khoa Nguyen\n";


	cin.get();
	Yellow;
	cout << "\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/" << endl << endl;

	White;

	cout << setw(29) << "Prizes" << endl << endl;

	Blue;
	cout << "Pairs ";
	White;
	cout << "-  +75 Tokens (2 of a kind)" << endl << endl;

	Yellow;
	cout << "Tripples ";
	White;
	cout << "-  +200 Tokens (3 of a kind)" << endl << endl;

	Red;
	cout << "DOUBLE DOUBLE ";
	White;
	cout << "-  +300 Tokens (Double pairs)" << endl << endl;

	Green;
	cout << "JACKPOT!!! ";
	White;
	cout << "-  +10,000 Tokens (4 of a kind)" << endl << endl;

	Pink;
	cout << "FREE TOKENS! ";
	White;
	cout << "-  +100 Tokens (1/20 odds each spin)" << endl << endl;

	Yellow;
	cout << "\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/" << endl << endl;

	White;


	system("pause");
	system("cls");

	return;

}

//-------------------------------------------------------------------------------------------------------------------------------------------------


int main() {


	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, token = 200;
	char answer1, answer2, answer3 = 'y', answer4 = 'y';


	while (answer4 == 'y') {


		char answer3 = 'y', answer4 = 'y';

		// print the title
		printTitle();
		string userName;

		printGreeting();





















		cout << "Please enter your name: ";
		getline(cin, userName);


		cout << "                 .___________________________________________." << endl;
		cout << "                 |    __    __    ___  _____   __            |" << endl;
		cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
		cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
		cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
		cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
		cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
		cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
		cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
		cout << "                 ||*|       |*|       |*|       |*|       |*|| || " << endl;
		cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
		cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
		cout << "                 |========___________________________========|" << endl;
		cout << "                 |       /___________________________\\       |" << endl;
		cout << "                 |        |                         |        |" << endl;
		cout << "                _|         \\_______________________/         |_" << endl;
		cout << "               (_______________________________________________)" << endl << endl;
		cout << "Tokens: " << token << endl;
		cout << "Hello, " << userName << " Would you like to bet a 25 token? (y/n): ";

		cin >> answer1;

		if (answer1 == 'y') {


			system("cls");
			token -= 25;
			cin.get();

		}

		if (answer1 == 'n') {

			system("cls");

			cout << "Goodbye, " << userName << endl << endl;

			printTrademark();
			system("pause");
			exit(0);

		}


		while (answer3 == 'y' && answer4 == 'y') {
			srand(time(NULL));

			num1 = rand() % 10;
			num2 = rand() % 10;
			num3 = rand() % 10;
			num4 = rand() % 10;
			num5 = rand() % 21;

			//ANIMATION================================================================================================================================================


			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << "1" << "   |*|   " << "2" << "   |*|   " << "3" << "   |*|   " << "4" << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)" << endl << endl;

			system("cls");

			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << "9" << "   |*|   " << "8" << "   |*|   " << "6" << "   |*|   " << "7" << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)" << endl << endl;

			system("cls");

			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << "2" << "   |*|   " << "4" << "   |*|   " << "5" << "   |*|   " << "6" << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)" << endl << endl;

			system("cls");

			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << "8" << "   |*|   " << "6" << "   |*|   " << "5" << "   |*|   " << "0" << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)" << endl << endl;

			system("cls");

			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << "3" << "   |*|   " << "4" << "   |*|   " << "0" << "   |*|   " << "1" << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)" << endl << endl;

			system("cls");

			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << "1" << "   |*|   " << "2" << "   |*|   " << "3" << "   |*|   " << "4" << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)" << endl << endl;

			system("cls");


			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << "2" << "   |*|   " << "4" << "   |*|   " << "5" << "   |*|   " << "6" << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)" << endl << endl;

			system("cls");

			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << "8" << "   |*|   " << "6" << "   |*|   " << "5" << "   |*|   " << "0" << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)" << endl << endl;

			system("cls");

			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << "3" << "   |*|   " << "4" << "   |*|   " << "0" << "   |*|   " << "1" << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)" << endl << endl;

			system("cls");


			White;
			//===========================================================================================================================================================
			cout << "                 .___________________________________________." << endl;
			cout << "                 |    __    __    ___  _____   __            |" << endl;
			cout << "                 |   / _\\  / /   /___\\/__   \\ / _\\           |" << endl;
			cout << "                 |   \\ \\  / /   //  //  / /\\\\ \\ \\        25  | " << endl;
			cout << "                 |   _\\ \\/ /___/ \\_//  / /  \\/_\\ \\       []  |" << endl;
			cout << "                 |   \\__/\\____/\\___/   \\/     \\__/           | __" << endl;
			cout << "                 |===_______===_______===_______===_______===|(__)" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*|| ||" << endl;
			cout << "                 ||*|   " << num1 << "   |*|   " << num2 << "   |*|   " << num3 << "   |*|   " << num4 << "   |*|| || " << endl;
			cout << "                 ||*|       |*|       |*|       |*|       |*||_// " << endl;
			cout << "                 ||*|_______|*|_______|*|_______|*|_______|*||_/" << endl;
			cout << "                 |========___________________________========|" << endl;
			cout << "                 |       /___________________________\\       |" << endl;
			cout << "                 |        |                         |        |" << endl;
			cout << "                _|         \\_______________________/         |_" << endl;
			cout << "               (_______________________________________________)       " << endl << endl;

			Pink;

			if ((num5 > 19)) {

				cout << "FREE TOKENS! +100 Tokens" << endl;

			}

			White;

			if ((num1 == num2 && num3 == num4 && num1 != num3 && num2 != num4 && num2 != num3 && num1 != num4) ||
				(num1 == num3 && num2 == num4 && num1 != num2 && num1 != num4 && num3 != num2 && num3 != num4) ||
				(num1 == num4 && num2 == num3 && num1 != num2 && num1 != num3 && num4 != num2 && num4 != num3))
			{

				cout << "YOU GOT A ";
				Red;

				cout << "DOUBLE DOUBLE ";

				White;

				cout << "+300 Tokens" << endl;
				token += 300;

			}

			//jakcpot award

			if ((num1 == num2 && num2 == num3 && num3 == num4 && num4 == num1))
			{
				Yellow;
				cout << "JACKPOT!!!!!!!!!!!!!! +10,000 TOKENS";
				White;
				token += 10000;

			}


			// tripple award

			if ((num1 == num2 && num2 == num3 && num4 != num1 && num4 != num2 && num4 != num3) ||
				(num1 == num3 && num3 == num4 && num2 != num1 && num2 != num4 && num2 != num3) ||
				(num1 == num2 && num2 == num4 && num3 != num1 && num3 != num2 && num4 != num3) ||
				(num4 == num2 && num2 == num3 && num4 != num1 && num1 != num2 && num1 != num3)) {

				cout << "YOU GOT A";
				Yellow;

				cout << " TRIPPLE ";

				White;

				cout << "+200 Tokens" << endl;
				token += 200;


			}

			// pair award
			if ((num1 == num2 && num3 != num4 && num1 != num3 && num1 != num4) ||
				(num2 == num3 && num1 != num4 && num2 != num1 && num2 != num4) ||
				(num3 == num4 && num1 != num2 && num3 != num1 && num3 != num2) ||
				(num1 == num4 && num2 != num3 && num1 != num2 && num1 != num3) ||
				(num1 == num3 && num2 != num4 && num1 != num2 && num1 != num4) ||
				(num2 == num4 && num1 != num3 && num2 != num3 && num2 != num1)
				) {

				cout << "YOU GOT A";
				Blue;

				cout << " PAIR ";

				White;

				cout << "+75 Tokens" << endl;
				token += 75;

			}


			// no more tokens
			if (token < 1) {

				system("cls");
				cout << "You broke now. Gambling is bad. " << endl << endl;

				cout << "Goodbye, " << userName << endl << endl;
				printTrademark();
				exit(0);

			}

			cout << "Tokens: " << token << endl;



			//next
			cout << "Insert a 25 token? (y/n): ";
			cin >> answer3;

			if (answer3 == 'y')
			{
				cin.get();
				system("cls");
				token -= 25;

			}

			if (answer3 == 'n') {

				cout << "Would you like to start over? (y = yes   n = exit app) ";
				cin >> answer4;

				if (answer4 == 'y') {
					token = 200;
					cin.get();
					system("cls");

				}

				if (answer4 == 'n') {
					system("cls");

					cout << "TOTAL TOKENS: " << token << endl << endl;
					cout << "Goodbye, " << userName << endl << endl;
					printTrademark();

					system("pause");

					exit(0);

				}

			}
		}

	}


	system("pause");


	return 0;


}






