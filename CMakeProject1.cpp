// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include "CMakeProject1.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include<sstream>
using namespace std;

int main()//если запущен как обычно
{
	string gmdsong;
	string gmddata;
	string gmdname;
	//string gmdext = ".gmd";
	//string gmdimport = "_imported";
	//string gmdogorod; ойче
	//Я сегодня пожарил бульбочку
	stringstream gmds;
	SetConsoleTitle("Level string into gdshare covnerter");
	printf("\n thx misanthropez for idea)");//миза крутой 
	//printf("\n i can`t stop thinking about balls"); нотчер3#8385 поехал крышей и ебёт рычаги

	const int count = 1;
	ofstream gmdw;

	cout << "Please enter the level name:";
	cin >> gmdname;


    gmds <<gmdname;//<<gmdimport;
    gmdw.open(gmds.str());
    gmdw.close();
    gmds.str("");

    cout << "Please enter the level song:";
	cin >> gmdsong;

	cout << "Please enter the level string:";
	cin >> gmddata;
{
 ofstream MyFile(gmdname);	
 MyFile << "<d><k>kCEK</k><i>4</i><k>k2</k><s>" << (gmddata) << "</s><k>k3</k><s>WTI5dGJXVnVkSE1nWm1WaGRIVnlaU0J1YjNRZ2VXVjBJR2x1WTJ4MVpHVms=</s><k>k4</k><s>" << (gmddata) << "</s><k>k45</k><i>" << (gmdsong) << "</i><k>k13</k><t/><k>k21</k><i>2</i><k>k50</k><i>35</i></d>";
}
	; return 0;
}



	//cout << gmdname; Дiвять 
	//std::ofstream outfile(gmdname.gmdext) Дiсять
		//fstream gmdstuff ДIСЯТЬ!!!!!!!!11
		//gmdstuff.open(gmdname.,)Дiвять?

	//Белая армия, чёрный барон
	//Снова готовят нам царский трон
	//Но от тайги до британских морей
	//Красная Армия всех сильней!

		



