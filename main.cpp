#include <iostream>
#include <string>

template <class T>
class Pair1 {
private:
    T p_first;
    T p_second;
public:
    Pair1(T first, T second) : p_first(first), p_second(second) {

    }
    T first() {
        return p_first;
    }
    T second() {
        return p_second;
    }
};
void task1() {
    Pair1<int> p1(6, 9);
    std::cout << "Pair: " << p1.first() << " " << p1.second() << std::endl;

    Pair1<double> p2(3.4, 7.8);
    std::cout << "Pair: " << p2.first() << " " << p2.second() << std::endl;
}

template <class T1, class T2>
class Pair {
private:
    T1 p_first;
    T2 p_second;
public:
    Pair(T1 first, T2 second) : p_first(first), p_second(second) {

    }
    T1 first() {
        return p_first;
    }
    T2 second() {
        return p_second;
    }

};
void task2() {
    Pair<int, double> p1(6, 7.8);
    std::cout << "Pair: " << p1.first() << " " << p1.second() << std::endl;

    Pair<double, int> p2(3.4, 5);
    std::cout << "Pair: " << p2.first() << " " << p2.second() << std::endl;
}

template<class T>
class StringValuePair : public Pair<std::string, T> {
public:
    StringValuePair(const std::string &str, const T &value) : Pair<std::string, T>(str, value)  {}
};
void task3() {
    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
}



int main() {

    //task1();
    //task2();
    task3();


    return 0;
}
