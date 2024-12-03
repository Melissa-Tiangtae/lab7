#include<iostream>
using namespace std;

char before(char x){
	char y;

	if(x == 'A'){
		y = 'Z';
	}else{

	if ( x>'A' && x<='Z'){

		y = x-1;

	}else{
		y = '0';
	}
	}

	return y;
}

int main(){


	//cout << before('B');
	//Test case
	cout << before('A') << endl;
	cout << before('B')<< endl;
	cout << before('P')<< endl;
	cout << before('T')<< endl;
	cout << before('Z')<< endl;
	cout << before('a')<< endl;
	cout << before('0')<< endl;
	cout << before('c');
	
	return 0 ;
}

	