#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	string s = "333333";
	string f;

	int second[] = { 3,2,1 };
	
	cout << endl;
	for (int i = 0; i < 90; ++i) {							//Change launch timing
		cout << "Launching in: " << second[i/30] << endl;
		cout << "O33\n" <<"Oooo\n" << s << "}}}}====>>>>" << endl << "oooO\n" << "O33";
		system("CLS");
	}

	for (int i = 0; i < INT_MAX; ++i) {
		s.push_back('-');
		s += (pow(2,i),'-');								//Change acceleration
		cout <<"\n\n" << f << s << "oooOOO }}}}====>>>>";
		
		if (i > 10) {
			for (int j = 0; j < i - 7; ++j) {
				s[j+7] = '-';
			}
			f += (pow(5, i), ' ');
			for (int j = 0; j < i - 10; ++j) {
				s[j] = ' ';
			}
			/*f += (pow(5,i), ' ');	*/						//Change trail
		}
		system("CLS");
	}
}