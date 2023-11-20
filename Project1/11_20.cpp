#include<iostream>

#include <string>
#include <vector>
#include <deque>
using namespace std;


int solution(int cacheSize, vector<string> cities) {
    int answer = 0;

    if (cacheSize == 0)
        return cities.size() * 5;

    deque<string>cache;
    for (int i = 0; i < cities.size(); i++) {
        bool catch_city = false;

        string city = cities[i];
        for (int c=0;c<city.length();c++)
            city[c] = tolower(city[c]);
        int catch_index = -1;

        for (int j = cache.size()-1; j >= 0; j--) {
            if (cache[j] == city) {

                catch_index = j;
                catch_city = true;
                break;
            }
        }

        if (catch_city) {
            if (catch_city) {
                cache.erase(cache.begin() + catch_index);
                cache.push_front(city);
                answer += 1;
            }
        }
        else {
            if (cache.size() >= cacheSize)
                cache.pop_front();
            cache.push_back(city);
            answer += 5;
        }
    }
    cout << answer;
    return answer;
}



int  main() {
    solution(4, { "Jeju", "Pangyo", "Seoul", "jeju"});
}