// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         if (i % 3 == 0 && i % 5 == 0) {
//             cout << "FizzBuzz" << endl;
//         } else if (i % 3 == 0) {
//             cout << "Fizz" << endl;
//         } else if (i % 5 == 0) {
//             cout << "Buzz" << endl;
//         } else {
//             cout << i << endl;
//         }
//     }

//     return 0;
// }

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                result.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                result.push_back("Fizz");
            } else if (i % 5 == 0) {
                result.push_back("Buzz");
            } else {
                result.push_back(to_string(i));
            }
        }

        return result;
    }
};

