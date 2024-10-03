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
		getline(cin, hello);
		if(hello == "stop")
		{
			break;
		}
		else
		{
			cout << "Hello, " << hello << "!"<< endl;
		}
	}
	return 0;
}
