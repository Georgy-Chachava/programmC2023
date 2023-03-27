#include <iostream>
#include <string>

struct Time {
    int hours;
    int seconds;
    int minutes;
};

int main() {
    Time t1, t2, t3;
    std::cin >> t1.hours >> t1.minutes >> t1.seconds >> t3.hours >> t3.minutes >> t3.seconds;
    t2.hours = (t1.hours + t3.hours + (t1.minutes + t3.minutes + (t1.seconds + t3.seconds)/60)/60)%24;
    t2.minutes = (t1.minutes + t3.minutes + (t1.seconds + t3.seconds)/60)%60;
    t2.seconds = (t1.seconds + t3.seconds)%60;
    std::cout << t2.hours << ":" << t2.minutes << ":" << t2.seconds << std::endl;
    return 0;
}
