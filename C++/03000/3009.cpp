#include <iostream>

int main() {
    std::pair<int,int> point[3];
    std::cin >> point[0].first >> point[0].second >> point[1].first >> point[1].second >> point[2].first >> point[2].second;
    std::cout << ((point[0].first==point[1].first)?point[2].first:(point[1].first==point[2].first)?point[0].first:point[1].first) << " " << ((point[0].second==point[1].second)?point[2].second:(point[1].second==point[2].second)?point[0].second:point[1].second);
}