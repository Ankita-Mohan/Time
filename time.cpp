#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
private:
    int seconds;
    int hh, mm, ss;

public:
    void getTime();
    void converttoSeconds();
    void displayTime();
};
void Time::getTime()
{
    cout << "Enter time: " << endl;
    cout << "Hours? ";
    cin >> hh;
    cout << "Minutes? ";
    cin >> mm;
    cout << "Seconds? ";
    cin >> ss;
}
void Time::converttoSeconds()
{

    seconds = hh * 3600 + mm * 60 + ss;
}
void Time::displayTime()
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << ":"
         << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
}
int main()
{
    Time T;
    T.getTime();
    T.converttoSeconds();
    T.displayTime();
    return 0;
}
//created by Ankita Mohan
