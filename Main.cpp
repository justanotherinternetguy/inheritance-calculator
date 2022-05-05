#include <bits/stdc++.h>
using namespace std;


void basic() {
    string p1;
    string p2;

    cout << "parent 1: ";
    cin >> p1;

    cout << "parent 2: ";
    cin >> p2;

    string ans;

    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            ans += p1[i];
            ans += p2[j];
            ans += "\n";
        }   
    }
    cout << ans << "\n";
}

void dihybrid() {
    string p1;
    string p2;

    cout << "parent 1: ";
    cin >> p1;

    cout << "parent 2: ";
    cin >> p2;

    // FOIL
    vector<string> parts1;
    vector<string> parts2;
    string temp;
    temp += p1[0];
    temp += p1[2];

    parts1.push_back(temp);
    temp.clear();

    temp += p1[0];
    temp += p1[3];
    parts1.push_back(temp);
    temp.clear();

    temp += p1[1];
    temp += p1[2];
    parts1.push_back(temp);
    temp.clear();

    temp += p1[1];
    temp += p1[3];
    parts1.push_back(temp);
    temp.clear();

    /*********************************************************/


    temp += p2[0];
    temp += p2[2];

    parts2.push_back(temp);
    temp.clear();

    temp += p2[0];
    temp += p2[3];
    parts2.push_back(temp);
    temp.clear();

    temp += p2[1];
    temp += p2[2];
    parts2.push_back(temp);
    temp.clear();

    temp += p2[1];
    temp += p2[3];
    parts2.push_back(temp);
    temp.clear();

    /*****************************************************************/
    string res;
    for (int i = 0; i < parts1.size(); i++) {
        for (int j = 0; j < parts2.size(); j++) {
            res += parts1[i];
            res += parts2[j];
            res += "\n";
        }
    }
    cout << res << "\n";
}

void sexLinked() {
    string f;
    string m;

    cout << "female: ";
    cin >> f;

    cout << "male: ";
    cin >> m;
}

int main() {
    int choice;
    cout << "[1] Basic inheritance, [2] Dihybrid cross, [3] Sex-linked, [4] Incomplete Dominance, [5] Codominance: ";
    cin >> choice;

    switch (choice) {
        case 1:
            basic();
            break;
        case 2:
            dihybrid();
            break;
    }
}