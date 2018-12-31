#include <iostream>
using namespace std;
string change(string key, string sentence);

int main() {
  string sentence;
  cout << "輸入英文";
  cin >> sentence;

  string keyword;
  cout << "輸入密鑰文";
  cin >> keyword;

  sentence = change(keyword, sentence);
  cout << sentence;
}

string change(string key, string sentence) {
  int x = 0;
  for(int i = 0; key[i] != '\0'; i++) {
    x += i;
  }
  int keynum[x];

  for(int i = 0; key[i] != '\0'; i++) {
    if(key[i] == 'a' || key[i] == 'A') {
      keynum[i] = 0;
    }else if(key[i] == 'b' || key[i] == 'B') {
      keynum[i] = 1;
    }else if(key[i] == 'c' || key[i] == 'C') {
      keynum[i] = 2;
    }else if(key[i] == 'd' || key[i] == 'D') {
      keynum[i] = 3;
    }else if(key[i] == 'e' || key[i] == 'E') {
      keynum[i] = 4;
    }else if(key[i] == 'f' || key[i] == 'F') {
      keynum[i] = 5;
    }else if(key[i] == 'g' || key[i] == 'G') {
      keynum[i] = 6;
    }else if(key[i] == 'h' || key[i] == 'H') {
      keynum[i] = 7;
    }else if(key[i] == 'i' || key[i] == 'I') {
      keynum[i] = 8;
    }else if(key[i] == 'j' || key[i] == 'J') {
      keynum[i] = 9;
    }else if(key[i] == 'k' || key[i] == 'K') {
      keynum[i] = 10;
    }else if(key[i] == 'l' || key[i] == 'L') {
      keynum[i] = 11;
    }else if(key[i] == 'm' || key[i] == 'M') {
      keynum[i] = 12;
    }else if(key[i] == 'n' || key[i] == 'N') {
      keynum[i] = 13;
    }else if(key[i] == 'o' || key[i] == 'O') {
      keynum[i] = 14;
    }else if(key[i] == 'p' || key[i] == 'P') {
      keynum[i] = 15;
    }else if(key[i] == 'q' || key[i] == 'Q') {
      keynum[i] = 16;
    }else if(key[i] == 'r' || key[i] == 'R') {
      keynum[i] = 17;
    }else if(key[i] == 's' || key[i] == 'S') {
      keynum[i] = 18;
    }else if(key[i] == 't' || key[i] == 'T') {
      keynum[i] = 19;
    }else if(key[i] == 'u' || key[i] == 'U') {
      keynum[i] = 20;
    }else if(key[i] == 'v' || key[i] == 'V') {
      keynum[i] = 21;
    }else if(key[i] == 'w' || key[i] == 'W') {
      keynum[i] = 22;
    }else if(key[i] == 'x' || key[i] == 'X') {
      keynum[i] = 23;
    }else if(key[i] == 'y' || key[i] == 'Y') {
      keynum[i] = 24;
    }else if(key[i] == 'z' || key[i] == 'Z') {
      keynum[i] = 25;
    }
  }

  for (int i = 0; sentence[i] != '\0'; i++) {
    if (i < x) {
      if (sentence[i]  <= 'Z' && sentence[i] >= 'A') {
        if (sentence[i] + keynum[i] > 'Z' && sentence[i] - 26 >= 0) {
          sentence[i] -= 26;
        }
        sentence[i] += keynum[i];
        if (sentence[i] > 'Z' && sentence[i] - 26 >= 0) {
          sentence[i] -= 26;
        }
      }else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
        if (sentence[i] + keynum[i] > 'z' && sentence[i] - 26 >= 0) {
          sentence[i] -= 26;
        }
        sentence[i] += keynum[i];
        if (sentence[i] > 'z' && sentence[i] - 26 >= 0) {
          sentence[i] -= 26;
        }
      }
    }if(i >= x) {
      if (sentence[i]  <= 'Z' && sentence[i] >= 'A') {
        if (sentence[i] + keynum[i] > 'Z' && sentence[i] - 26 >= 0) {
          sentence[i] -= 26;
        }
        sentence[i] += keynum[i - x];
        if (sentence[i] > 'Z' && sentence[i] - 26 >= 0) {
          sentence[i] -= 26;
        }
      }else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
        if (sentence[i] + keynum[i] > 'z' && sentence[i] - 26 >= 0) {
          sentence[i] -= 26;
        }
        sentence[i] += keynum[i - x];
        if (sentence[i] > 'z' && sentence[i] - 26 >= 0) {
          sentence[i] -= 26;
        }
      }
    }
  }
  return sentence;
}
