/* Kayumov Airat st128100@student.spbu.ru
   Hello, world! V2
*/
#include <iostream>
#include <string>
using namespace std;

string hello = "";

int hello_world()
{
	cout << "Hello, world!" << endl;
	while(true)
	{
		cin >> hello;
		cout << "Hello, " << hello << "!"<< endl;
	}
}

int main(int argc, char *argv[])
{
	hello_world();
}
