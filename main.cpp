#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> db;
    int n;
    do {
        cout << "Enter a number: ";
        cin >> n;
        if (n == -1) {
            break;
        } else if (db.size() < 20) {
            db.push_back(n);
        } else if (db.size() >= 20) {
            db.erase(db.begin());
            db.push_back(n);
            db.shrink_to_fit();
        }

    } while (n != -1);

    if (db.empty()) {
      cout << "Vector is empty." << endl;
    } else {
        for (int i = 0; i < db.size(); ++i) {
            cout << db[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
