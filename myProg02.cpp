// myProg02.cpp
// Mason Corey, CS 16 Spring 2018

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  ifstream ifs;
  ifs.open(argv[1]);
  int num_Ducks = 0;
  int num_Animals = 0;
  int num_Non_Ducks = 0;
  string line;

if (ifs.good())
{
  while(ifs.good())	{
  	
  	getline(ifs, line);
  	if(ifs.eof()==1)	{
  		break;
  		}
	if (line=="duck")	{
  		num_Ducks++;
	}
	if (line!="duck")	{
		num_Non_Ducks++;
	}
	num_Animals++;
  }
  cout << "Report for " << argv[1] << ":\n   Animal count:    " << num_Animals 
  << "\n   Duck count:      " << num_Ducks << "\n   Non duck count:  " << num_Non_Ducks << endl;
  ifs.close();
  return 0;
}
}

