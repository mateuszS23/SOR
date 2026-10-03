#include <ctime> 


#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}


DateTime timep

class DateTime {

    struct tm datetime;
    time_t timestamp;

    DateTime() {
        timestamp = mktime(&datetime);

    }
    
    
    string ToString() {
		return std::to_string(datetime.tm_year + 1900) + "-" + std::to_string(datetime.tm_mon + 1) + "-" + std::to_string(datetime.tm_mday) + " " + std::to_string(datetime.tm_hour) + ":" + std::to_string(datetime.tm_min) + ":" + std::to_string(datetime.tm_sec);
    }
};