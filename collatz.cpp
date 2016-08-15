/**
 * Collatz Problem
 */


#include <iostream>
#include <cstdlib>

using namespace std;

/* {{{1 */
int collatz(int val){
	int ans = 0;
	if((val%2) == 0){
		ans = (val / 2);
	}else if((val%2) != 0 && val>1){
		ans = 3 * val + 1;
	}

return ans;
}
/* }}}1*/

int main(int argc, char *argv[]){

	int input = 27;
	int count = 0;

	if(argc > 1){
		input = atoi(argv[1]);
	}

	cout << "input value: " << input << endl;

	while(1){
		count++;
		input = collatz(input);
		cout << input << endl;
		if(input == 1) break;
	}

	cout << "last step: " << count << endl;

return 0;
}
