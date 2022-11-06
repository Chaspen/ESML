#include <iostream>
#include <fstream>
#include <sstream>
#include <string>




class ESML {
    public:
        std::string ReadESML(std::string file) {
            std::ifstream in(file);     // load file into memory
            std::stringstream buffer;   // create buffer
            buffer << in.rdbuf();       // load contents info buffer
            return buffer.str();        
        }              

        std::string ParseESML(std::string obj, std::string input) {
            std::string data = ReadESML(input);
            //std::cout << data;

            int pos = data.find(obj);
            //std::cout << pos;
            std::cout << data.erase(0, pos) << std::endl;
            return data;
        }

};