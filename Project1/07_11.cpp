#include <iostream>

//#include <string>
//#include <vector>
//
//using namespace std;
//char str[3] = { '4','1','2' };
//
//string onetwofour(int k) {
//
//    if (k != 0) {
//        if (k % 3 == 0) {
//            return onetwofour(k / 3-1) + str[k % 3];
//        }
//        else
//            return onetwofour(k / 3) + str[k % 3];
//    }
//    else
//        return "";
//
//}
//
//string solution(int n) {
//    string answer = "";
//    answer = onetwofour(n);
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <sstream>
//#include <iostream>
//using namespace std;
//
//string solution(string m, vector<string> musicinfos) {
//    string answer = "";
//
//    for (int i = 0; i < musicinfos.size(); i++) {
//        cout << "i : " << i << endl;
//
//        stringstream ss(musicinfos[i]);
//        string token;
//        vector <string> result;
//
//        while (getline(ss, token, ',')) {
//            if (token != ",") {
//                result.push_back(token);
//            }
//            else {
//                ss.unget();
//            }
//        }
//
//        int h = stoi(result[1].substr(1)) - stoi(result[0].substr(1));
//        int mi = stoi(result[1].substr(3,2)) - stoi(result[0].substr(3,2));
//        mi += h * 60;
//        cout << mi << endl;
//
//        int size = 0;
//        for (int num = 0; num < result[3].size(); num++) {
//            if (result[3][num] == '#') continue;
//            else size++;
//        }
//        string str = "";
//
//        if (mi > size) {
//            for (int j = 0; j < mi / size; j++) {
//                str += result[3];
//            }
//            if (mi % size < size - 1) {
//                if (result[3][mi % size + 1] != '#')
//                    str += result[3].substr(0, mi % size);
//                else
//                    str += result[3].substr(0, mi % size + 1);
//            }
//            else
//                str += result[3].substr(0, mi % size);
//        }
//        else if (mi < size) {
//            if(result[3][mi + 1]=='#')
//                str += result[3].substr(0,mi+1);
//            else
//                str += result[3].substr(0, mi);
//            
//        }
//        else str = result[3];
//
//        cout <<"str: "<< str <<"  | m: "<<m<< endl;
//
//        size_t found = str.find(m);
//        if (found != string::npos) {
//            cout << "found : " << found + m.size() << endl;
//            if (str[(found+m.size())] == '#')
//                continue;
//            else {
//                if (answer.length() < str.length())
//                    answer = result[2];
//            }
//        }  
//
//    }
//    if (answer == "")
//        answer = "(None)";
//    return answer;
//}
//
//int main() {
//   
//    string m = "ABCDEFG";
//    vector<string> v = { "12:00,12:14,HELLO,CDEFGAB", "13:00,13:05,WORLD,ABCDEF" };
//    
//    cout << "결과: " << solution(m, v) << endl << endl;
//
//    string m1 = "ABC";
//    vector<string> v1 = { "12:00,12:14,HELLO,C#DEFGAB", "13:00,13:05,WORLD,ABCDEF" };
//    
//    cout << "결과: " << solution(m1, v1);
//}