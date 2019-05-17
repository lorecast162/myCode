#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

int rnd(int min, int max);
void rndCol();

int main() {
  printf("%d %d", COLOR_BLACK, COLOR_WHITE);
  srand(time(NULL));
  int st=1;
  int c=0;
  int x, y; x=y=0;
  char ch;
  initscr();      //init ncurses screen
  cbreak();
  start_color();
  noecho();
  
  while (st) {
    rndCol();
    attron(COLOR_PAIR(0));
    x = rnd(0, COLS - 1);
    y = rnd(0, LINES - 1);
    mvaddch(y, x, '#');
    refresh();
    attroff(COLOR_PAIR(0));
  }
  getch();
  endwin();
  return 0;
}

int rnd(int min, int max) {
  return rand()%(max-min+1)+min;
}

void rndCol() {
  int x = rnd(0, 15);
  switch (x) {
  case 0 : init_pair(0, COLOR_BLACK, COLOR_BLACK);
  case 1 : init_pair(0, COLOR_BLACK, COLOR_RED);
  }
}
