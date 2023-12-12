#include <iostream>

using namespace std;

class Device
{
public:

	string manufacturers_name;
	string model;
	string name;
	int capacity;
	int count;

	virtual void Print()
	{
		cout << "Device: , Manuf. name: , Model: , Name: , Campasity: , Count: ;\n";
	}

	virtual void Loading()
	{
		cout << "Device has been loaded\n";
	}

	virtual void Saving()
	{
		cout << "Data ont the device has been saved\n";
	}

};

class FlashDrive : public Device
{
public:

	void Print()
	{
		cout << "Device: Flash Drive, Manuf. name: Kingston's, Model: DTMAXA, Name: Kingston DataTraveler Max Red, Campasity: 512 GB, Count: 110;\n";
	}

	void Loading()
	{
		cout << "Flash drive has been loaded\n";
	}

	void Saving()
	{
		cout << "Data ont the flash drive has been saved\n";
	}
	
};

class HardDrive : public Device
{
public:

	void Print()
	{
		cout << "Device: Hard Drive, Manuf. name: Toshiba, Model: P300, Name: oshiba P300 1TB 7200rpm 64MB HDWD110UZSVA 3.5 SATA III, Campasity: 1 TB, Count: 63;\n";
	}

	void Loading()
	{
		cout << "Hard Drive has been loaded\n";
	}

	void Saving()
	{
		cout << "Data ont the hard drive has been saved\n";
	}
	
};

class Telephone : public Device
{
public:

	void Print()
	{
		cout << "Device: Telephone, Manuf. name: Samsung, Model: F731B, Name: Galaxy Flip5, Campasity: 8 GB/256 GB, Count: 255;\n";
	}

	void Loading()
	{
		cout << "Telephone has been loaded\n";
	}

	void Saving()
	{
		cout << "Data ont the telephone has been saved\n";
	}
	
};

int main()
{
	int count = 3;

	Device** device = new Device * [count];

	device[0] = new FlashDrive;
	device[1] = new HardDrive;
	device[2] = new Telephone;

	for (int i = 0; i < count; i++)
	{
		device[i]->Print();
		device[i]->Loading();
		cout << "///////////////\n";
	}

	for (int i = 0; i < count; i++)
	{
		delete device[i];
	}
	delete[] device;

}