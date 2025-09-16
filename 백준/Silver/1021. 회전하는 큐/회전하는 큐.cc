#include <iostream>
#include <deque>

int main() {
    std::deque<int> deq;
    int idx;
    int ans = 0;

    int n, m, x;
    std::cin >> n >> m;

    for (int i=1; i<=n; i++) {
        deq.push_back(i);
    }

    while (m--) {
        std::cin >> x;

        for(int i =0; i < deq.size(); i++) {
            if (deq[i] == x) {
                idx = i;
                break;
            }
        }

        //앞
        if (idx <= deq.size()/2) {
            while(1) {
                if (deq.front() == x) {
                    deq.pop_front();
                    break;
                }
                ++ans;
                deq.push_back(deq.front());
                deq.pop_front();
            }
        } else {
            //뒤
            while(1) {
                if (deq.front() == x) {
                    deq.pop_front();
                    break;
                }
                ++ans;
                deq.push_front(deq.back());
                deq.pop_back();
            }
        }
    }

    std::cout << ans;
}