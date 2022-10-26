
#include<iostream>
using namespace std;

bool cal(int a, int b, int c, int d) {

	float Res;
	bool flag = 0;
	for (int n = 0; n < 4; n++) {
		for (int j = 0; j < 4; j++) {
			for (int i = 0; i < 4; i++) {
				Res = a;
				switch (i) {
				case 0:
					Res += b;
					break;
				case 1:
					Res -= b;
					break;
				case 2:
					Res *= b;
					break;
				case 3:
					Res /= b;
					break;
				}
				switch (j) {
				case 0:
					Res += c;
					break;
				case 1:
					Res -= c;
					break;
				case 2:
					Res *= c;
					break;
				case 3:
					Res /= c;
					break;
				}
				switch (n) {
				case 0:
					Res += d;
					if (Res == 24)
						flag = 1;
					break;
				case 1:
					Res -= d;
					if (Res == 24)
						flag = 1;
					break;
				case 2:
					Res *= d;
					if (Res == 24)
						flag = 1;
					break;
				case 3:
					Res /= d;
					if (Res == 24)
						flag = 1;
					break;
				}

			}
		}
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}

int main() {
	int a, b, c, d;
	cout << "Give 4 numbers please: " << endl << "a: " << endl;
	cin >> a;
	cout << "b: " << endl;
	cin >> b;
	cout << "c: " << endl;
	cin >> c;
	cout << "d: " << endl;
	cin >> d;
	cout << "Result: " << cal(a, b, c, d) << endl;
}
