/*
 * new punch.cpp
 *
 *  Created on: 2015-8-25
 *      Author: alex
 */

#include <iostream>

using namespace std;


int main()
{
	int a,i,j;
	a=1;
	cin >> a;

	i=1;
	j=1;

	if(a<1){
		cout << "No punch is shown\n";
		a=a-1;
		return 0;
	}

	cout << "You will get a triangle whose height is ";
	cout << a;
	cout << "\n";

	for(j=1;j<=a;j++){
		for(i=1;i<=j;i++){
			cout << "# ";
		}
		cout << "\n";
	}


	for(j=j-1;j>=1;j--){
			for(i=1;i<j;i++){
				cout << "# ";
			}
			cout << "\n";
		}


	return 0;
}
