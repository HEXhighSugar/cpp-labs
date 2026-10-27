#include <iostream>
#include <string>

using namespace std;

struct Pipe {
    string name;
    double length = 0;
    int diameter = 0;
    bool underRepair = false;
    bool exists = false;
};

struct CompressorStation {
    string name;
    int workshopCount = 0;
    int workshopsInWork = 0;
    int stationClass = 0;
    bool exists = false;
};

int main() {
    return 0;
}