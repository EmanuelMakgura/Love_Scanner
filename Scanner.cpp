#include<iostream>
#include<string>
using namespace std;

int calculateLovePercentage(string name1, string name2) {
    // Simple algorithm based on ASCII values
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < name1.length(); i++) {
        sum1 += name1[i];
    }
    for (int i = 0; i < name2.length(); i++) {
        sum2 += name2[i];
    }
    int lovePercentage = (sum1 + sum2) % 100;
    return lovePercentage;
}

int main() {
    string name1, name2;
    cout << "Enter your name: ";
    cin >> name1;
    cout << "Enter your partner's name: ";
    cin >> name2;
    
    int lovePercentage = calculateLovePercentage(name1, name2);
    cout << "Your love percentage is: " << lovePercentage << "%" << endl;
    
    if (lovePercentage < 30) {
        cout << "Friend zone!" << endl;
    } else if (lovePercentage < 50) {
        cout << "Getting interested!" << endl;
    } else if (lovePercentage < 70) {
        cout << "Love is in the air!" << endl;
    } else if (lovePercentage < 90) {
        cout << "True love!" << endl;
    } else {
        cout << "Soulmates!" << endl;
    }
    
    return 0;
}

