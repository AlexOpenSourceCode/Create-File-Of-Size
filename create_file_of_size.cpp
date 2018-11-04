//#define WIN32_LEAN_AND_MEAN
#define DEFAULT_PORT "27015" 
#define DEFAULT_BUFFER_LENGTH	512

#include <iostream>
#include <cstdint>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <string>

#include <WinSock2.h>
#include <WS2tcpip.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <cstring> // for std::strlen
#include <cstddef> // for std::size_t -> is a typedef on an unsinged int
#include <iostream>
#include <array>
// link with Ws2_32.lib
#pragma comment(lib, "Ws2_32.lib")

#define DEFAULT_PORT "27015"
#define DEFAULT_BUFFER_LENGTH	512

#include <iostream>
#include <thread>
#include <list>
#include <algorithm>
#include <mutex>
#include <math.h> 


using namespace std;


int main(){
	string output_file_path = "C:/c++/input/";
	string output_file_name = "";

	cout << "Input file size in mb: ";

	char input[100];
	cin.getline(input, sizeof(input));
	string input_string = input;

	int file_size_mb = 0;
	try{
		file_size_mb = stoi(input_string);
	}
	catch (...){
		cout << "Error parsing int input" << endl;
	}
	

	std::ofstream ofs;

	output_file_name = input_string + "mb.txt";

	ofs.open(output_file_path + output_file_name, std::ofstream::out);

	//1mb = 1000kb
	//1kb = 1,024bytes
	//1mb = 1,000,000bytes (1 million)
	
	ofs << string(file_size_mb * 1000000, '*');

	cout << "File of size " + input_string + "mb created at: " << endl;
	cout << output_file_path + output_file_name << endl;

	ofs.close();
	system("pause");
}