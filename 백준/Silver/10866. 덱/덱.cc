#include <iostream>
#include <deque>

int main() {

    std::deque<int> deque;

    int n; // 명령 수
    std::cin >> n;

    std::string command; 
    int command_num;

    for (int i=0; i<n; i++) {
        std::cin >> command;

        if (command == "push_front") {
            std::cin >> command_num;
            deque.push_front(command_num);
        } else if (command == "push_back") {
            std::cin >> command_num;
            deque.push_back(command_num);
        } else if (command == "size") {
            std::cout << deque.size() << std::endl;
        } else if (command == "empty") {
            std::cout << deque.empty() << std::endl;
        } else if (deque.empty()) {
            std::cout << -1 << std::endl;
        } else if (command == "pop_front") {
            std::cout << deque.front() << std::endl;
            deque.pop_front();
        } else if (command == "pop_back") {
            std::cout << deque.back() << std::endl;
            deque.pop_back();
        } else if (command == "front") {
            std::cout << deque.front() << std::endl;
        } else if (command == "back") {
            std::cout << deque.back() << std::endl;
        }
    }
}