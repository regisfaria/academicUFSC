#include <stdlib.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

vector< string > ReadDict( string filepath );
bool Search( vector< string > dictionary, string query );
