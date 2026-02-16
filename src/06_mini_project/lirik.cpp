/*
kalo mau silahkan di kembangkan lagi, aku hanya ngebuat
standar nya saja :D
*/

#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

struct LyricLine {
    std::string text;
    int delay_ms; 
};

void typeLine(const std::string &line, int typingSpeed_ms) {
    for (char c : line) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(typingSpeed_ms));
    }
    std::cout << std::endl;
}

int main() {
    
    std::vector<LyricLine> lyrics = {
        {"Pacarku kamu ada dimana?", 2000},
        {"Lagi dgn siapa..?", 1500},
        {"Hatiku ngak karuan", 1800},
        {"Mikirin kamu terus.", 2000},
        {"SMS ngak dibalas", 1500},
        {"Ditelpon gak diangkat", 2000},
        {"Hatiku jadi takut", 1800},
        {"Mungkin kamu selingkuh", 2200},
        {"", 1000},
        {"Syg ku aku ada disini", 2000},
        {"Lagi mikirin kamu", 1800},
        {"Akunya ngak selingkuh", 2000},
        {"Aku syg padamu ..", 1800},
        {"Aku ngak punya pulsa", 2000},
        {"Buat sms kamu hp ku lagi lowbat", 2000},
        {"Sory sory ya sayang", 1800},
        {"Sayangku ngak usah takut", 2000},
        {"Aku ada disini slalu ada untukmu", 2500}
    };

    int typingSpeed = 50;

    for (const auto &line : lyrics) {
        typeLine(line.text, typingSpeed);
        std::this_thread::sleep_for(std::chrono::milliseconds(line.delay_ms));
    }

    return 0;
}
