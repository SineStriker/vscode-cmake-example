#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "No file argument." << std::endl;
        return 0;
    }

    std::string filename = argv[1];
    std::cout << "Filename: " << filename << std::endl;

    std::fstream fs;
    fs.open(filename.data(), std::ios::in);

    if (fs.fail()) {
        std::cout << "Open file failed." << std::endl;
        return -1;
    }

    std::cout << fs.rdbuf() << std::endl;

    fs.close();

    return 0;
}