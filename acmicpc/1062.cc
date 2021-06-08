#include <stdio.h>
#include <list>
#include <bitset>

using namespace std;

int N, K, i, j;
int selected, result;
int words[50];
char str[16];
list<int> candidates;
list<int>::iterator iter;

int to_int(char ch);
int to_int(char str[16]);
int select(int selected, char ch);
bool isSelected(int selected, char ch);
void find_candidates(int more, int selected, char ch);
void show(int cur) {
  printf("%s\n", bitset<32>(cur).to_string().c_str());
}

int to_int(char ch) {
  return 1 << (ch - 'a');
}

int to_int(char str[16]) {
  int cur = 0;
  for (int i = 0; str[i]; i++) {
    cur = select(cur, str[i]);
  }
  return cur;
}

int select(int selected, char ch) {
  return selected | to_int(ch);
}

bool isSelected(int selected, char ch) {
  return (selected & to_int(ch)) != 0;
}

void find_candidates(int more, int selected, char ch) {
  if (more == 0) {
    candidates.push_back(selected);
    return;
  }
  if (ch > 'z') return;

  find_candidates(more, selected, ch + 1);

  if (!isSelected(selected, ch)) {
    find_candidates(more-1, select(selected, ch), ch + 1);
  }
}

int main() {
  scanf("%d %d", &N, &K);

  selected = 0;
  selected = select(selected, 'a');
  selected = select(selected, 'n');
  selected = select(selected, 't');
  selected = select(selected, 'i');
  selected = select(selected, 'c');
  if (K >= 5) {
    find_candidates(K - 5, selected, 'a');
  }

  for (i = 0; i < N; i++) {
    scanf("%s", str);
    words[i] = to_int(str);
  }

  result = 0;
  for (iter = candidates.begin(); iter != candidates.end(); iter++) {
    int count = 0;
    selected = *iter;
    for (i = 0; i < N; i++) {
      if ((words[i] | selected) == selected) {
        count++;
      }
    }
    if (result < count) result = count;
  }
  printf("%d\n", result);
  return 0;
}
