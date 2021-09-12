#include <iostream>
#include <string>

template <class T>
class Pair1{
private:
    T p_first;
    T p_second;
public:
    Pair1(T first, T second) : p_first(first), p_second(second){

    }
    T first(){
        return p_first;
    }
    T second(){
        return p_second;
    }
};
void task1(){
    Pair1<int> p1(6,9);
    std::cout << "Pair: " << p1.first() << " " << p1.second() << std::endl;

    Pair1<double> p2(3.4,7.8);
    std::cout << "Pair: " << p2.first() << " " << p2.second() << std::endl;
}

template <class T, class M>
class Pair{
private:
    T p_first;
    M p_second;
public:
    Pair(T first, M second) : p_first(first), p_second(second){

    }
    T first(){
        return p_first;
    }
    M second(){
        return p_second;
    }

};
void task2(){
    Pair<int, double> p1(6,7.8);
    std::cout << "Pair: " << p1.first() << " " << p1.second() << std::endl;

    Pair<double, int> p2(3.4, 5);
    std::cout << "Pair: " << p2.first() << " " << p2.second() << std::endl;
}




int main() {

    //task1();
    //task2();


    return 0;
}
