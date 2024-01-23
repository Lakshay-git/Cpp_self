// #include <iostream>
// using namespace std;

// int sumOfFactors(int num) {
//     int sum = 0;

//     for (int i = 1; i <= num; ++i) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }

//     return sum;
// }

// int main() {
//     int number;

//     cout << "Enter a number: ";
//     cin >> number;

//     int result = sumOfFactors(number);
//     cout << "Sum of factors is: " << result << endl;

//     return 0;
// }

// int main (){
//     int n;
//     cin>>n;
//     int sum = 0;
//     for (int i = 1; i <= n; ++i) {
//         if (n % i == 0) {
//             sum += i;
//         }

// }
// cout << sum;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }

    cout << "Sum of factors is: " << sum << endl;

    return 0;
}
