/*
 * main.cpp
 *
 * File just for testing utilities
 */

#include <iostream>

#include "Ringbuffer.hpp"

using namespace std;

int main() {

    // create object with int type
    Ringbuffer<double> buffer(5);

    std::cout << "Writing to buffer\n";

    std::cout << "Stored items: " << buffer.getAmountStored() << std::endl;
    for(int i = 0; i < 5; ++i){
        buffer.add(i);
        std::cout << "Stored items: " << buffer.getAmountStored() << std::endl;
    }


    std::cout << "\nReading from buffer\n";
    for(int i = 0; i < 5; ++i){
        std::cout << buffer.get() << std::endl;
        buffer.pop();
        std::cout << "Stored items: " << buffer.getAmountStored() << std::endl;
    }

    return 0;
}