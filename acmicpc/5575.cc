#include <stdio.h>

class Time {
public:
  int hour;
  int min;
  int sec;
  int duration;

  Time() {
    hour = min = sec = duration = 0;
  }

  Time(int _hour, int _min, int _sec): hour(_hour), min(_min), sec(_sec) {
    duration = hour * 3600 + min * 60 + sec;
  }

  Time(int _duration): duration(_duration) {
    hour = duration / 3600;
    min = duration % 3600 / 60;
    sec = duration % 60;
  }

  void display() {
    printf("%d %d %d\n", hour, min, sec);
  }
};

int main() {
  int t = 3;
  while(t--) {
    Time start, end, answer;
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    start = Time(h, m, s);
    scanf("%d %d %d", &h, &m, &s);
    end = Time(h, m, s);
    answer = Time(end.duration - start.duration);
    answer.display();
  }
  return 0;
}
