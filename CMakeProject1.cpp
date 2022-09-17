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

int main()
{
	string gmdsong;
	string gmddata;
	string gmdname;
	stringstream gmds;
        string gmdexl;
	SetConsoleTitle("Level string into gdshare covnerter");
	printf("\n thx misanthrope for idea)");

	const int count = 1;
	ofstream gmdw;

	cout << "Please enter the level name:";
	cin >> gmdname;
        
        
        std::stringstream gmdexl = fmt::sprintf(".gmd");


    gmds <<gmdname;//<<gmdimport;
    gmdw.open(gmds.str());
    gmdw.close();
    gmds.str("");

    cout << "Please enter the level song:";
	cin >> gmdsong;

	cout << "Please enter the level string:";
	cin >> gmddata;
{
 ofstream MyFile(gmdname.gmdexl);	
 MyFile << "<d><k>kCEK</k><i>4</i><k>k2</k><s>" << (gmdname) << "</s><k>k3</k><s>WTI5dGJXVnVkSE1nWm1WaGRIVnlaU0J1YjNRZ2VXVjBJR2x1WTJ4MVpHVms=</s><k>k4</k><s>" << (gmddata) << "</s><k>k45</k><i>" << (gmdsong) << "</i><k>k13</k><t/><k>k21</k><i>2</i><k>k50</k><i>35</i></d>";
}
	; return 0;
}



