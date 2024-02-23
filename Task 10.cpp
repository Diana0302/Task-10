#include <iostream>
#include <fstream>
void write(const std::string& file_name, std::string& s)
{
	std::fstream myfile;
	myfile.open(file_name, std::ios::out);
	if (myfile.is_open()) {
		myfile << s << std::endl;
		myfile.close();
	}
}

void read(const std::string file_name) 
{
	std::fstream myfile;
	myfile.open(file_name, std::ios::in);
	if (!myfile.is_open()) {
		std::cout << "This file is close" << std::endl;
	}

}
int main()
{
    std::string file_name = "my_file.txt";
    std::string s = "Hello world";
    write(file_name, s);
    std::cout << "It's my file" << std::endl;
    read(file_name);
	return 0;
}