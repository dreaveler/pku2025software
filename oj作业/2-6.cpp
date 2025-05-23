#include <iostream>

class Alef {
public:
    int value;
    Alef(int value) : value{ value } {}
    Alef(const Alef& a) : value{ a.value + 1 } {}
};

class Bet {
public:
    const Alef alef;
    int value;
    // 在此处补充你的代码
    Bet(int x) :alef(x),value(x) {}
    Bet(const Bet& b):alef(b.alef),value(b.value){}
};

int main() {
    int n;
    while (std::cin >> n) {
        Bet a1(n);
        Bet a2 = a1;
        std::cout << a1.value << "," << a1.alef.value << ","
            << a2.value << "," << a2.alef.value << std::endl;
    }
}