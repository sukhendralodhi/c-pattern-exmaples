#include <iostream>
using namespace std;

int main() {

  // inverted pattern
  /*
  int row;
  cout << "Enter the number of rows: ";
  cin >> row;
  // cout << "Enter the number of cols: ";
  // cin >> col;
  for (int i = row; i >= 1; --i) {
    for (int j = 1; j <= i; ++j) {
      cout << "*";
    }
    cout << endl;
  }
  */

  // hollow pattern
  /*
  int row = 5, col = 5;

  for (int i = 1; i <= row; ++i) {
    for (int j = 1; j <= col; ++j) {
      if (i == 1 || j==1 || i == col || j==row) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  */
  
  int n;
  cout << "Enter the value:";
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (j <= n - i) {
        cout << " ";
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }
}