#include <iostream>
#include <fstream>

int main()
{
    std::ifstream   readFile;
    std::ofstream   writeFile;
    std::string     str;
    
	readFile.open("txt");
    if (!readFile.is_open())
    {
        std::cout << "File is not open" << std::endl;
        return 0;
    }
    writeFile.open("outfile");
    if (!writeFile.is_open())
    {
        std::cout << "File is not open" << std::endl;
        return 0;
    }
    while (!readFile.eof())
    {
        getline(readFile, str);
        writeFile.write(str.c_str(), str.size() % 5);
    }
    readFile.close();
    writeFile.close();
    return 0;
}
