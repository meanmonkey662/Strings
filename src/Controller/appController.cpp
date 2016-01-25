/*
 * appController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: kkoc6943
 */

#include "appController.h"
#include <iostream>
using namespace std;

void appController::start()
{
	cout<<"hd"<< endl;
	string Word = "Hi";

	cout << Word.length() << endl;

	if(!Word.empty())
	{
		cout << "There is lots of snow in the mountains." << endl;
	}
	else
	{
		cout << "I want to be snowboarding right now " << endl;
	}


	if(Word.compare("Hello")==0)
	{
		cout << "The snow is awesome!" << endl;
	}
	else
	{
		cout << "Never Summer" << endl;
	}


		cout << Word.at(3) << endl;
		cout << Word.substr(2, 3) << endl;
		cout << Word.substr(0) << endl;

}
