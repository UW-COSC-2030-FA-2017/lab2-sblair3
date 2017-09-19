//Samuel Blair
// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(4.12);
	cout << "cows list  :  " << cows << endl ;
	cout << "The sum is " << cows.listSum() << endl;
	cout << "The size is " << cows.listSize() << endl<< endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "The sum is " << cows.listSum() << endl;
	cout << "The size is " << cows.listSize() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "The sum is " << cows.listSum() << endl;
	cout << "The size is " << cows.listSize() << endl << endl;
	cout << "horses list:  " << horses << endl ;
	cout << "The sum is " << horses.listSum() << endl;
	cout << "The size is " << horses.listSize() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.insertAsLast(9.32);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl; 
	cout << "The sum is " << cows.listSum() << endl;
	cout << "The size is " << cows.listSize() << endl << endl;
	cout << "horses list:  " << horses << endl ;
	cout << "The sum is " << horses.listSum() << endl;
	cout << "The size is " << horses.listSize() << endl << endl;

	List pigs;
	pigs.insertAsLast(1.23);
	cout << "cows list  :  " << cows << endl;
	cout << "The sum is " << cows.listSum() << endl;
	cout << "The size is " << cows.listSize() << endl << endl;
	cout << "horses list:  " << horses << endl;
	cout << "The sum is " << horses.listSum() << endl;
	cout << "The size is " << horses.listSize() << endl << endl;
	cout << "pigs list  :  " << pigs << endl ;
	cout << "The sum is " << pigs.listSum() << endl;
	cout << "The size is " << pigs.listSize() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "The sum is " << cows.listSum() << endl;
	cout << "The size is " << cows.listSize() << endl << endl;
	cout << "horses list:  " << horses << endl;
	cout << "The sum is " << horses.listSum() << endl;
	cout << "The size is " << horses.listSize() << endl << endl;
	cout << "pigs list  :  " << pigs << endl ;
	cout << "The sum is " << pigs.listSum() << endl;
	cout << "The size is " << pigs.listSize() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "The sum is " << cows.listSum() << endl;
	cout << "The size is " << cows.listSize() << endl << endl;
	cout << "horses list:  " << horses << endl;
	cout << "The sum is " << horses.listSum() << endl;
	cout << "The size is " << horses.listSize() << endl << endl;
	cout << "pigs list  :  " << pigs << endl ;
	cout << "The sum is " << pigs.listSum() << endl;
	cout << "The size is " << pigs.listSize() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
