#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++)
	{
	
		if (s[i] != 'A' && s[i] != 'a' && s[i] != 'E' && s[i] != 'e' && s[i] != 'I' && s[i] != 'i'
			&& s[i] != 'O' && s[i] != 'o' && s[i] != 'U' && s[i] != 'u'&&s[i]!='Y'&&s[i]!='y')
		{
			if (isupper(s[i]))
			{	
				char lower = tolower(s[i]);
				//putchar(tolower(s[i]));
				cout << "." << static_cast<char> (tolower(s[i]));
			}
			else
				cout << "." << s[i];
		}
	}

	return 0;
}
