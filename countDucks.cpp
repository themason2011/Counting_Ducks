// countDucks.cpp 
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
  }
  cout << "There were " <<  num_Ducks << " ducks in " << argv[1] << "\n" << endl;
  ifs.close();
  return 0;
}
}
