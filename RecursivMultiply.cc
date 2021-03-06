#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int multiply(int a, int b){
	if(a > b) swap(a, b);
	int tmp = a;
	int ans = 0;
	while(b > 0){
		if(b & 1){
			ans += tmp;
		}
		tmp = tmp + tmp;
		b = b >> 1;
	}
	return ans;
}

int main(){
	cout << multiply(11, 1251) << endl;

}
