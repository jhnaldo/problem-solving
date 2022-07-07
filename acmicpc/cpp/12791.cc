#include <stdio.h>

int main() {
  int t;
  int year[25] = {
    1967,
    1969,
    1970,
    1971,
    1972,
    1973,
    1973,
    1974,
    1975,
    1976,
    1977,
    1977,
    1979,
    1980,
    1983,
    1984,
    1987,
    1993,
    1995,
    1997,
    1999,
    2002,
    2003,
    2013,
    2016
  };
  char name[25][101] = {
    "DavidBowie",
    "SpaceOddity",
    "TheManWhoSoldTheWorld",
    "HunkyDory",
    "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars",
    "AladdinSane",
    "PinUps",
    "DiamondDogs",
    "YoungAmericans",
    "StationToStation",
    "Low",
    "Heroes",
    "Lodger",
    "ScaryMonstersAndSuperCreeps",
    "LetsDance",
    "Tonight",
    "NeverLetMeDown",
    "BlackTieWhiteNoise",
    "1.Outside",
    "Earthling",
    "Hours",
    "Heathen",
    "Reality",
    "TheNextDay",
    "BlackStar"
  };
  scanf("%d", &t);
  while (t--) {
    int from, to, count = 0;
    scanf("%d %d", &from, &to);
    for (int i = 0; i < 25; i++) {
      if (year[i] >= from && year[i] <= to) {
        count++;
      }
    }
    printf("%d\n", count);
    for (int i = 0; i < 25; i++) {
      if (year[i] >= from && year[i] <= to) {
        printf("%d %s\n", year[i], name[i]);
      }
    }
  }
  return 0;
}
