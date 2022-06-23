                          #include <ostream>
                          #include <iostream>
                          #include <thread>
                          #include <chrono>
                          #include <ncurses.h>
                          #include <curses.h>
                          #include <unistd.h>
                          #include <cstdlib>
                          #include <cstdio>
                          #include <csignal>
                          #include <ctime>
using namespace std;

void menu();
void card(int x,int y,int x2,int y2,int s);
void cardealer(int x,int y,int x2,int y2,int a);
void loading();
void setup();
void pausescreen();
void screen1();
void gamelegit(int a);
void diff();
void tuto();
void about();
void numberscreen(int x,int y,int x2,int y2,int a);
void arrow(int y,int x,int jb,int e,int v1,int v2,
int v3,int v4,int v5,int v6,int v7,int v8,int v9,int v10,
int v11,int v12,int v13,int v14,int v15,int v16,int v17,int v18,int p);
void forcerand(int a);
void playagain();
void you10();
void score();



  int main(){
   int x;
    int a=10,b;

      setup();

   return 0;
 }

 int x,x2,x3,x4,x5,x6,x7,x8,x9;
 int vx1,vx2,vx3,vx4,vx5,vx6,vx7,vx8,vx9;

  void setup(){
  srand(time(NULL));
  initscr();
  noecho();
  cbreak();
  nodelay(stdscr,TRUE);
  screen1();
}

  void screen1(){
   int h,w;

   while(1){
     std::this_thread::sleep_for(std::chrono::milliseconds(500));

     if((getch())!=ERR){
       clear();
       refresh();
       loading();
       break;
     }

     wattron(stdscr,A_BOLD);
     box(stdscr,0,0);
     wmove(stdscr,7,14);
     waddstr(stdscr,"MELHOR JOGO DA MEMORIA DO ANO E DE TODOS OS SECULOS");
     refresh();

     wmove(stdscr,13,27);
     wattroff(stdscr,A_DIM);
     wattron(stdscr,A_UNDERLINE);
     waddstr(stdscr,"Coloque em tela cheia");
     refresh();
     wattroff(stdscr,A_UNDERLINE);
     std::this_thread::sleep_for(std::chrono::milliseconds(500));
     clear();
     box(stdscr,0,0);
     wmove(stdscr,7,14);
     wattron(stdscr,A_DIM);
     waddstr(stdscr,"MELHOR JOGO DA MEMORIA DO ANO E DE TODOS OS SECULOS");
     refresh();

     wattroff(stdscr,A_DIM);
     wmove(stdscr,13,27);
     wattron(stdscr,A_UNDERLINE);
     waddstr(stdscr,"Coloque em tela cheia");
     refresh();
     wattroff(stdscr,A_UNDERLINE);
   }
 }

  void loading(){
     int x,h,w,load=0;
     wattron(stdscr,A_BOLD);
     box(stdscr,0,0);
     getmaxyx(stdscr,h,w);
     WINDOW*wwin=newwin(h/2,w/2,h/2.7,w/2.7);
     wattron(wwin,A_BOLD);
     while(load<2){
       wclear(wwin);
     waddstr(wwin,"\n##       ####### ####### #####    ## ###   ## #########\n##       #     # #     # #   ###  ## ###   ## ##");
     waddstr(wwin,"\n##       #     # #     # #    ##  ## ## #  ## ##  \n##       #     # ####### #    ### ## ##  # ## ##  #####");
     waddstr(wwin,"\n##       #     # ####### #    ### ## ##   ### ##     ##\n######## #     # #     # #   ###  ## ##    ## ##     ##");
     waddstr(wwin,"\n######## ####### #     # #####    ## ##     # ######### ");
     wrefresh(stdscr);
     wrefresh(wwin);
    std::this_thread::sleep_for(std::chrono::milliseconds(750));
    for(x=0;x<3;x++){
      beep();
     waddstr(wwin,"  #");
     wrefresh(wwin);
     std::this_thread::sleep_for(std::chrono::milliseconds(750));
     if(x==2){
       x=0;
       break;
     }
   }
    load++;
      }
      delwin(wwin);
  menu();
 }

  void card(int x,int y,int x2,int y2,int s){
    start_color();
    init_pair(1,COLOR_MAGENTA,COLOR_BLACK);
    init_pair(2,COLOR_RED,COLOR_BLACK);
    init_pair(3,COLOR_YELLOW,COLOR_BLACK);
    init_pair(4,COLOR_GREEN,COLOR_BLACK);
    init_pair(5,COLOR_WHITE,COLOR_BLACK);
    #define purple 1
    #define red 2
    #define yellow 3
    #define green 4
    #define var 5
     if (s==1){
       WINDOW*wwin=newwin(x,y,x2,y2);

 wattron(wwin,COLOR_PAIR(var));
 wattron(wwin,A_BOLD);
 waddstr(wwin,"#############################\n");
 waddstr(wwin,"# 1 1                       #\n");
 waddstr(wwin,"# 1 1                       #\n");
 waddstr(wwin,"#             #####         #\n");
 waddstr(wwin,"#            ######         #\n");
 waddstr(wwin,"#           #######         #\n");
 waddstr(wwin,"#          ########         #\n");
 waddstr(wwin,"#              ####         #\n");
 waddstr(wwin,"#              ####         #\n");
 waddstr(wwin,"#              ####         #\n");
 waddstr(wwin,"#              ####         #\n");
 waddstr(wwin,"#              ####         #\n");
 waddstr(wwin,"#                       1 1 #\n");
 waddstr(wwin,"#                       1 1 #\n");
 waddstr(wwin,"#############################\n");
 wrefresh(wwin);
 wattroff(wwin,COLOR_PAIR(var));
 wattroff(wwin,A_BOLD);
delwin(wwin);
    }
    else if(s==2){
      WINDOW*wwin=newwin(x,y,x2,y2);
      wattron(wwin,A_BOLD);
      waddstr(wwin,"#############################\n");
      waddstr(wwin,"# 2 2                       #\n");
      waddstr(wwin,"# 2 2                       #\n");
      waddstr(wwin,"#          ########         #\n");
      waddstr(wwin,"#         ##########        #\n");
      waddstr(wwin,"#         ####  ####        #\n");
      waddstr(wwin,"#         ###   ####        #\n");
      waddstr(wwin,"#              ####         #\n");
      waddstr(wwin,"#             ####          #\n");
      waddstr(wwin,"#            ####           #\n");
      waddstr(wwin,"#           ########        #\n");
      waddstr(wwin,"#          #########        #\n");
      waddstr(wwin,"#                       2 2 #\n");
      waddstr(wwin,"#                       2 2 #\n");
      waddstr(wwin,"#############################\n");
      wrefresh(wwin);
      wattroff(wwin,A_BOLD);
delwin(wwin);

    }
    else if(s==3){
      WINDOW*wwin=newwin(x,y,x2,y2);
wattron(wwin,A_BOLD);
waddstr(wwin,"#############################\n");
waddstr(wwin,"# 3 3                       #\n");
waddstr(wwin,"# 3 3                       #\n");
waddstr(wwin,"#           #######         #\n");
waddstr(wwin,"#          #########        #\n");
waddstr(wwin,"#         ####   ####       #\n");
waddstr(wwin,"#               ####        #\n");
waddstr(wwin,"#              ####         #\n");
waddstr(wwin,"#               ####        #\n");
waddstr(wwin,"#         ####   ####       #\n");
waddstr(wwin,"#          #########        #\n");
waddstr(wwin,"#           #######         #\n");
waddstr(wwin,"#                       3 3 #\n");
waddstr(wwin,"#                       3 3 #\n");
waddstr(wwin,"#############################\n");
wrefresh(wwin);
wattroff(wwin,A_BOLD);
delwin(wwin);
    }
    else if(s==4){
      WINDOW*wwin=newwin(x,y,x2,y2);
  wattron(wwin,A_BOLD);
  waddstr(wwin,"#############################\n");
  waddstr(wwin,"# 4 4                       #\n");
  waddstr(wwin,"# 4 4                       #\n");
  waddstr(wwin,"#         ####  ####        #\n");
  waddstr(wwin,"#         ####  ####        #\n");
  waddstr(wwin,"#         ####  ####        #\n");
  waddstr(wwin,"#         ####  ####        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#               ####        #\n");
  waddstr(wwin,"#               ####        #\n");
  waddstr(wwin,"#               ####        #\n");
  waddstr(wwin,"#                       4 4 #\n");
  waddstr(wwin,"#                       4 4 #\n");
  waddstr(wwin,"#############################\n");
  wrefresh(wwin);
  wattroff(wwin,A_BOLD);
delwin(wwin);
    }
    else if(s==5){
      WINDOW*wwin=newwin(x,y,x2,y2);
  wattron(wwin,A_BOLD);
  waddstr(wwin,"#############################\n");
  waddstr(wwin,"# 5 5                       #\n");
  waddstr(wwin,"# 5 5                       #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ###               #\n");
  waddstr(wwin,"#         #######           #\n");
  waddstr(wwin,"#         #########         #\n");
  waddstr(wwin,"#           ########        #\n");
  waddstr(wwin,"#                ###        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#                       5 5 #\n");
  waddstr(wwin,"#                       5 5 #\n");
  waddstr(wwin,"#############################\n");
  wrefresh(wwin);
  wattroff(wwin,A_BOLD);
  delwin(wwin);
          }
    else if(s==6){
      WINDOW*wwin=newwin(x,y,x2,y2);
  wattron(wwin,A_BOLD);
  waddstr(wwin,"#############################\n");
  waddstr(wwin,"# 6 6                       #\n");
  waddstr(wwin,"# 6 6                       #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ####              #\n");
  waddstr(wwin,"#         ####              #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ####  ####        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#                       6 6 #\n");
  waddstr(wwin,"#                       6 6 #\n");
  waddstr(wwin,"#############################\n");
  wrefresh(wwin);
  wattroff(wwin,A_BOLD);
delwin(wwin);
    }
    else if(s==7){
      WINDOW*wwin=newwin(x,y,x2,y2);
  wattron(wwin,A_BOLD);
  waddstr(wwin,"#############################\n");
  waddstr(wwin,"# 7 7                       #\n");
  waddstr(wwin,"# 7 7                       #\n");
  waddstr(wwin,"#         ###########       #\n");
  waddstr(wwin,"#         ###########       #\n");
  waddstr(wwin,"#               ####        #\n");
  waddstr(wwin,"#              ####         #\n");
  waddstr(wwin,"#             ####          #\n");
  waddstr(wwin,"#            ####           #\n");
  waddstr(wwin,"#           ####            #\n");
  waddstr(wwin,"#          ####             #\n");
  waddstr(wwin,"#         ####              #\n");
  waddstr(wwin,"#                       7 7 #\n");
  waddstr(wwin,"#                       7 7 #\n");
  waddstr(wwin,"#############################\n");
  wrefresh(wwin);
  wattroff(wwin,A_BOLD);
  delwin(wwin);
    }
    else if(s==8){
      WINDOW*wwin=newwin(x,y,x2,y2);
      wattron(wwin,A_BOLD);
      waddstr(wwin,"#############################\n");
      waddstr(wwin,"# 8 8                       #\n");
      waddstr(wwin,"# 8 8                       #\n");
      waddstr(wwin,"#         ##########        #\n");
      waddstr(wwin,"#         ##########        #\n");
      waddstr(wwin,"#         ####  ####        #\n");
      waddstr(wwin,"#         ##########        #\n");
      waddstr(wwin,"#         ##########        #\n");
      waddstr(wwin,"#         ##########        #\n");
      waddstr(wwin,"#         ####  ####        #\n");
      waddstr(wwin,"#         ##########        #\n");
      waddstr(wwin,"#         ##########        #\n");
      waddstr(wwin,"#                       8 8 #\n");
      waddstr(wwin,"#                       8 8 #\n");
      waddstr(wwin,"#############################\n");
      wrefresh(wwin);
      wattroff(wwin,A_BOLD);
      delwin(wwin);
    }
    else if(s==9){
      WINDOW*wwin=newwin(x,y,x2,y2);
  wattron(wwin,A_BOLD);
  waddstr(wwin,"#############################\n");
  waddstr(wwin,"# 9 9                       #\n");
  waddstr(wwin,"# 9 9                       #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ####  ####        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#               ####        #\n");
  waddstr(wwin,"#               ####        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#         ##########        #\n");
  waddstr(wwin,"#                       9 9 #\n");
  waddstr(wwin,"#                       9 9 #\n");
  waddstr(wwin,"#############################\n");
  wrefresh(wwin);
  wattroff(wwin,A_BOLD);
  delwin(wwin);
    }
    else if(s==10){
            WINDOW*wwin=newwin(x,y,x2,y2);
          wattron(wwin,A_BOLD);
          waddstr(wwin,"#############################\n");
          waddstr(wwin,"# ");
          wattron(wwin,COLOR_PAIR(purple));
          waddch(wwin,ACS_DIAMOND);
          waddch(wwin,ACS_DIAMOND);
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"                        #\n");
          waddstr(wwin,"# ");
          wattron(wwin,COLOR_PAIR(purple));
          waddch(wwin,ACS_DIAMOND);
          waddch(wwin,ACS_DIAMOND);
          wattroff(wwin,COLOR_PAIR(purple));
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"          ##");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"            #\n");
          waddstr(wwin,"#            ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"####");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"           #\n");
          waddstr(wwin,"#           ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"######");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"          #\n");
          waddstr(wwin,"#          ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"###  ###");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"         #\n");
          waddstr(wwin,"#         ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"###    ###");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"        #\n");
          waddstr(wwin,"#        ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"###      ###");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"       #\n");
          waddstr(wwin,"#         ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"###    ###");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"        #\n");
          waddstr(wwin,"#          ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"###  ###");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"         #\n");
          waddstr(wwin,"#           ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"######");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"          #\n");
          waddstr(wwin,"#            ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"####");
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"           #\n");
          waddstr(wwin,"#             ");
          wattron(wwin,COLOR_PAIR(purple));
          waddstr(wwin,"##         ");
          wattroff(wwin,COLOR_PAIR(purple));
          wattron(wwin,COLOR_PAIR(purple));
          waddch(wwin,ACS_DIAMOND);
          waddch(wwin,ACS_DIAMOND);
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin," #\n");
          waddstr(wwin,"#                        ");
          wattron(wwin,COLOR_PAIR(purple));
          waddch(wwin,ACS_DIAMOND);
          waddch(wwin,ACS_DIAMOND);
          wattroff(wwin,COLOR_PAIR(purple));
          waddstr(wwin," #\n");
          waddstr(wwin,"#############################\n");
          wrefresh(wwin);
          wattroff(wwin,A_BOLD);
          delwin(wwin);
    }
    else if(s==11){
      WINDOW*wwin=newwin(x,y,x2,y2);
    wattron(wwin,A_BOLD);
    waddstr(wwin,"###########################\n#  ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddch(wwin,'u');
    waddch(wwin,'u');
    waddch(wwin,'u');
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"                    #");
    waddstr(wwin,"\n#  ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddch(wwin,'u');
    waddch(wwin,'u');
    waddch(wwin,'u');
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"                    #");
    waddstr(wwin,"\n#  ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddch(wwin,'u');
    waddch(wwin,'u');
    waddch(wwin,'u');
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"                    #");
    waddstr(wwin,"\n#                         #");
    waddstr(wwin,"\n#       ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"#         #");
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"       #");
    waddstr(wwin,"\n#       ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"#         #");
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"       #");
    waddstr(wwin,"\n#       ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"#         #");
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"       #");
    waddstr(wwin,"\n#       ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"#         #");
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"       #");
    waddstr(wwin,"\n#       ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"#         #");
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"       #");
    waddstr(wwin,"\n#       ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"#         #");
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"       #");
    waddstr(wwin,"\n#        ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"#       #");
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"        #");
    waddstr(wwin,"\n#         ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"#     #");
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"         #");
    waddstr(wwin,"\n#          ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"#####");
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"          #");
    waddstr(wwin,"\n#                         #\n#");
    waddstr(wwin,"                    ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddch(wwin,'u');
    waddch(wwin,'u');
    waddch(wwin,'u');
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"  #\n");
    waddstr(wwin,"#                    ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddch(wwin,'u');
    waddch(wwin,'u');
    waddch(wwin,'u');
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"  #\n");
    waddstr(wwin,"#                    ");
    wattron(wwin,COLOR_PAIR(yellow));
    waddch(wwin,'u');
    waddch(wwin,'u');
    waddch(wwin,'u');
    wattroff(wwin,COLOR_PAIR(yellow));
    waddstr(wwin,"  #\n");
    waddstr(wwin,"###########################");
      wrefresh(wwin);
      delwin(wwin);
    }
    else if(s==12){
      WINDOW*wwin=newwin(x,y,x2,y2);
      waddstr(wwin,"###########################\n#  ");
        wattron(wwin,COLOR_PAIR(purple));
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         wattroff(wwin,COLOR_PAIR(purple));
         waddstr(wwin,"                    #");
         waddstr(wwin,"\n#  ");
         wattron(wwin,COLOR_PAIR(purple));
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         wattroff(wwin,COLOR_PAIR(purple));
         waddstr(wwin,"                    #");
         waddstr(wwin,"\n#  ");
         wattron(wwin,COLOR_PAIR(purple));
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         wattroff(wwin,COLOR_PAIR(purple));
         waddstr(wwin,"                    #");
         waddstr(wwin,"\n#        ");
         wattron(wwin,COLOR_PAIR(purple));
         waddstr(wwin,"#########");
         wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
         waddstr(wwin,"\n#        ");
         wattron(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"#       #");
    wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
         waddstr(wwin,"\n#");
         wattron(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #       #");
    wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
         waddstr(wwin,"\n#");
         wattron(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #       #");
    wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
         waddstr(wwin,"\n#");
         wattron(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #       #");
    wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
         waddstr(wwin,"\n#");
         wattron(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #       #");
    wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
         waddstr(wwin,"\n#");
         wattron(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #       #");
    wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
         waddstr(wwin,"\n#");
         wattron(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #       #");
    wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
    waddstr(wwin,"\n#");
    wattron(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #       #");
    wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
         waddstr(wwin,"\n#");
         wattron(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #########");
    wattroff(wwin,COLOR_PAIR(purple));
    waddstr(wwin,"        #");
         waddstr(wwin,"\n#                         #\n#");
         waddstr(wwin,"                    ");
         wattron(wwin,COLOR_PAIR(purple));
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         wattroff(wwin,COLOR_PAIR(purple));
         waddstr(wwin,"  #\n");
         waddstr(wwin,"#                    ");
         wattron(wwin,COLOR_PAIR(purple));
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         wattroff(wwin,COLOR_PAIR(purple));
         waddstr(wwin,"  #\n");
         waddstr(wwin,"#                    ");
         wattron(wwin,COLOR_PAIR(purple));
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         waddch(wwin,ACS_CKBOARD);
         wattroff(wwin,COLOR_PAIR(purple));
         waddstr(wwin,"  #\n");
         waddstr(wwin,"###########################\n");
         wrefresh(wwin);
    }
    else if(s==13){
      WINDOW*wwin=newwin(x,y,x2,y2);
    wattron(wwin,A_BOLD);
    waddstr(wwin,"#############################\n");
    waddstr(wwin,"# ? ?                       #\n");
    waddstr(wwin,"# ? ?       #######         #\n");
    waddstr(wwin,"#         ###########       #\n");
    waddstr(wwin,"#        #####   #####      #\n");
    waddstr(wwin,"#        ####    #####      #\n");
    waddstr(wwin,"#        ####   #####       #\n");
    waddstr(wwin,"#              ####         #\n");
    waddstr(wwin,"#             ####          #\n");
    waddstr(wwin,"#             ####          #\n");
    waddstr(wwin,"#                           #\n");
    waddstr(wwin,"#             ####          #\n");
    waddstr(wwin,"#             ####      ? ? #\n");
    waddstr(wwin,"#                       ? ? #\n");
    waddstr(wwin,"#############################\n");
    wrefresh(wwin);
    wattroff(wwin,A_BOLD);
    delwin(wwin);
    }

}

  void cardealer(int x,int y,int x2,int y2,int a){
      card(x,y,x2,y2,a);
  }

  void pausescreen(){
   int x;
    wclear(stdscr);
    attroff(A_BOLD);
     mvprintw(10,0,"DE DUAS UMA, OU VOCE APERTOU ALGUM BOTAO ALEATORIO OU VOCE MEXEU NO TAMANHO DA  TELA!!!");
     mvprintw(12,0,"CASO VOCE SO TENHA APERTADO ALGUM BOTAO ALEATORIO ESPERE O SINAL E APERTE ALGUMASETA");
     mvprintw(14,0,"CASO VOCE TENHA MUDADO O TAMANHO DA TELA, COLOQUE EM FULLSCREEN DNV E ESPERE \nPELO SINAL E APERTE ALGUMA SETA");
     refresh();
     std::this_thread::sleep_for(std::chrono::milliseconds(12000));
     wclear(stdscr);
     mvprintw(10,10,"BOOOOOOOOOOHHHHHHHHHH!!!!");
     refresh();
     keypad(stdscr,TRUE);
     while(1){
       x=wgetch(stdscr);
       if(x==KEY_UP || x==KEY_DOWN || x==KEY_LEFT || x==KEY_RIGHT){
         menu();
       }
      }
   }

  void diff(){
    int h,w,x=0,s=0,z;
    getmaxyx(stdscr,h,w);
    wattron(stdscr,A_BOLD);
    box(stdscr,0,0);
    wattroff(stdscr,A_BOLD);
    WINDOW*wwin=newwin(h-(h-5),w-(w-34),h/2.5,w/7);
    WINDOW*wwin2=newwin(h-(h-5),w-(w-50),h/2.5,w/2.5);
    WINDOW*wwin3=newwin(h-(h-5),w-(w-50),h/2.5,w/1.35);
    WINDOW*wwin4=newwin(h-(h-10),w-(w-100),5,w/2.8);
    refresh();
    wattron(wwin4,A_BOLD);
    waddstr(wwin4,"#####   # ##### # ##### #    # #      #####   ##### #####   ######\n");
    waddstr(wwin4,"#   ##  # #     # #     #    # #      #   ##  #   # #   ##  #\n");
    waddstr(wwin4,"#    ## # ####  # #     #    # #      #    ## ##### #    ## #####\n");
    waddstr(wwin4,"#   ##  # #     # #     #    # #      #   ##  #   # #   ##  #\n");
    waddstr(wwin4,"#####   # #     # ##### ###### ###### #####   #   # #####   ######\n");
    wattroff(wwin4,A_BOLD);

    wrefresh(wwin4);
    keypad(stdscr,TRUE);
    while(1){
      wclear(wwin);
      wclear(wwin2);
      wclear(wwin3);
      z=wgetch(stdscr);
    if(z!=ERR && z!=KEY_UP && z!=KEY_DOWN && z!=KEY_LEFT && z!=KEY_RIGHT && z!=10){
        delwin(wwin);
        delwin(wwin2);
        delwin(wwin3);
        pausescreen();
      }
    else if(z==KEY_LEFT && s!=0){
      s--;
    }
    else if(z==KEY_RIGHT && s!=2){
      s++;
    }
    else{

    }
    if(z==10){
      switch (s) {
        case 0:
        clear();
        refresh();
        delwin(wwin);
        delwin(wwin2);
        delwin(wwin3);
        gamelegit(1);
        break;
        case 1:
        clear();
        refresh();
        delwin(wwin);
        delwin(wwin2);
        delwin(wwin3);
        gamelegit(2);
        break;
        case 2:
        clear();
        refresh();
        delwin(wwin);
        delwin(wwin2);
        delwin(wwin3);
        gamelegit(3);
        break;
      }
    }
      switch(s){
        case 0:
          if(x==1){
            wattron(wwin,A_DIM);
            wattroff(wwin,A_BOLD);
            x=0;
          }
          else {
            wattroff(wwin,A_DIM);
            wattron(wwin,A_BOLD);
            x=1;
          }
          break;
        case 1:
        if(x==1){
          wattron(wwin2,A_DIM);
          wattroff(wwin2,A_BOLD);
          x=0;
        }
        else {
          wattroff(wwin2,A_DIM);
          wattron(wwin2,A_BOLD);
          x=1;
        }
        break;
        case 2:
        if(x==1){
          wattron(wwin3,A_DIM);
          wattroff(wwin3,A_BOLD);
          x=0;
        }
        else {
          wattroff(wwin3,A_DIM);
          wattron(wwin3,A_BOLD);
          x=1;
        }
        break;
    }
        if(s==0){
          wattron(wwin2,A_DIM);
          wattron(wwin3,A_DIM);
        }
        else if(s==1){
          wattron(wwin,A_DIM);
          wattron(wwin3,A_DIM);
        }
        else{
          wattron(wwin,A_DIM);
          wattron(wwin2,A_DIM);
        }
    wattron(wwin,COLOR_PAIR(green));
    waddstr(wwin,"###### ####### ###### ##    ##\n");
    waddstr(wwin,"##     ##   ## ##      ##  ##\n");
    waddstr(wwin,"#####  ####### ######   ####\n");
    waddstr(wwin,"##     ##   ##     ##    ##\n");
    waddstr(wwin,"###### ##   ## ######    ##\n");
    wrefresh(wwin);
    wattroff(wwin,COLOR_PAIR(green));


    wattron(wwin2,COLOR_PAIR(yellow));
    waddstr(wwin2,"###   ### ###### #####   ## ##   ## ###   ###\n");
    waddstr(wwin2,"#### #### ##     #   ##  ## ##   ## #### ####\n");
    waddstr(wwin2,"## ### ## ###### #    ## ## ##   ## ## ### ##\n");
    waddstr(wwin2,"##  #  ## ##     #   ##  ## ##   ## ##  #  ##\n");
    waddstr(wwin2,"##     ## ###### #####   ## ####### ##     ##\n");
    wrefresh(wwin2);
    wattroff(wwin2,COLOR_PAIR(yellow));


    wattron(wwin3,COLOR_PAIR(red));
    waddstr(wwin3,"##   ## ####### ######  #####\n");
    waddstr(wwin3,"##   ## ##   ## ##   ## #   ##\n");
    waddstr(wwin3,"####### ####### ######  #    ##\n");
    waddstr(wwin3,"##   ## ##   ## ##  ##  #   ##\n");
    waddstr(wwin3,"##   ## ##   ## ##   ## #####\n");
    wrefresh(wwin3);
    wattroff(wwin3,COLOR_PAIR(red));
    std::this_thread::sleep_for(std::chrono::milliseconds(400));
  }
}

  void tuto(){
    clear();
    refresh();
}

  void about(){
    clear();
    refresh();
}

  void arrow(int y,int x,int jb,int e,int v1,int v2,
  int v3,int v4,int v5,int v6,int v7,int v8,int v9,int v10,
  int v11,int v12,int v13,int v14,int v15,int v16,int v17,int v18,int p){
/////////////PRINTANDO ARROW DO LADO DAS CARTAS/////////////////////////////////
    int h,w;
    if(jb==0){
      if(p==1){
          if(e==1){
            getmaxyx(stdscr,h,w);
            cardealer(0,0,h/6,w/6,v1);
            cardealer(0,0,h/6,w/2.3,v2);
            cardealer(0,0,h/6,w/1.4,v3);
            cardealer(0,0,h/2,w/6,v4);
            cardealer(0,0,h/2,w/2.3,v5);
            cardealer(0,0,h/2,w/1.4,v6);
          WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
          waddch(wwin,ACS_RARROW);
          wrefresh(wwin);
          delwin(wwin);
          }
          else if(e==2){
              getmaxyx(stdscr,h,w);
              cardealer(0,0,h/6,w/6,v1);
              cardealer(0,0,h/6,w/2.3,v2);
              cardealer(0,0,h/6,w/1.4,v3);
              cardealer(0,0,h/2,w/6,v4);
              cardealer(0,0,h/2,w/2.3,v5);
              cardealer(0,0,h/2,w/1.4,v6);
            WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
            waddch(wwin,ACS_RARROW);
            wrefresh(wwin);
            delwin(wwin);
            }
          else if(e==3){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/6,w/6,v1);
          cardealer(0,0,h/6,w/2.3,v2);
          cardealer(0,0,h/6,w/1.4,v3);
          cardealer(0,0,h/2,w/6,v4);
          cardealer(0,0,h/2,w/2.3,v5);
          cardealer(0,0,h/2,w/1.4,v6);
        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
        }
          else if(e==4){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/6,w/6,v1);
          cardealer(0,0,h/6,w/2.3,v2);
          cardealer(0,0,h/6,w/1.4,v3);
          cardealer(0,0,h/2,w/6,v4);
          cardealer(0,0,h/2,w/2.3,v5);
          cardealer(0,0,h/2,w/1.4,v6);
        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
        }
          else if(e==5){
            getmaxyx(stdscr,h,w);
            cardealer(0,0,h/6,w/6,v1);
            cardealer(0,0,h/6,w/2.3,v2);
            cardealer(0,0,h/6,w/1.4,v3);
            cardealer(0,0,h/2,w/6,v4);
            cardealer(0,0,h/2,w/2.3,v5);
            cardealer(0,0,h/2,w/1.4,v6);
          WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
          waddch(wwin,ACS_RARROW);
          wrefresh(wwin);
          delwin(wwin);
      }
          else if(e==6){
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/6,w/6,v1);
        cardealer(0,0,h/6,w/2.3,v2);
        cardealer(0,0,h/6,w/1.4,v3);
        cardealer(0,0,h/2,w/6,v4);
        cardealer(0,0,h/2,w/2.3,v5);
        cardealer(0,0,h/2,w/1.4,v6);
        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
        }

        else{
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/6,w/6,13);
        cardealer(0,0,h/6,w/2.3,13);
        cardealer(0,0,h/6,w/1.4,13);
        cardealer(0,0,h/2,w/6,13);
        cardealer(0,0,h/2,w/2.3,13);
        cardealer(0,0,h/2,w/1.4,13);
      WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
      wclear(wwin);
      waddch(wwin,ACS_RARROW);
      wrefresh(wwin);
      delwin(wwin);
      }

      }
      else if(p==2){
          if(e==1){
            getmaxyx(stdscr,h,w);
            cardealer(0,0,h/12,w/5,v1);
            cardealer(0,0,h/12,w/2.85,v2);
            cardealer(0,0,h/12,w/2,v3);
            cardealer(0,0,h/12,w/1.54,v4);
            cardealer(0,0,h/2.7,w/5,v5);
            cardealer(0,0,h/2.7,w/2.85,v6);
            cardealer(0,0,h/2.7,w/2,v7);
            cardealer(0,0,h/2.7,w/1.54,v8);
            cardealer(0,0,h/1.5,w/5,v9);
            cardealer(0,0,h/1.5,w/2.85,v10);
            cardealer(0,0,h/1.5,w/2,v11);
            cardealer(0,0,h/1.5,w/1.54,v12);
              WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
              waddch(wwin,ACS_RARROW);
              wrefresh(wwin);
              delwin(wwin);
              }
          else if(e==2){
              getmaxyx(stdscr,h,w);
              cardealer(0,0,h/12,w/5,v1);
              cardealer(0,0,h/12,w/2.85,v2);
              cardealer(0,0,h/12,w/2,v3);
              cardealer(0,0,h/12,w/1.54,v4);
              cardealer(0,0,h/2.7,w/5,v5);
              cardealer(0,0,h/2.7,w/2.85,v6);
              cardealer(0,0,h/2.7,w/2,v7);
              cardealer(0,0,h/2.7,w/1.54,v8);
              cardealer(0,0,h/1.5,w/5,v9);
              cardealer(0,0,h/1.5,w/2.85,v10);
              cardealer(0,0,h/1.5,w/2,v11);
              cardealer(0,0,h/1.5,w/1.54,v12);

            WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
            waddch(wwin,ACS_RARROW);
            wrefresh(wwin);
            delwin(wwin);
            }
          else if(e==3){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,v1);
          cardealer(0,0,h/12,w/2.85,v2);
          cardealer(0,0,h/12,w/2,v3);
          cardealer(0,0,h/12,w/1.54,v4);
          cardealer(0,0,h/2.7,w/5,v5);
          cardealer(0,0,h/2.7,w/2.85,v6);
          cardealer(0,0,h/2.7,w/2,v7);
          cardealer(0,0,h/2.7,w/1.54,v8);
          cardealer(0,0,h/1.5,w/5,v9);
          cardealer(0,0,h/1.5,w/2.85,v10);
          cardealer(0,0,h/1.5,w/2,v11);
          cardealer(0,0,h/1.5,w/1.54,v12);

        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
        }
          else if(e==4){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,v1);
          cardealer(0,0,h/12,w/2.85,v2);
          cardealer(0,0,h/12,w/2,v3);
          cardealer(0,0,h/12,w/1.54,v4);
          cardealer(0,0,h/2.7,w/5,v5);
          cardealer(0,0,h/2.7,w/2.85,v6);
          cardealer(0,0,h/2.7,w/2,v7);
          cardealer(0,0,h/2.7,w/1.54,v8);
          cardealer(0,0,h/1.5,w/5,v9);
          cardealer(0,0,h/1.5,w/2.85,v10);
          cardealer(0,0,h/1.5,w/2,v11);
          cardealer(0,0,h/1.5,w/1.54,v12);
          addstr("ENTROO");
          refresh();
        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
        }
          else if(e==5){
            getmaxyx(stdscr,h,w);
            cardealer(0,0,h/12,w/5,v1);
            cardealer(0,0,h/12,w/2.85,v2);
            cardealer(0,0,h/12,w/2,v3);
            cardealer(0,0,h/12,w/1.54,v4);
            cardealer(0,0,h/2.7,w/5,v5);
            cardealer(0,0,h/2.7,w/2.85,v6);
            cardealer(0,0,h/2.7,w/2,v7);
            cardealer(0,0,h/2.7,w/1.54,v8);
            cardealer(0,0,h/1.5,w/5,v9);
            cardealer(0,0,h/1.5,w/2.85,v10);
            cardealer(0,0,h/1.5,w/2,v11);
            cardealer(0,0,h/1.5,w/1.54,v12);

          WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
          waddch(wwin,ACS_RARROW);
          wrefresh(wwin);
          delwin(wwin);
      }
          else if(e==6){
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/12,w/5,v1);
        cardealer(0,0,h/12,w/2.85,v2);
        cardealer(0,0,h/12,w/2,v3);
        cardealer(0,0,h/12,w/1.54,v4);
        cardealer(0,0,h/2.7,w/5,v5);
        cardealer(0,0,h/2.7,w/2.85,v6);
        cardealer(0,0,h/2.7,w/2,v7);
        cardealer(0,0,h/2.7,w/1.54,v8);
        cardealer(0,0,h/1.5,w/5,v9);
        cardealer(0,0,h/1.5,w/2.85,v10);
        cardealer(0,0,h/1.5,w/2,v11);
        cardealer(0,0,h/1.5,w/1.54,v12);

        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
        }
          else if(e==7){
            getmaxyx(stdscr,h,w);
            cardealer(0,0,h/12,w/5,v1);
            cardealer(0,0,h/12,w/2.85,v2);
            cardealer(0,0,h/12,w/2,v3);
            cardealer(0,0,h/12,w/1.54,v4);
            cardealer(0,0,h/2.7,w/5,v5);
            cardealer(0,0,h/2.7,w/2.85,v6);
            cardealer(0,0,h/2.7,w/2,v7);
            cardealer(0,0,h/2.7,w/1.54,v8);
            cardealer(0,0,h/1.5,w/5,v9);
            cardealer(0,0,h/1.5,w/2.85,v10);
            cardealer(0,0,h/1.5,w/2,v11);
            cardealer(0,0,h/1.5,w/1.54,v12);

            WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
            waddch(wwin,ACS_RARROW);
            wrefresh(wwin);
            delwin(wwin);
            }
          else if(e==8){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,v1);
          cardealer(0,0,h/12,w/2.85,v2);
          cardealer(0,0,h/12,w/2,v3);
          cardealer(0,0,h/12,w/1.54,v4);
          cardealer(0,0,h/2.7,w/5,v5);
          cardealer(0,0,h/2.7,w/2.85,v6);
          cardealer(0,0,h/2.7,w/2,v7);
          cardealer(0,0,h/2.7,w/1.54,v8);
          cardealer(0,0,h/1.5,w/5,v9);
          cardealer(0,0,h/1.5,w/2.85,v10);
          cardealer(0,0,h/1.5,w/2,v11);
          cardealer(0,0,h/1.5,w/1.54,v12);

          WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
          waddch(wwin,ACS_RARROW);
          wrefresh(wwin);
          delwin(wwin);
  }
          else if(e==9){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,v1);
          cardealer(0,0,h/12,w/2.85,v2);
          cardealer(0,0,h/12,w/2,v3);
          cardealer(0,0,h/12,w/1.54,v4);
          cardealer(0,0,h/2.7,w/5,v5);
          cardealer(0,0,h/2.7,w/2.85,v6);
          cardealer(0,0,h/2.7,w/2,v7);
          cardealer(0,0,h/2.7,w/1.54,v8);
          cardealer(0,0,h/1.5,w/5,v9);
          cardealer(0,0,h/1.5,w/2.85,v10);
          cardealer(0,0,h/1.5,w/2,v11);
          cardealer(0,0,h/1.5,w/1.54,v12);

          WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
          waddch(wwin,ACS_RARROW);
          wrefresh(wwin);
          delwin(wwin);
  }
          else if(e==10){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,v1);
          cardealer(0,0,h/12,w/2.85,v2);
          cardealer(0,0,h/12,w/2,v3);
          cardealer(0,0,h/12,w/1.54,v4);
          cardealer(0,0,h/2.7,w/5,v5);
          cardealer(0,0,h/2.7,w/2.85,v6);
          cardealer(0,0,h/2.7,w/2,v7);
          cardealer(0,0,h/2.7,w/1.54,v8);
          cardealer(0,0,h/1.5,w/5,v9);
          cardealer(0,0,h/1.5,w/2.85,v10);
          cardealer(0,0,h/1.5,w/2,v11);
          cardealer(0,0,h/1.5,w/1.54,v12);

          WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
          waddch(wwin,ACS_RARROW);
          wrefresh(wwin);
          delwin(wwin);
  }
          else if(e==11){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,v1);
          cardealer(0,0,h/12,w/2.85,v2);
          cardealer(0,0,h/12,w/2,v3);
          cardealer(0,0,h/12,w/1.54,v4);
          cardealer(0,0,h/2.7,w/5,v5);
          cardealer(0,0,h/2.7,w/2.85,v6);
          cardealer(0,0,h/2.7,w/2,v7);
          cardealer(0,0,h/2.7,w/1.54,v8);
          cardealer(0,0,h/1.5,w/5,v9);
          cardealer(0,0,h/1.5,w/2.85,v10);
          cardealer(0,0,h/1.5,w/2,v11);
          cardealer(0,0,h/1.5,w/1.54,v12);

          WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
          waddch(wwin,ACS_RARROW);
          wrefresh(wwin);
          delwin(wwin);
    }
          else if(e==12){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,v1);
          cardealer(0,0,h/12,w/2.85,v2);
          cardealer(0,0,h/12,w/2,v3);
          cardealer(0,0,h/12,w/1.54,v4);
          cardealer(0,0,h/2.7,w/5,v5);
          cardealer(0,0,h/2.7,w/2.85,v6);
          cardealer(0,0,h/2.7,w/2,v7);
          cardealer(0,0,h/2.7,w/1.54,v8);
          cardealer(0,0,h/1.5,w/5,v9);
          cardealer(0,0,h/1.5,w/2.85,v10);
          cardealer(0,0,h/1.5,w/2,v11);
          cardealer(0,0,h/1.5,w/1.54,v12);

    WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
    waddch(wwin,ACS_RARROW);
    wrefresh(wwin);
    delwin(wwin);
  }
          else {
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,13);
          cardealer(0,0,h/12,w/2.85,13);
          cardealer(0,0,h/12,w/2,13);
          cardealer(0,0,h/12,w/1.54,13);
          cardealer(0,0,h/2.7,w/5,13);
          cardealer(0,0,h/2.7,w/2.85,13);
          cardealer(0,0,h/2.7,w/2,13);
          cardealer(0,0,h/2.7,w/1.54,13);
          cardealer(0,0,h/1.5,w/5,13);
          cardealer(0,0,h/1.5,w/2.85,13);
          cardealer(0,0,h/1.5,w/2,13);
          cardealer(0,0,h/1.5,w/1.54,13);

            WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
            waddch(wwin,ACS_RARROW);
            wrefresh(wwin);
            delwin(wwin);
          }
      }
      else if(p==3){
        if(e==1){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/20,v1);
          cardealer(0,0,h/12,w/5,v2);
          cardealer(0,0,h/12,w/2.85,v3);
          cardealer(0,0,h/12,w/2,v4);
          cardealer(0,0,h/12,w/1.54,v5);
          cardealer(0,0,h/12,w/1.25,v6);
          cardealer(0,0,h/2.7,w/20,v7);
          cardealer(0,0,h/2.7,w/5,v8);
          cardealer(0,0,h/2.7,w/2.85,v9);
          cardealer(0,0,h/2.7,w/2,v10);
          cardealer(0,0,h/2.7,w/1.54,v11);
          cardealer(0,0,h/2.7,w/1.25,v12);
          cardealer(0,0,h/1.5,w/20,v13);
          cardealer(0,0,h/1.5,w/5,v14);
          cardealer(0,0,h/1.5,w/2.85,v15);
          cardealer(0,0,h/1.5,w/2,v16);
          cardealer(0,0,h/1.5,w/1.54,v17);
          cardealer(0,0,h/1.5,w/1.25,v18);
            WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
            waddch(wwin,ACS_RARROW);
            wrefresh(wwin);
            delwin(wwin);
            }
        /*else if(e==2){

            getmaxyx(stdscr,h,w);
            cardealer(0,0,h/12,w/5,v1);
            cardealer(0,0,h/12,w/2.85,v2);
            cardealer(0,0,h/12,w/2,v3);
            cardealer(0,0,h/12,w/1.54,v4);
            cardealer(0,0,h/2.7,w/5,v5);
            cardealer(0,0,h/2.7,w/2.85,v6);
            cardealer(0,0,h/2.7,w/2,v7);
            cardealer(0,0,h/2.7,w/1.54,v8);
            cardealer(0,0,h/1.5,w/5,v9);
            cardealer(0,0,h/1.5,w/2.85,v10);
            cardealer(0,0,h/1.5,w/2,v11);
            cardealer(0,0,h/1.5,w/1.54,v12);

          WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
          waddch(wwin,ACS_RARROW);
          wrefresh(wwin);
          delwin(wwin);
          }
        else if(e==3){
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/12,w/5,v1);
        cardealer(0,0,h/12,w/2.85,v2);
        cardealer(0,0,h/12,w/2,v3);
        cardealer(0,0,h/12,w/1.54,v4);
        cardealer(0,0,h/2.7,w/5,v5);
        cardealer(0,0,h/2.7,w/2.85,v6);
        cardealer(0,0,h/2.7,w/2,v7);
        cardealer(0,0,h/2.7,w/1.54,v8);
        cardealer(0,0,h/1.5,w/5,v9);
        cardealer(0,0,h/1.5,w/2.85,v10);
        cardealer(0,0,h/1.5,w/2,v11);
        cardealer(0,0,h/1.5,w/1.54,v12);

      WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
      waddch(wwin,ACS_RARROW);
      wrefresh(wwin);
      delwin(wwin);
      }
        else if(e==4){
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/12,w/5,v1);
        cardealer(0,0,h/12,w/2.85,v2);
        cardealer(0,0,h/12,w/2,v3);
        cardealer(0,0,h/12,w/1.54,v4);
        cardealer(0,0,h/2.7,w/5,v5);
        cardealer(0,0,h/2.7,w/2.85,v6);
        cardealer(0,0,h/2.7,w/2,v7);
        cardealer(0,0,h/2.7,w/1.54,v8);
        cardealer(0,0,h/1.5,w/5,v9);
        cardealer(0,0,h/1.5,w/2.85,v10);
        cardealer(0,0,h/1.5,w/2,v11);
        cardealer(0,0,h/1.5,w/1.54,v12);
        addstr("ENTROO");
        refresh();
      WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
      waddch(wwin,ACS_RARROW);
      wrefresh(wwin);
      delwin(wwin);
      }
        else if(e==5){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,v1);
          cardealer(0,0,h/12,w/2.85,v2);
          cardealer(0,0,h/12,w/2,v3);
          cardealer(0,0,h/12,w/1.54,v4);
          cardealer(0,0,h/2.7,w/5,v5);
          cardealer(0,0,h/2.7,w/2.85,v6);
          cardealer(0,0,h/2.7,w/2,v7);
          cardealer(0,0,h/2.7,w/1.54,v8);
          cardealer(0,0,h/1.5,w/5,v9);
          cardealer(0,0,h/1.5,w/2.85,v10);
          cardealer(0,0,h/1.5,w/2,v11);
          cardealer(0,0,h/1.5,w/1.54,v12);

        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
    }
        else if(e==6){
      getmaxyx(stdscr,h,w);
      cardealer(0,0,h/12,w/5,v1);
      cardealer(0,0,h/12,w/2.85,v2);
      cardealer(0,0,h/12,w/2,v3);
      cardealer(0,0,h/12,w/1.54,v4);
      cardealer(0,0,h/2.7,w/5,v5);
      cardealer(0,0,h/2.7,w/2.85,v6);
      cardealer(0,0,h/2.7,w/2,v7);
      cardealer(0,0,h/2.7,w/1.54,v8);
      cardealer(0,0,h/1.5,w/5,v9);
      cardealer(0,0,h/1.5,w/2.85,v10);
      cardealer(0,0,h/1.5,w/2,v11);
      cardealer(0,0,h/1.5,w/1.54,v12);

      WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
      waddch(wwin,ACS_RARROW);
      wrefresh(wwin);
      delwin(wwin);
      }
        else if(e==7){
          getmaxyx(stdscr,h,w);
          cardealer(0,0,h/12,w/5,v1);
          cardealer(0,0,h/12,w/2.85,v2);
          cardealer(0,0,h/12,w/2,v3);
          cardealer(0,0,h/12,w/1.54,v4);
          cardealer(0,0,h/2.7,w/5,v5);
          cardealer(0,0,h/2.7,w/2.85,v6);
          cardealer(0,0,h/2.7,w/2,v7);
          cardealer(0,0,h/2.7,w/1.54,v8);
          cardealer(0,0,h/1.5,w/5,v9);
          cardealer(0,0,h/1.5,w/2.85,v10);
          cardealer(0,0,h/1.5,w/2,v11);
          cardealer(0,0,h/1.5,w/1.54,v12);

          WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
          waddch(wwin,ACS_RARROW);
          wrefresh(wwin);
          delwin(wwin);
          }
        else if(e==8){
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/12,w/5,v1);
        cardealer(0,0,h/12,w/2.85,v2);
        cardealer(0,0,h/12,w/2,v3);
        cardealer(0,0,h/12,w/1.54,v4);
        cardealer(0,0,h/2.7,w/5,v5);
        cardealer(0,0,h/2.7,w/2.85,v6);
        cardealer(0,0,h/2.7,w/2,v7);
        cardealer(0,0,h/2.7,w/1.54,v8);
        cardealer(0,0,h/1.5,w/5,v9);
        cardealer(0,0,h/1.5,w/2.85,v10);
        cardealer(0,0,h/1.5,w/2,v11);
        cardealer(0,0,h/1.5,w/1.54,v12);

        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
  }
        else if(e==9){
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/12,w/5,v1);
        cardealer(0,0,h/12,w/2.85,v2);
        cardealer(0,0,h/12,w/2,v3);
        cardealer(0,0,h/12,w/1.54,v4);
        cardealer(0,0,h/2.7,w/5,v5);
        cardealer(0,0,h/2.7,w/2.85,v6);
        cardealer(0,0,h/2.7,w/2,v7);
        cardealer(0,0,h/2.7,w/1.54,v8);
        cardealer(0,0,h/1.5,w/5,v9);
        cardealer(0,0,h/1.5,w/2.85,v10);
        cardealer(0,0,h/1.5,w/2,v11);
        cardealer(0,0,h/1.5,w/1.54,v12);

        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
  }
        else if(e==10){
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/12,w/5,v1);
        cardealer(0,0,h/12,w/2.85,v2);
        cardealer(0,0,h/12,w/2,v3);
        cardealer(0,0,h/12,w/1.54,v4);
        cardealer(0,0,h/2.7,w/5,v5);
        cardealer(0,0,h/2.7,w/2.85,v6);
        cardealer(0,0,h/2.7,w/2,v7);
        cardealer(0,0,h/2.7,w/1.54,v8);
        cardealer(0,0,h/1.5,w/5,v9);
        cardealer(0,0,h/1.5,w/2.85,v10);
        cardealer(0,0,h/1.5,w/2,v11);
        cardealer(0,0,h/1.5,w/1.54,v12);

        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
  }
        else if(e==11){
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/12,w/5,v1);
        cardealer(0,0,h/12,w/2.85,v2);
        cardealer(0,0,h/12,w/2,v3);
        cardealer(0,0,h/12,w/1.54,v4);
        cardealer(0,0,h/2.7,w/5,v5);
        cardealer(0,0,h/2.7,w/2.85,v6);
        cardealer(0,0,h/2.7,w/2,v7);
        cardealer(0,0,h/2.7,w/1.54,v8);
        cardealer(0,0,h/1.5,w/5,v9);
        cardealer(0,0,h/1.5,w/2.85,v10);
        cardealer(0,0,h/1.5,w/2,v11);
        cardealer(0,0,h/1.5,w/1.54,v12);

        WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
        waddch(wwin,ACS_RARROW);
        wrefresh(wwin);
        delwin(wwin);
  }
        else if(e==12){
        getmaxyx(stdscr,h,w);
        cardealer(0,0,h/12,w/5,v1);
        cardealer(0,0,h/12,w/2.85,v2);
        cardealer(0,0,h/12,w/2,v3);
        cardealer(0,0,h/12,w/1.54,v4);
        cardealer(0,0,h/2.7,w/5,v5);
        cardealer(0,0,h/2.7,w/2.85,v6);
        cardealer(0,0,h/2.7,w/2,v7);
        cardealer(0,0,h/2.7,w/1.54,v8);
        cardealer(0,0,h/1.5,w/5,v9);
        cardealer(0,0,h/1.5,w/2.85,v10);
        cardealer(0,0,h/1.5,w/2,v11);
        cardealer(0,0,h/1.5,w/1.54,v12);

  WINDOW*wwin=newwin(h-(h-3),w-(w-3),y,x);
  waddch(wwin,ACS_RARROW);
  wrefresh(wwin);
  delwin(wwin);
}*/
      }
    }
}

  void menu(){
   int x,h,w;
   int l;
   std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    clear();
    refresh();
    WINDOW*bokiz=newwin(0,0,0,0);
    wattron(bokiz,A_BOLD);
    box(bokiz,0,0);
    wattroff(bokiz,A_BOLD);
    wrefresh(bokiz);
    WINDOW*wwin=newwin(8,175,3,50);
   cardealer(20,30,25,110,10);
   std::this_thread::sleep_for(std::chrono::milliseconds(250));
   cardealer(20,30,25,150,11);
   std::this_thread::sleep_for(std::chrono::milliseconds(250));
    wattron(wwin,A_BOLD);
    waddstr(wwin,"       ## ########## ########## ##########      #########   ##########\n");
    waddstr(wwin,"       ## ##      ## ##         ##      ##      ##     ###  ##      ##\n");
    waddstr(wwin,"       ## ##      ## ##         ##      ##      ##      ### ##      ##\n");
    waddstr(wwin,"       ## ##      ## #   ###### ##      ##      ##      ### ##      ##\n");
    waddstr(wwin,"##     ## ##      ## ##      ## ##      ##      ##      ### ##########\n");
    waddstr(wwin,"##     ## ##      ## ##      ## ##      ##      ##     ###  ##      ##\n");
    waddstr(wwin,"######### ########## ########## ##########      #########   ##      ##\n");
    wrefresh(wwin);
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    WINDOW*wwin2=newwin(8,100,11,110);
    wattron(wwin2,A_BOLD);
    waddstr(wwin2,"####       #### ########### ####       #### ########## #######    ##  ##########\n");
    waddstr(wwin2,"#####     ##### #########   #####     ##### ##      ## ##    ##   ##  ##      ##\n");
    waddstr(wwin2,"##  ##   ##  ## #           ##  ##   ##  ## ##      ## ##     ##  ##  ##      ##\n");
    waddstr(wwin2,"##   ## ##   ## #######     ##   ## ##   ## ##      ## ##    ##   ##  ##      ##\n");
    waddstr(wwin2,"##    ###    ## #           ##    ###    ## ##      ## #######    ##  ##########\n");
    waddstr(wwin2,"##     #     ## #########   ##     #     ## ##      ## ##    ##   ##  ##      ##\n");
    waddstr(wwin2,"##           ## ########### ##           ## ########## ##     ##  ##  ##      ##\n");
    wrefresh(wwin2);
    std::this_thread::sleep_for(std::chrono::milliseconds(250));
    WINDOW*wwin3=newwin(10,30,20,10);
    box(wwin3,0,0);
    wmove(wwin3,1,7);
    waddstr(wwin3,"INICIAR");
    wmove(wwin3,4,7);
    waddstr(wwin3,"TUTORIAL");
    wmove(wwin3,7,7);
    waddstr(wwin3,"SOBRE");
    wrefresh(wwin3);
    WINDOW*wwin4=newwin(10,6,20,10);
    box(wwin4,0,0);

    keypad(stdscr,TRUE);
    for(l=0;;){
      if(l==0){
        wmove(wwin4,1,2);
        waddch(wwin4,ACS_RARROW);
        wrefresh(wwin4);
      }
      else if(l==1){
        wmove(wwin4,4,2);
        waddch(wwin4,ACS_RARROW);
        wrefresh(wwin4);
      }
      else if(l==2){
        wmove(wwin4,7,2);
        waddch(wwin4,ACS_RARROW);
        wrefresh(wwin4);
      }
      x=wgetch(stdscr);
      if(x!=ERR && x!=KEY_UP && x!=KEY_DOWN && x!=KEY_LEFT && x!=KEY_RIGHT && x!=10){
        delwin(wwin);
        delwin(wwin2);
        delwin(wwin3);
        delwin(wwin4);
        pausescreen();
      }
      else if(x==KEY_UP && l!=0){
        l--;
      //  addstr("SUBINDO");
        wrefresh(wwin4);
        wclear(wwin4);
        box(wwin4,0,0);
      }
      else if(x==KEY_DOWN && l!=2){
        l++;
      //  addstr("DESCENDO");
        wrefresh(wwin4);
        wclear(wwin4);
        box(wwin4,0,0);
      }
      else if(x==10){
        switch (l) {
          case 0:
          //addstr("enter na 1 opcao");
          clear();
          refresh();
          delwin(wwin);
          delwin(wwin2);
          delwin(wwin3);
          delwin(wwin4);
          diff();
          break;
          case 1:
        //  addstr("enter na 2 opcao");
          clear();
          refresh();
          delwin(wwin);
          delwin(wwin2);
          delwin(wwin3);
          delwin(wwin4);
          tuto();
          break;
          case 2:
        //  addstr("enter na 3 opcao");
          clear();
          refresh();
          delwin(wwin);
          delwin(wwin2);
          delwin(wwin3);
          delwin(wwin4);
          about();
          break;
        }
      }
  }
 }

  void forcerand(int a){
    if(a==1){
    int h,w,x,ox,x2,x3,vx1,vx2,vx3;
    getmaxyx(stdscr,h,w);
    x=rand()%9+1;
    cardealer(h-(h-25),w-(w-50),h/6,w/6,x);
    ::x=x;
    ox=x;
    vx1=x;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    while(1){
    x2=rand()%9+1;
     if(x2==x) {
    }
    else{
      cardealer(h-(h-25),w-(w-50),h/6,w/2.3,x2);
      std::this_thread::sleep_for(std::chrono::milliseconds(100));
      ::x2=x2;
      break;
    }
    }
    vx2=x2;
    while(1){
    x3=rand()%9+1;
    if(x3==x || x3==x2){
    }
    else{
    cardealer(h-(h-25),w-(w-50),h/6,w/1.4,x3);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    ::x3=x3;
    break;
    }
    }
    vx3=x3;

    while(1){
      x=rand()%9+1;
      if(x==ox || x==x2 ||x==x3){
        cardealer(h-(h-25),w-(w-50),h/2,w/6,x);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        ::vx1=x;
        break;
      }
      else{
      }
    }
    ox=x2;
    if(ox==x){
      ox=x3;
    }
        while(1){
          x2=rand()%9+1;
        if(x2!=x && (x2==ox || x2==x3)){
          cardealer(h-(h-25),w-(w-50),h/2,w/2.3,x2);
          std::this_thread::sleep_for(std::chrono::milliseconds(100));
          ::vx2=x2;
          break;
        }
        else {
        }
        }
        x3=rand()%9+1;
        while(1){
          if((x3!=x && x3!=x2) && (x3==vx1 || x3==vx2 || x3==vx3)){
            cardealer(h-(h-25),w-(w-50),h/2,w/1.4,x3);
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            ::vx3=x3;
            break;
          }
          else {
            x3=rand()%9+1;
          }
        }
  std::this_thread::sleep_for(std::chrono::milliseconds(1800));
  }
    else if(a==2){
      int h,w;
      int ox,x,x2,x3,x4,x5,x6;
      int vx1,vx2,vx3,vx4,vx5,vx6;
      getmaxyx(stdscr,h,w);
      //////////////x///////////////////////
      x=rand()%9+1;
        cardealer(0,0,h/12,w/5,x);
          ::x=x;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
      while(1){
        x2=rand()%9+1;
          if(x2!=x){
            cardealer(0,0,h/12,w/2.85,x2);
              ::x2=x2;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x3=rand()%9+1;
          if(x3!=x && x3!=x2){
            cardealer(0,0,h/12,w/2,x3);
              ::x3=x3;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x4=rand()%9+1;
          if(x4!=x && x4!=x2 && x4!=x3 ){
            cardealer(0,0,h/12,w/1.54,x4);
              ::x4=x4;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x5=rand()%9+1;
          if(x5!=x && x5!=x2 && x5!=x3 && x5!=x4){
            cardealer(0,0,h/2.7,w/5,x5);
              ::x5=x5;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
          while(1){
            x6=rand()%9+1;
              if(x6!=x && x6!=x2 && x6!=x3 && x6!=x4 && x6!=x5){
                cardealer(0,0,h/2.7,w/2.85,x6);
                  ::x6=x6;
                    std::this_thread::sleep_for(std::chrono::milliseconds(100));
                      break;
          }
              }

              ////////////vx//////////////////

                  while(1){
                    vx1=rand()%9+1;
                      if(vx1==x || vx1==x2 || vx1==x3 || vx1==x4 || vx1==x5 || vx1==x6){
                        cardealer(0,0,h/2.7,w/2,vx1);
                          ::vx1=vx1;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx2=rand()%9+1;
                      if((vx2==x || vx2==x2 || vx2==x3 || vx2==x4 || vx2==x5 || vx2==x6) && vx2!=vx1){
                        cardealer(0,0,h/2.7,w/1.54,vx2);
                          ::vx2=vx2;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx3=rand()%9+1;
                      if((vx3==x || vx3==x2 || vx3==x3 || vx3==x4 || vx3==x5 || vx3==x6) && vx3!=vx1 && vx3!=vx2 ){
                        cardealer(0,0,h/1.5,w/5,vx3);
                          ::vx3=vx3;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx4=rand()%9+1;
                      if((vx4==x || vx4==x2 || vx4==x3 || vx4==x4 || vx4==x5 || vx4==x6) && vx4!=vx1 && vx4!=vx2 && vx4!=vx3){
                        cardealer(0,0,h/1.5,w/2.85,vx4);
                          ::vx4=vx4;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx5=rand()%9+1;
                      if((vx5==x || vx5==x2 || vx5==x3 || vx5==x4 || vx5==x5 || vx5==x6) && vx5!=vx1 && vx5!=vx2 && vx5!=vx3 && vx5!=vx4){
                        cardealer(0,0,h/1.5,w/2,vx5);
                          ::vx5=vx5;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx6=rand()%9+1;
                      if((vx6==x || vx6==x2 || vx6==x3 || vx6==x4 || vx6==x5 || vx6==x6) && vx6!=vx1 && vx6!=vx2 && vx6!=vx3 && vx6!=vx4 && vx6!=vx5){
                        cardealer(0,0,h/1.5,w/1.54,vx6);
                          ::vx6=vx6;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
    }
    else if(a==3){
      int h,w;
      int x,x2,x3,x4,x5,x6,x7,x8,x9;
      int vx1,vx2,vx3,vx4,vx5,vx6,vx7,vx8,vx9;
      getmaxyx(stdscr,h,w);
      //////////////x///////////////////////
      x=rand()%9+1;
        cardealer(0,0,h/12,w/20,x);
          ::x=x;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
      while(1){
        x2=rand()%9+1;
          if(x2!=x){
            cardealer(0,0,h/12,w/5,x2);
              ::x2=x2;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x3=rand()%9+1;
          if(x3!=x && x3!=x2){
            cardealer(0,0,h/12,w/2.85,x3);
              ::x3=x3;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x4=rand()%9+1;
          if(x4!=x && x4!=x2 && x4!=x3 ){
            cardealer(0,0,h/12,w/2,x4);
              ::x4=x4;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x5=rand()%9+1;
          if(x5!=x && x5!=x2 && x5!=x3 && x5!=x4){
            cardealer(0,0,h/12,w/1.54,x5);
              ::x5=x5;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x6=rand()%9+1;
          if(x6!=x && x6!=x2 && x6!=x3 && x6!=x4 && x6!=x5){
            cardealer(0,0,h/12,w/1.25,x6);
              ::x6=x6;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x7=rand()%9+1;
          if(x7!=x && x7!=x2 && x7!=x3 && x7!=x4 && x7!=x5 && x7!=x6){
            cardealer(0,0,h/2.7,w/20,x7);
              ::x7=x7;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x8=rand()%9+1;
          if(x8!=x && x8!=x2 && x8!=x3 && x8!=x4 && x8!=x5 && x8!=x6 && x8!=x7){
            cardealer(0,0,h/2.7,w/5,x8);
              ::x8=x8;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }
      while(1){
        x9=rand()%9+1;
          if(x9!=x && x9!=x2 && x9!=x3 && x9!=x4 && x9!=x5 &&
            x9!=x6 && x9!=x7 && x9!=x8){
            cardealer(0,0,h/2.7,w/2.85,x9);
              ::x9=x9;
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                  break;
      }
          }

              ////////////vx//////////////////

                  while(1){
                    vx1=rand()%9+1;
                      if(vx1==x || vx1==x2 || vx1==x3 || vx1==x4 || vx1==x5 || vx1==x6 ||
                        vx1==x7 || vx1==x8 || vx1==x9){
                        cardealer(0,0,h/2.7,w/2,vx1);
                          ::vx1=vx1;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx2=rand()%9+1;
                      if((vx2==x || vx2==x2 || vx2==x3 || vx2==x4 || vx2==x5 || vx2==x6 ||
                        vx2==x7 || vx2==x8 || vx2==x9) && vx2!=vx1){
                        cardealer(0,0,h/2.7,w/1.54,vx2);
                          ::vx2=vx2;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx3=rand()%9+1;
                      if((vx3==x || vx3==x2 || vx3==x3 || vx3==x4 || vx3==x5 || vx3==x6 ||
                        vx3==x7 || vx3==x8 || vx3==x9) && vx3!=vx1 && vx3!=vx2){
                        cardealer(0,0,h/2.7,w/1.25,vx3);
                          ::vx3=vx3;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx4=rand()%9+1;
                      if((vx4==x || vx4==x2 || vx4==x3 || vx4==x4 || vx4==x5 || vx4==x6 ||
                        vx4==x7 || vx4==x8 || vx4==x9) && vx4!=vx1 && vx4!=vx2 && vx4!=vx3){
                        cardealer(0,0,h/1.5,w/20,vx4);
                          ::vx4=vx4;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx5=rand()%9+1;
                      if((vx5==x || vx5==x2 || vx5==x3 || vx5==x4 || vx5==x5 || vx5==x6 ||
                        vx5==x7 || vx5==x8 || vx5==x9) && vx5!=vx1 && vx5!=vx2 &&
                        vx5!=vx3 && vx5!=vx4){
                        cardealer(0,0,h/1.5,w/5,vx5);
                          ::vx5=vx5;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx6=rand()%9+1;
                      if((vx6==x || vx6==x2 || vx6==x3 || vx6==x4 || vx6==x5 || vx6==x6 ||
                        vx6==x7 || vx6==x8 || vx6==x9) && x6!=vx1 && vx6!=vx2 &&
                        vx6!=vx3 && vx6!=vx4 && vx6!=vx5){
                        cardealer(0,0,h/1.5,w/2.85,vx6);
                          ::vx6=vx6;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx7=rand()%9+1;
                      if((vx7==x || vx7==x2 || vx7==x3 || vx7==x4 || vx7==x5 || vx7==x6 ||
                        vx7==x7 || vx7==x8 || vx7==x9) && vx7!=vx1 && vx7!=vx2 &&
                        vx7!=vx3 && vx7!=vx4 && vx7!=vx5 && vx7!=vx6){
                        cardealer(0,0,h/1.5,w/2,vx7);
                          ::vx7=vx7;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx8=rand()%9+1;
                      if((vx8==x || vx8==x2 || vx8==x3 || vx8==x4 || vx8==x5 || vx8==x6 ||
                        vx8==x7 || vx8==x8 || vx8==x9) && vx8!=vx1 && vx8!=vx2 &&
                        vx8!=vx3 && vx8!=vx4 && vx8!=vx5 && vx8!=vx6 && vx8!=vx7){
                        cardealer(0,0,h/1.5,w/1.54,vx8);
                          ::vx8=vx8;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
                  while(1){
                    vx9=rand()%9+1;
                      if((vx9==x || vx9==x2 || vx9==x3 || vx9==x4 || vx9==x5 || vx9==x6 ||
                        vx9==x7 || vx9==x8 || vx9==x9) && vx9!=vx1 && vx9!=vx2 &&
                        vx9!=vx3 && vx9!=vx4 && vx9!=vx5 && vx9!=vx6 && vx9!=vx7 &&
                        vx9!=vx8){
                        cardealer(0,0,h/1.5,w/1.25,vx9);
                          ::vx9=vx9;
                            std::this_thread::sleep_for(std::chrono::milliseconds(100));
                              break;
                  }
                      }
    }
  }

  void gamelegit(int a){
    int scori;
    int h,w,x,x2,z,z2,z3,p,y,b,j,o,cod=13,pos;
    int v1=13,v2=13,v3=13,v4=13,v5=13,v6=13,
    v7=13,v8=13,v9=13,v10=13,v11=13,v12=13,
    v13=13,v14=13,v15=13,v16=13,v17=13,v18=13;
      attron(A_BOLD); box(stdscr,0,0); attroff(A_BOLD);refresh();
      getmaxyx(stdscr,h,w);
///////////////PRINTANDO OS NUMEROS DO COUNTDOWN NA TELA//////////////////////
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,1);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,2);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,3);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        clear(); refresh();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

      switch (a) {
        case 1:
        clear();
        refresh();
        forcerand(1);
        clear();
        refresh();

          cardealer(0,0,h/6,w/6,13);
          cardealer(0,0,h/6,w/2.3,13);
          cardealer(0,0,h/6,w/1.4,13);
          cardealer(0,0,h/2,w/6,13);
          cardealer(0,0,h/2,w/2.3,13);
          cardealer(0,0,h/2,w/1.4,13);

            keypad(stdscr,TRUE);
            for(z=0,j=0,b=0;;){
               if(z2==3){
                  arrow((h/2)+7,(w/6)-3,b,z2+1,v1,v2,v3,v4,v5,v6,
                  0,0,0,0,0,0,0,0,0,0,0,0,1);
                  j=0;
                  b=1;
                }
                else if(z2==4){
                  arrow((h/2)+7,(w/2.3)-3,j,z2+1,v1,v2,v3,v4,v5,v6,
                  0,0,0,0,0,0,0,0,0,0,0,0,1);
                  b=0;
                  j=1;
                }
                else if(z2==5){
                  arrow((h/2)+7,(w/1.4)-3,b,z2+1,v1,v2,v3,v4,v5,v6,
                  0,0,0,0,0,0,0,0,0,0,0,0,1);
                  j=0;
                  b=1;
                }
                else if(z==0){
                  arrow((h/6)+7,(w/6)-3,j,z+1,v1,v2,v3,v4,v5,v6,
                  0,0,0,0,0,0,0,0,0,0,0,0,1);
                  j=1;
                  b=0;
                }
                else if(z==1){
                  arrow((h/6)+7,(w/2.3)-3,b,z+1,v1,v2,v3,v4,v5,v6,
                  0,0,0,0,0,0,0,0,0,0,0,0,1);
                  j=0;
                  b=1;
                }
                else if(z==2){
                  arrow((h/6)+7,(w/1.4)-3,j,z+1,v1,v2,v3,v4,v5,v6,
                  0,0,0,0,0,0,0,0,0,0,0,0,1);
                  b=0;
                  j=1;
                }
                  p=wgetch(stdscr);
                    if(p!=ERR && p!=KEY_UP && p!=KEY_DOWN && p!=KEY_LEFT && p!=KEY_RIGHT && p!=10){
                      pausescreen();
                    }
                    else if(p==KEY_LEFT && (z!=0 && z!=3)){
                      z--;
                      z2--;
                    }
                    else if(p==KEY_RIGHT && (z!=2 && z!=5)){
                      z++;
                      z2++;
                    }
                    else if(p==KEY_UP && (((z!=0 && z!=1 && z!=2)||(z2==3 || z2==4 || z2==5)))){
                      z2=(z-3);
                    }
                    else if(p==KEY_DOWN && ((z!=3 && z!=4 && z!=5)||((z2==0 || z2==1 || z2==2)))){
                      z2=(z+3);
                    }
                    if(p==10){

                        if(z==0 && z2!=3){
                          if(o==2){
                            if(pos!=1){
                              clear();
                              refresh();
                              numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,5);
                              std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                              scori-=2;
                              cardealer(0,0,h/6,w/6,v1);
                              cardealer(0,0,h/6,w/2.3,v2);
                              cardealer(0,0,h/6,w/1.4,v3);
                              cardealer(0,0,h/2,w/6,v4);
                              cardealer(0,0,h/2,w/2.3,v5);
                              cardealer(0,0,h/2,w/1.4,v6);
                            }
                            o=0;
                            cod=0;
                          }
                        cardealer(0,0,h/6,w/6,::x);
                        cardealer(0,0,h/6,w/2.3,v2);
                        cardealer(0,0,h/6,w/1.4,v3);
                        cardealer(0,0,h/2,w/6,v4);
                        cardealer(0,0,h/2,w/2.3,v5);
                        cardealer(0,0,h/2,w/1.4,v6);
                        if(cod==::x){
                          clear();
                          refresh();
                          numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,4);
                          std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                          if(::vx1==::x){
                            cardealer(0,0,h/6,w/6,::x);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,::vx1);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v1=::x;
                            v4=::vx1;
                          }
                          else if(::vx2==::x){
                            cardealer(0,0,h/6,w/6,::x);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,::vx2);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v1=::x;
                            v5=::vx2;
                          }
                          else if(::vx3==::x){
                            cardealer(0,0,h/6,w/6,::x);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,::vx3);
                            v1=::x;
                            v6=::vx3;
                          }
                          scori+=1;
                        }
                        pos=1;
                        cod=::x;
                        o++;
                        }
                        else if(z==1 && z2!=4){
                          if(o==2){
                            if(pos!=2){
                              clear();
                              refresh();
                              numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,5);
                              std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                              scori-=2;
                              cardealer(0,0,h/6,w/6,v1);
                              cardealer(0,0,h/6,w/2.3,v2);
                              cardealer(0,0,h/6,w/1.4,v3);
                              cardealer(0,0,h/2,w/6,v4);
                              cardealer(0,0,h/2,w/2.3,v5);
                              cardealer(0,0,h/2,w/1.4,v6);
                            }
                            o=0;
                            cod=0;
                          }
                        cardealer(0,0,h/6,w/6,v1);
                        cardealer(0,0,h/6,w/2.3,::x2);
                        cardealer(0,0,h/6,w/1.4,v3);
                        cardealer(0,0,h/2,w/6,v4);
                        cardealer(0,0,h/2,w/2.3,v5);
                        cardealer(0,0,h/2,w/1.4,v6);
                        if(cod==::x2){
                          clear();
                          refresh();
                          numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,4);
                          std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                          if(::vx1==::x2){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,::x2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,::vx1);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v2=::x2;
                            v4=::vx1;
                          }
                          else if(::vx2==::x2){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,::x2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,::vx2);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v2=::x2;
                            v5=::vx2;
                          }
                          else if(::vx3==::x2){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,::x2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,::vx3);
                            v2=::x2;
                            v6=::vx3;
                          }
                          scori+=1;
                        }
                        pos=2;
                        cod=::x2;
                        o++;
                        }
                        else if(z==2 && z2!=5){
                          if(o==2){
                            if(pos!=3){
                              clear();
                              refresh();
                              numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,5);
                              std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                              scori-=2;
                              cardealer(0,0,h/6,w/6,v1);
                              cardealer(0,0,h/6,w/2.3,v2);
                              cardealer(0,0,h/6,w/1.4,v3);
                              cardealer(0,0,h/2,w/6,v4);
                              cardealer(0,0,h/2,w/2.3,v5);
                              cardealer(0,0,h/2,w/1.4,v6);
                            }
                            o=0;
                            cod=0;
                          }
                        cardealer(0,0,h/6,w/6,v1);
                        cardealer(0,0,h/6,w/2.3,v2);
                        cardealer(0,0,h/6,w/1.4,x3);
                        cardealer(0,0,h/2,w/6,v4);
                        cardealer(0,0,h/2,w/2.3,v5);
                        cardealer(0,0,h/2,w/1.4,v6);
                        if(cod==::x3){
                          clear();
                          refresh();
                          numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,4);
                          std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                          if(::vx1==::x3){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,::x3);
                            cardealer(0,0,h/2,w/6,::vx1);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v3=::x3;
                            v4=::vx1;
                          }
                          else if(::vx2==::x3){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,::x3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,::vx2);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v3=::x3;
                            v5=::vx2;
                          }
                          else if(::vx3==::x3){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,::x3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,::vx3);
                            v3=::x3;
                            v6=::vx3;
                          }
                          scori+=1;
                        }
                        pos=3;
                        cod=::x3;
                        o++;
                        }
                        else if(z2==3){
                          if(o==2){
                            if(pos!=4){
                              clear();
                              refresh();
                              numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,5);
                              std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                              scori-=2;
                              cardealer(0,0,h/6,w/6,v1);
                              cardealer(0,0,h/6,w/2.3,v2);
                              cardealer(0,0,h/6,w/1.4,v3);
                              cardealer(0,0,h/2,w/6,v4);
                              cardealer(0,0,h/2,w/2.3,v5);
                              cardealer(0,0,h/2,w/1.4,v6);
                            }
                            pos=4;
                            o=0;
                            cod=0;
                          }
                        cardealer(0,0,h/6,w/6,v1);
                        cardealer(0,0,h/6,w/2.3,v2);
                        cardealer(0,0,h/6,w/1.4,v3);
                        cardealer(0,0,h/2,w/6,::vx1);
                        cardealer(0,0,h/2,w/2.3,v5);
                        cardealer(0,0,h/2,w/1.4,v6);
                        if(cod==::vx1){
                          clear();
                          refresh();
                          numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,4);
                          std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                          if(::x==::vx1){
                            cardealer(0,0,h/6,w/6,::x);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,::vx1);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v4=::vx1;
                            v1=::x;
                          }
                          else if(::x2==::vx1){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,::x2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,::vx1);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v4=::vx1;
                            v2=::x2;
                          }
                          else if(::x3==::vx1){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,::x3);
                            cardealer(0,0,h/2,w/6,::vx1);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v4=::vx1;
                            v3=::x3;
                          }
                          scori+=1;
                        }
                        cod=::vx1;
                        o++;
                      }
                        else if(z2==4){
                          if(o==2){
                            if(pos!=5){
                              clear();
                              refresh();
                              numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,5);
                              std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                              scori-=2;
                              cardealer(0,0,h/6,w/6,v1);
                              cardealer(0,0,h/6,w/2.3,v2);
                              cardealer(0,0,h/6,w/1.4,v3);
                              cardealer(0,0,h/2,w/6,v4);
                              cardealer(0,0,h/2,w/2.3,v5);
                              cardealer(0,0,h/2,w/1.4,v6);
                            }
                            pos=5;
                            o=0;
                            cod=0;
                          }
                        cardealer(0,0,h/6,w/6,v1);
                        cardealer(0,0,h/6,w/2.3,v2);
                        cardealer(0,0,h/6,w/1.4,v3);
                        cardealer(0,0,h/2,w/6,v4);
                        cardealer(0,0,h/2,w/2.3,::vx2);
                        cardealer(0,0,h/2,w/1.4,v6);
                        if(cod==::vx2){
                          clear();
                          refresh();
                          numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,4);
                          std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                          if(::x==::vx2){
                            cardealer(0,0,h/6,w/6,::x);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,::vx2);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v5=::vx2;
                            v1=::x;
                          }
                          else if(::x2==::vx2){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,::x2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,::vx2);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v5=::vx2;
                            v2=::x2;
                          }
                          else if(::x3==::vx2){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,::x3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,::vx2);
                            cardealer(0,0,h/2,w/1.4,v6);
                            v5=::vx2;
                            v3=::x3;
                          }
                          scori+=1;
                        }
                        o++;
                        cod=::vx2;
                        }
                        else if(z2==5){
                          if(o==2){
                            if(pos!=6){
                              clear();
                              refresh();
                              numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,5);
                              std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                              scori-=2;
                              cardealer(0,0,h/6,w/6,v1);
                              cardealer(0,0,h/6,w/2.3,v2);
                              cardealer(0,0,h/6,w/1.4,v3);
                              cardealer(0,0,h/2,w/6,v4);
                              cardealer(0,0,h/2,w/2.3,v5);
                              cardealer(0,0,h/2,w/1.4,v6);
                            }
                            pos=6;
                            o=0;
                            cod=0;
                          }
                        cardealer(0,0,h/6,w/6,v1);
                        cardealer(0,0,h/6,w/2.3,v2);
                        cardealer(0,0,h/6,w/1.4,v3);
                        cardealer(0,0,h/2,w/6,v4);
                        cardealer(0,0,h/2,w/2.3,v5);
                        cardealer(0,0,h/2,w/1.4,::vx3);
                        if(cod==::vx3){
                          clear();
                          refresh();
                          numberscreen(h-(h-25),w-(w-50),h/2.6,w/2.1,4);
                          std::this_thread::sleep_for(std::chrono::milliseconds(2000));
                          if(::x==::vx3){
                            cardealer(0,0,h/6,w/6,::x);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,::vx3);
                            v6=::vx3;
                            v1=::x;
                          }
                          else if(::x2==::vx3){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,::x2);
                            cardealer(0,0,h/6,w/1.4,v3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,::vx3);
                            v6=::vx3;
                            v2=::x2;
                          }
                          else if(::x3==::vx3){
                            cardealer(0,0,h/6,w/6,v1);
                            cardealer(0,0,h/6,w/2.3,v2);
                            cardealer(0,0,h/6,w/1.4,::x3);
                            cardealer(0,0,h/2,w/6,v4);
                            cardealer(0,0,h/2,w/2.3,v5);
                            cardealer(0,0,h/2,w/1.4,::vx3);
                            v6=::vx3;
                            v3=::x3;
                          }
                          scori+=1;
                        }
                        o++;
                        cod=::vx3;
                      }
                    }
                    if(v1!=13 && v2!=13 && v3!=13 && v4!=13 && v5!=13 && v6!=13){
                      clear();
                      refresh();
                      score();
                      break;
                    }
                  }
        break;
        case 2:
        clear(); refresh();
        forcerand(2); std::this_thread::sleep_for(std::chrono::milliseconds(500));
        clear(); refresh();
/////////////PRINTANDO CARTAS COM INTERROGACAO/////////////////////////////////
          cardealer(0,0,h/12,w/5,13);
          cardealer(0,0,h/12,w/2.85,13);
          cardealer(0,0,h/12,w/2,13);
          cardealer(0,0,h/12,w/1.54,13);
          cardealer(0,0,h/2.7,w/5,13);
          cardealer(0,0,h/2.7,w/2.85,13);
          cardealer(0,0,h/2.7,w/2,13);
          cardealer(0,0,h/2.7,w/1.54,13);
          cardealer(0,0,h/1.5,w/5,13);
          cardealer(0,0,h/1.5,w/2.85,13);
          cardealer(0,0,h/1.5,w/2,13);
          cardealer(0,0,h/1.5,w/1.54,13);
        //  std::this_thread::sleep_for(std::chrono::milliseconds(5000000));
//////////////////////PRINTANDO SETAS E TELA NOVVA//////////////////////////
            keypad(stdscr,TRUE);
            for(z=0,z2=8,z3=0,j=0,b=0;;){
               if(z3==8){
                  arrow(h/1.26,w/5.5,b,z3+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=0;
                  b=1;
                }
                else if(z3==9){
                  arrow(h/1.26,w/3,j,z3+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=1;
                  b=0;
                }
                else if(z3==10){
                  arrow(h/1.26,w/2.05,b,z3+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=0;
                  b=1;
                }
                else if(z3==11){
                  arrow(h/1.26,w/1.57,j,z3+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=1;
                  b=0;
                }
                else if(z2==4){
                  arrow(h/2,w/5.5,j,z2+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=1;
                  b=0;
                }
                else if(z2==5){
                  arrow(h/2,w/3,b,z2+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=0;
                  b=1;
                }
                else if(z2==6){
                  arrow(h/2,w/2.05,j,z2+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);;
                  j=1;
                  b=0;
                }
                else if(z2==7){
                  arrow(h/2,w/1.57,b,z2+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=0;
                  b=1;
                }
                else if(z==0){
                  arrow(h/5,w/5.5,b,z+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=0;
                  b=1;
                }
                else if(z==1){
                  arrow(h/5,w/3,j,z+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=1;
                  b=0;
                }
                else if(z==2){
                  arrow(h/5,w/2.05,b,z+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=0;
                  b=1;
                }
                else if(z==3){
                  arrow(h/5,w/1.57,j,z+1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,0,0,0,0,0,0,2);
                  j=1;
                  b=0;
                }
///////////////////ATIVANDO TECLADO E TROCANDO POSICOES/////////////////////////
                  p=wgetch(stdscr);
                    if(p!=ERR && p!=KEY_UP && p!=KEY_DOWN && p!=KEY_LEFT && p!=KEY_RIGHT && p!=10){
                      pausescreen();
                    }
                    else if(p==KEY_LEFT && (z!=0 && (z2!=0 && z2!=4) && (z3!=8 && z3!=4 && z3!=0))){
                    addstr("ESKERDA");
                      refresh();
                      z--;
                      z2--;
                      z3--;
                    }
                    else if(p==KEY_RIGHT && (z!=3 && (z2!=3 && z2!=7) && (z3!=7 && z3!=11))){
                    addstr("DERETXA");
                    refresh();
                      z++;
                      z2++;
                      z3++;
                    }
                    else if(p==KEY_UP && (z!=0 && z!=1 && z!=2 && z!=3)){
                    addstr("CIMA");
                     refresh();
                      z-=4;
                      z3=z;
                      z2=z;
                    }
                    else if(p==KEY_DOWN && (z3!=8 && z3!=9 && z3!=10 && z3!=11)){
                      addstr("BAXO");
                      refresh();
                      z+=4;
                      z3=z;
                      z2=z;
                    }
////////////////////REGISTRO DO ENTER E MUDANCA DAS CARTAS//////////////////////
                    if(p==10){
                    //  attron(COLOR_PAIR(green));
                        if(z==0 && z2!=4 && z3!=8){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                          cardealer(0,0,h/12,w/5,::x);
                          cardealer(0,0,h/12,w/2.85,v2);
                          cardealer(0,0,h/12,w/2,v3);
                          cardealer(0,0,h/12,w/1.54,v4);
                          cardealer(0,0,h/2.7,w/5,v5);
                          cardealer(0,0,h/2.7,w/2.85,v6);
                          cardealer(0,0,h/2.7,w/2,v7);
                          cardealer(0,0,h/2.7,w/1.54,v8);
                          cardealer(0,0,h/1.5,w/5,v9);
                          cardealer(0,0,h/1.5,w/2.85,v10);
                          cardealer(0,0,h/1.5,w/2,v11);
                          cardealer(0,0,h/1.5,w/1.54,v12);
                        if(cod==::x){
                          if(::vx1==::x){
                            cardealer(0,0,h/12,w/5,::x);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v1=::x;
                            v7=::vx1;
                          }
                          else if(::vx2==::x){
                            cardealer(0,0,h/12,w/5,::x);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v1=::x;
                            v8=::vx2;
                          }
                          else if(::vx3==::x){
                            cardealer(0,0,h/12,w/5,::x);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,::vx3);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v1=::x;
                            v9=::vx3;
                          }
                          else if(::vx4==::x){
                            cardealer(0,0,h/12,w/5,::x);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,::vx4);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v1=::x;
                            v10=::vx4;
                          }
                          else if(::vx5==::x){
                            cardealer(0,0,h/12,w/5,::x);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,::vx5);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v1=::x;
                            v11=::vx5;
                          }
                          else if(::vx6==::x){
                            cardealer(0,0,h/12,w/5,::x);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,::vx3);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,::vx6);
                            v1=::x;
                            v12=::vx6;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                        o++;
                        cod=::x;
                      }
                        else if(z==1 && z2!=5 && z3!=9){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                          cardealer(0,0,h/12,w/5,v1);
                          cardealer(0,0,h/12,w/2.85,::x2);
                          cardealer(0,0,h/12,w/2,v3);
                          cardealer(0,0,h/12,w/1.54,v4);
                          cardealer(0,0,h/2.7,w/5,v5);
                          cardealer(0,0,h/2.7,w/2.85,v6);
                          cardealer(0,0,h/2.7,w/2,v7);
                          cardealer(0,0,h/2.7,w/1.54,v8);
                          cardealer(0,0,h/1.5,w/5,v9);
                          cardealer(0,0,h/1.5,w/2.85,v10);
                          cardealer(0,0,h/1.5,w/2,v11);
                          cardealer(0,0,h/1.5,w/1.54,v12);
                          if(cod==::x2){
                            if(::vx1==::x2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v2=::x2;
                              v7=::vx1;
                            }
                            else if(::vx2==::x2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v2=::x2;
                              v8=::vx2;
                            }
                            else if(::vx3==::x2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,::vx3);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v2=::x2;
                              v9=::vx3;
                            }
                            else if(::vx4==::x2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v2=::x2;
                              v10=::vx4;
                            }
                            else if(::vx5==::x2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v2=::x2;
                              v11=::vx5;
                            }
                            else if(::vx6==::x2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,::vx6);
                              v2=::x2;
                              v12=::vx6;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          o++;
                        cod=::x2;
                      }
                        else if(z==2 && z2!=6 && z3!=10){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                          cardealer(0,0,h/12,w/5,v1);
                          cardealer(0,0,h/12,w/2.85,v2);
                          cardealer(0,0,h/12,w/2,::x3);
                          cardealer(0,0,h/12,w/1.54,v4);
                          cardealer(0,0,h/2.7,w/5,v5);
                          cardealer(0,0,h/2.7,w/2.85,v6);
                          cardealer(0,0,h/2.7,w/2,v7);
                          cardealer(0,0,h/2.7,w/1.54,v8);
                          cardealer(0,0,h/1.5,w/5,v9);
                          cardealer(0,0,h/1.5,w/2.85,v10);
                          cardealer(0,0,h/1.5,w/2,v11);
                          cardealer(0,0,h/1.5,w/1.54,v12);
                          if(cod==::x3){
                            if(::vx1==::x3){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v3=::x3;
                              v7=::vx1;
                            }
                            else if(::vx2==::x3){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v3=::x3;
                              v8=::vx2;
                            }
                            else if(::vx3==::x3){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,::vx3);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v3=::x3;
                              v9=::vx3;
                            }
                            else if(::vx4==::x3){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v3=::x3;
                              v10=::vx4;
                            }
                            else if(::vx5==::x3){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v3=::x3;
                              v11=::vx5;
                            }
                            else if(::vx6==::x3){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,::vx6);
                              v3=::x3;
                              v12=::vx6;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          o++;
                        cod=::x3;

                      }
                        else if(z==3 && z2!=7 && z3!=11){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                          cardealer(0,0,h/12,w/5,v1);
                          cardealer(0,0,h/12,w/2.85,v2);
                          cardealer(0,0,h/12,w/2,v3);
                          cardealer(0,0,h/12,w/1.54,::x4);
                          cardealer(0,0,h/2.7,w/5,v5);
                          cardealer(0,0,h/2.7,w/2.85,v6);
                          cardealer(0,0,h/2.7,w/2,v7);
                          cardealer(0,0,h/2.7,w/1.54,v8);
                          cardealer(0,0,h/1.5,w/5,v9);
                          cardealer(0,0,h/1.5,w/2.85,v10);
                          cardealer(0,0,h/1.5,w/2,v11);
                          cardealer(0,0,h/1.5,w/1.54,v12);
                          if(cod==::x4){
                            if(::vx1==::x4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v4=::x4;
                              v7=::vx1;
                            }
                            else if(::vx2==::x4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v4=::x4;
                              v8=::vx2;
                            }
                            else if(::vx3==::x4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,::vx3);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v4=::x4;
                              v9=::vx3;
                            }
                            else if(::vx4==::x4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v4=::x4;
                              v10=::vx4;
                            }
                            else if(::vx5==::x4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v4=::x4;
                              v11=::vx5;
                            }
                            else if(::vx6==::x4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,::vx6);
                              v4=::x4;
                              v12=::vx6;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          o++;
                        cod=::x4;

                      }
                        else if(z2==4 && z3!=8){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                          cardealer(0,0,h/12,w/5,v1);
                          cardealer(0,0,h/12,w/2.85,v2);
                          cardealer(0,0,h/12,w/2,v3);
                          cardealer(0,0,h/12,w/1.54,v4);
                          cardealer(0,0,h/2.7,w/5,::x5);
                          cardealer(0,0,h/2.7,w/2.85,v6);
                          cardealer(0,0,h/2.7,w/2,v7);
                          cardealer(0,0,h/2.7,w/1.54,v8);
                          cardealer(0,0,h/1.5,w/5,v9);
                          cardealer(0,0,h/1.5,w/2.85,v10);
                          cardealer(0,0,h/1.5,w/2,v11);
                          cardealer(0,0,h/1.5,w/1.54,v12);
                          if(cod==::x5){
                            if(::vx1==::x5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v5=::x5;
                              v7=::vx1;
                            }
                            else if(::vx2==::x5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v5=::x5;
                              v8=::vx2;
                            }
                            else if(::vx3==::x5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,::vx3);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v5=::x5;
                              v9=::vx3;
                            }
                            else if(::vx4==::x5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v5=::x5;
                              v10=::vx4;
                            }
                            else if(::vx5==::x5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                            v5=::x5;
                              v11=::vx5;
                            }
                            else if(::vx6==::x5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,::vx6);
                              v5=::x5;
                              v12=::vx6;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          o++;
                        cod=::x5;

                      }
                        else if(z2==5 && z3!=9){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                          cardealer(0,0,h/12,w/5,v1);
                          cardealer(0,0,h/12,w/2.85,v2);
                          cardealer(0,0,h/12,w/2,v3);
                          cardealer(0,0,h/12,w/1.54,v4);
                          cardealer(0,0,h/2.7,w/5,v5);
                          cardealer(0,0,h/2.7,w/2.85,::x6);
                          cardealer(0,0,h/2.7,w/2,v7);
                          cardealer(0,0,h/2.7,w/1.54,v8);
                          cardealer(0,0,h/1.5,w/5,v9);
                          cardealer(0,0,h/1.5,w/2.85,v10);
                          cardealer(0,0,h/1.5,w/2,v11);
                          cardealer(0,0,h/1.5,w/1.54,v12);
                          if(cod==::x6){
                            if(::vx1==::x6){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v6=::x6;
                              v7=::vx1;
                            }
                            else if(::vx2==::x6){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v6=::x6;;
                              v8=::vx2;
                            }
                            else if(::vx3==::x6){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,::vx3);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v6=::x6;
                              v9=::vx3;
                            }
                            else if(::vx4==::x6){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v6=::x6;
                              v10=::vx4;
                            }
                            else if(::vx5==::x6){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v6=::x6;
                              v11=::vx5;
                            }
                            else if(::vx6==::x6){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,::vx6);
                              v6=::x6;
                              v12=::vx6;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          o++;
                        cod=::x6;

                      }
                        else if(z2==6 && z3!=10){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                          cardealer(0,0,h/12,w/5,v1);
                          cardealer(0,0,h/12,w/2.85,v2);
                          cardealer(0,0,h/12,w/2,v3);
                          cardealer(0,0,h/12,w/1.54,v4);
                          cardealer(0,0,h/2.7,w/5,v5);
                          cardealer(0,0,h/2.7,w/2.85,v6);
                          cardealer(0,0,h/2.7,w/2,::vx1);
                          cardealer(0,0,h/2.7,w/1.54,v8);
                          cardealer(0,0,h/1.5,w/5,v9);
                          cardealer(0,0,h/1.5,w/2.85,v10);
                          cardealer(0,0,h/1.5,w/2,v11);
                          cardealer(0,0,h/1.5,w/1.54,v12);
                          if(cod==::vx1){
                            if(::x==::vx1){
                              cardealer(0,0,h/12,w/5,::x);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v7=::vx1;
                              v1=::x;
                            }
                            else if(::x2==::vx1){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v7=::vx1;
                              v2=::x2;
                            }
                            else if(::x3==::vx1){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v7=::vx1;
                              v3=::x3;
                            }
                            else if(::x4==::vx1){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v7=::vx1;
                              v4=::x4;
                            }
                            else if(::x5==::vx1){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v7=::vx1;
                              v5=::x5;
                            }
                            else if(::x6==::vx1){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v7=::vx1;
                              v6=::x6;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          o++;
                        cod=::vx1;

                      }
                        else if(z2==7 && z3!=11){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                          cardealer(0,0,h/12,w/5,v1);
                          cardealer(0,0,h/12,w/2.85,v2);
                          cardealer(0,0,h/12,w/2,v3);
                          cardealer(0,0,h/12,w/1.54,v4);
                          cardealer(0,0,h/2.7,w/5,v5);
                          cardealer(0,0,h/2.7,w/2.85,v6);
                          cardealer(0,0,h/2.7,w/2,v7);
                          cardealer(0,0,h/2.7,w/1.54,::vx2);
                          cardealer(0,0,h/1.5,w/5,v9);
                          cardealer(0,0,h/1.5,w/2.85,v10);
                          cardealer(0,0,h/1.5,w/2,v11);
                          cardealer(0,0,h/1.5,w/1.54,v12);
                          if(cod==::vx2){
                            if(::x==::vx2){
                              cardealer(0,0,h/12,w/5,::x);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v8=::vx2;
                              v1=::x;
                            }
                            else if(::x2==::vx2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v8=::vx2;;
                              v2=::x2;
                            }
                            else if(::x3==::vx2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v8=::vx2;
                              v3=::x3;
                            }
                            else if(::x4==::vx2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v8=::vx2;
                              v4=::x4;
                            }
                            else if(::x5==::vx2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v8=::vx2;
                              v5=::x5;
                            }
                            else if(::x6==::vx2){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v8=::vx2;
                              v6=::x6;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          o++;
                        cod=::vx2;

                      }
                        else if(z3==8){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                        cardealer(0,0,h/12,w/5,v1);
                        cardealer(0,0,h/12,w/2.85,v2);
                        cardealer(0,0,h/12,w/2,v3);
                        cardealer(0,0,h/12,w/1.54,v4);
                        cardealer(0,0,h/2.7,w/5,v5);
                        cardealer(0,0,h/2.7,w/2.85,v6);
                        cardealer(0,0,h/2.7,w/2,v7);
                        cardealer(0,0,h/2.7,w/1.54,v8);
                        cardealer(0,0,h/1.5,w/5,::vx3);
                        cardealer(0,0,h/1.5,w/2.85,v10);
                        cardealer(0,0,h/1.5,w/2,v11);
                        cardealer(0,0,h/1.5,w/1.54,v12);
                        if(cod==::vx3){
                          if(::x==::vx3){
                            cardealer(0,0,h/12,w/5,::x);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,::vx3);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v9=::vx3;
                            v1=::x;
                          }
                          else if(::x2==::vx3){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,::x2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,::vx3);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v9=::vx3;
                            v2=::x2;
                          }
                          else if(::x3==::vx3){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,::x3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,::vx3);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v9=::vx3;
                            v3=::x3;
                          }
                          else if(::x4==::vx3){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,::x4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,::vx3);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v9=::vx3;
                            v4=::x4;
                          }
                          else if(::x5==::vx3){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,::x5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,::vx3);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v9=::vx3;
                            v5=::x5;
                          }
                          else if(::x6==::vx3){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,::x6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,::vx3);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,v12);
                            v9=::vx3;
                            v6=::x6;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                        o++;
                      cod=::vx3;
                    }
                        else if(z3==9){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                        cardealer(0,0,h/12,w/5,v1);
                        cardealer(0,0,h/12,w/2.85,v2);
                        cardealer(0,0,h/12,w/2,v3);
                        cardealer(0,0,h/12,w/1.54,v4);
                        cardealer(0,0,h/2.7,w/5,v5);
                        cardealer(0,0,h/2.7,w/2.85,v6);
                        cardealer(0,0,h/2.7,w/2,v7);
                        cardealer(0,0,h/2.7,w/1.54,v8);
                        cardealer(0,0,h/1.5,w/5,v9);
                        cardealer(0,0,h/1.5,w/2.85,::vx4);
                        cardealer(0,0,h/1.5,w/2,v11);
                        cardealer(0,0,h/1.5,w/1.54,v12);
                        if(cod==::vx4){
                            if(::x==::vx4){
                              cardealer(0,0,h/12,w/5,::x);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v10=::vx4;
                              v1=::x;
                            }
                            else if(::x2==::vx4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v10=::vx4;
                              v2=::x2;
                            }
                            else if(::x3==::vx4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v10=::vx4;
                              v3=::x3;
                            }
                            else if(::x4==::vx4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v10=::vx4;
                              v4=::x4;
                            }
                            else if(::x5==::vx4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                            v10=::vx4;
                              v5=::x5;
                            }
                            else if(::x6==::vx4){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,::vx4);
                              cardealer(0,0,h/1.5,w/2,v11);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v10=::vx4;
                              v6=::x6;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          o++;
                        cod=::vx4;
                      }
                        else if(z3==10){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                        cardealer(0,0,h/12,w/5,v1);
                        cardealer(0,0,h/12,w/2.85,v2);
                        cardealer(0,0,h/12,w/2,v3);
                        cardealer(0,0,h/12,w/1.54,v4);
                        cardealer(0,0,h/2.7,w/5,v5);
                        cardealer(0,0,h/2.7,w/2.85,v6);
                        cardealer(0,0,h/2.7,w/2,v7);
                        cardealer(0,0,h/2.7,w/1.54,v8);
                        cardealer(0,0,h/1.5,w/5,v9);
                        cardealer(0,0,h/1.5,w/2.85,v10);
                        cardealer(0,0,h/1.5,w/2,::vx5);
                        cardealer(0,0,h/1.5,w/1.54,v12);
                        if(cod==::vx5){
                            if(::x==::vx5){
                              cardealer(0,0,h/12,w/5,::x);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v11=::vx5;
                              v1=::x;
                            }
                            else if(::x2==::vx5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,::x2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v11=::vx5;
                              v2=::x2;
                            }
                            else if(::x3==::vx5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,::x3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v11=::vx5;
                              v3=::x3;
                            }
                            else if(::x4==::vx5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,::x4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                            v11=::vx5;
                              v4=::x4;
                            }
                            else if(::x5==::vx5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,::x5);
                              cardealer(0,0,h/2.7,w/2.85,v6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                            v11=::vx5;
                              v5=::x5;
                            }
                            else if(::x6==::vx5){
                              cardealer(0,0,h/12,w/5,v1);
                              cardealer(0,0,h/12,w/2.85,v2);
                              cardealer(0,0,h/12,w/2,v3);
                              cardealer(0,0,h/12,w/1.54,v4);
                              cardealer(0,0,h/2.7,w/5,v5);
                              cardealer(0,0,h/2.7,w/2.85,::x6);
                              cardealer(0,0,h/2.7,w/2,v7);
                              cardealer(0,0,h/2.7,w/1.54,v8);
                              cardealer(0,0,h/1.5,w/5,v9);
                              cardealer(0,0,h/1.5,w/2.85,v10);
                              cardealer(0,0,h/1.5,w/2,::vx5);
                              cardealer(0,0,h/1.5,w/1.54,v12);
                              v11=::vx5;
                              v6=::x6;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          o++;
                        cod=::vx5;
                      }
                        else if(z3==11){
                          if(o==2){
                            o=0;
                            cod=0;
                          }
                      cardealer(0,0,h/12,w/5,v1);
                      cardealer(0,0,h/12,w/2.85,v2);
                      cardealer(0,0,h/12,w/2,v3);
                      cardealer(0,0,h/12,w/1.54,v4);
                      cardealer(0,0,h/2.7,w/5,v5);
                      cardealer(0,0,h/2.7,w/2.85,v6);
                      cardealer(0,0,h/2.7,w/2,v7);
                      cardealer(0,0,h/2.7,w/1.54,v8);
                      cardealer(0,0,h/1.5,w/5,v9);
                      cardealer(0,0,h/1.5,w/2.85,v10);
                      cardealer(0,0,h/1.5,w/2,v11);
                      cardealer(0,0,h/1.5,w/1.54,::vx6);
                      if(cod==::vx6){
                          if(::x==::vx6){
                            cardealer(0,0,h/12,w/5,::x);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,::vx6);
                            v12=::vx6;
                            v1=::x;
                          }
                          else if(::x2==::vx6){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,::x2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,::vx6);
                              v12=::vx6;
                            v2=::x2;
                          }
                          else if(::x3==::vx6){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,::x3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,::vx6);
                              v12=::vx6;
                            v3=::x3;
                          }
                          else if(::x4==::vx6){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,::x4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,::vx6);
                            v12=::vx6;
                            v4=::x4;
                          }
                          else if(::x5==::vx6){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,::x5);
                            cardealer(0,0,h/2.7,w/2.85,v6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,::vx6);
                            v12=::vx6;
                            v5=::x5;
                          }
                          else if(::x6==::vx6){
                            cardealer(0,0,h/12,w/5,v1);
                            cardealer(0,0,h/12,w/2.85,v2);
                            cardealer(0,0,h/12,w/2,v3);
                            cardealer(0,0,h/12,w/1.54,v4);
                            cardealer(0,0,h/2.7,w/5,v5);
                            cardealer(0,0,h/2.7,w/2.85,::x6);
                            cardealer(0,0,h/2.7,w/2,v7);
                            cardealer(0,0,h/2.7,w/1.54,v8);
                            cardealer(0,0,h/1.5,w/5,v9);
                            cardealer(0,0,h/1.5,w/2.85,v10);
                            cardealer(0,0,h/1.5,w/2,v11);
                            cardealer(0,0,h/1.5,w/1.54,::vx6);
                            v12=::vx6;
                            v6=::x6;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                        o++;
                      cod=::vx6;
                    }
                  }

                    if(v1!=13 && v2!=13 && v3!=13 && v4!=13 && v5!=13 && v6!=13 &&
                      v7!=13 && v8!=13 && v9!=13 && v10!=13 && v11!=13 && v12!=13){
                      clear();
                      addstr("CABOOO");
                      refresh();
                      break;
                    }
}
        break;
        case 3:
        clear(); refresh();
        forcerand(3); std::this_thread::sleep_for(std::chrono::milliseconds(500));
        clear(); refresh();
/////////////PRINTANDO CARTAS COM INTERROGACAO/////////////////////////////////
          cardealer(0,0,h/12,w/20,13);
          cardealer(0,0,h/12,w/5,13);
          cardealer(0,0,h/12,w/2.85,13);
          cardealer(0,0,h/12,w/2,13);
          cardealer(0,0,h/12,w/1.54,13);
          cardealer(0,0,h/12,w/1.25,13);
          cardealer(0,0,h/2.7,w/20,13);
          cardealer(0,0,h/2.7,w/5,13);
          cardealer(0,0,h/2.7,w/2.85,13);
          cardealer(0,0,h/2.7,w/2,13);
          cardealer(0,0,h/2.7,w/1.54,13);
          cardealer(0,0,h/2.7,w/1.25,13);
          cardealer(0,0,h/1.5,w/20,13);
          cardealer(0,0,h/1.5,w/5,13);
          cardealer(0,0,h/1.5,w/2.85,13);
          cardealer(0,0,h/1.5,w/2,13);
          cardealer(0,0,h/1.5,w/1.54,13);
          cardealer(0,0,h/1.5,w/1.25,13);
          std::this_thread::sleep_for(std::chrono::milliseconds(500));
//////////////////////PRINTANDO SETAS E TELA NOVVA//////////////////////////
            keypad(stdscr,TRUE);
            for(z=0,z2=0,z3=0,j=0,b=0;;){
              ////////////z3/////////////////////
                if(z3==12){
                  arrow(h/1.26,w/26,j,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=1;
                  b=0;
                }
                else if(z3==13){
                  arrow(h/1.26,w/5.5,b,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=0;
                  b=1;
                }
                else if(z3==14){
                  arrow(h/1.26,w/3,j,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=1;
                  b=0;
                }
                else if(z3==15){
                  arrow(h/1.26,w/2.05,b,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=0;
                  b=1;
                }
                else if(z3==16){
                  arrow(h/1.26,w/1.57,j,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=1;
                  b=0;
                }
                else if(z3==17){
                  arrow(h/1.26,w/1.28,b,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=0;
                  b=1;
                }
          ////////////////z2/////////////////
                else if(z2==6){
                  arrow(h/2,w/26,b,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);;
                  j=0;
                  b=1;
                }
                else if(z2==7){
                  arrow(h/2,w/5.5,j,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=1;
                  b=0;
                }
                else if(z2==8){
                  arrow(h/2,w/3,b,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=0;
                  b=1;
                }
                else if(z2==9){
                  arrow(h/2,w/2.05,j,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=1;
                  b=0;
                }
                else if(z2==10){
                  arrow(h/2,w/1.57,b,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=0;
                  b=1;
                }
                else if(z2==11){
                  arrow(h/2,w/1.28,j,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=1;
                  b=0;
                }
          ///////////////z///////////////
                else if(z==0){
                  arrow(h/5,w/26,j,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=1;
                  b=0;
                }
                else if(z==1){
                  arrow(h/5,w/5.5,b,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=0;
                  b=1;
                }
                else if(z==2){
                  arrow(h/5,w/3,j,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=1;
                  b=0;
                }
                else if(z==3){
                  arrow(h/5,w/2.05,b,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=0;
                  b=1;
                }
                else if(z==4){
                  arrow(h/5,w/1.57,j,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=1;
                  b=0;
                }
                else if(z==5){
                  arrow(h/5,w/1.28,b,1,v1,v2,v3,v4,v5,v6,
                  v7,v8,v9,v10,v11,v12,v13,v14,v15,v16,v17,v18,3);
                  j=0;
                  b=1;
                }

///////////////////ATIVANDO TECLADO E TROCANDO POSICOES/////////////////////////
                    p=wgetch(stdscr);
                    if(p!=ERR && p!=KEY_UP && p!=KEY_DOWN && p!=KEY_LEFT && p!=KEY_RIGHT && p!=10){
                      pausescreen();
                    }
                    else if(p==KEY_LEFT && (z!=0 && (z2!=0 && z2!=6) && (z3!=12 && z3!=6 && z3!=0))){
                  //  addstr("ESKERDA");
                  //    refresh();
                      z--;
                      z2--;
                      z3--;
                    }
                    else if(p==KEY_RIGHT && (z!=5 && (z2!=5 && z2!=11) && (z3!=5 && z3!=11 && z3!=17))){
                  //  addstr("DERETXA");
                //    refresh();
                      z++;
                      z2++;
                      z3++;
                    }
                    else if(p==KEY_UP && (z!=0 && z!=1 && z!=2 && z!=3 && z!=4 && z!=5)){
                  //  addstr("CIMA");
                  //   refresh();
                      z-=6;
                      z3=z;
                      z2=z;
                    }
                    else if(p==KEY_DOWN && (z3!=12 && z3!=13 && z3!=14 && z3!=15 && z3!=16 && z3!=17)){
                    //  addstr("BAXO");
                  //    refresh();
                      z+=6;
                      z3=z;
                      z2=z;
                    }
////////////////////REGISTRO DO ENTER E MUDANCA DAS CARTAS//////////////////////
                    if(p==10){
                    //  attron(COLOR_PAIR(green));
                        if(z==0 && z2!=6 && z3!=12){
                          cardealer(0,0,h/12,w/20,::x);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,v6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::x){
                          if(::vx1==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v1=::x;
                            v10=::vx1;
                          }
                          else if(::vx2==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v1=::x;
                            v11=::vx2;
                          }
                          else if(::vx3==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v1=::x;
                            v12=::vx3;
                          }
                          else if(::vx4==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,::vx4);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v13=::vx4;
                          }
                          else if(::vx5==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v1=::x;
                            v14=::vx5;
                          }
                          else if(::vx6==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v1=::x;
                            v15=::vx6;
                          }
                          else if(::vx7==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v1=::x;
                            v16=::vx7;
                          }
                          else if(::vx8==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,::vx8);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v1=::x;
                            v17=::vx8;
                          }
                          else if(::vx9==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v1=::x;
                            v18=::vx9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                        cod=::x;
                      }
                        else if(z==1 && z2!=7 && z3!=13){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,::x2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,v6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          if(cod==::x2){
                            if(::vx1==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v2=::x2;
                              v10=::vx1;
                            }
                            else if(::vx2==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v2=::x2;
                              v11=::vx2;
                            }
                            else if(::vx3==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,::vx3);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v2=::x2;
                              v12=::vx3;
                            }
                            else if(::vx4==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v2=::x2;
                              v13=::vx4;
                            }
                            else if(::vx5==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,::vx5);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v2=::x2;
                              v14=::vx5;
                            }
                            else if(::vx6==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,::vx6);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v2=::x2;
                              v15=::vx6;
                            }
                            else if(::vx7==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,::vx7);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v2=::x2;
                              v16=::vx7;
                            }
                            else if(::vx8==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,::vx8);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v2=::x2;
                              v17=::vx8;
                            }
                            else if(::vx9==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,::vx9);
                              v2=::x2;
                              v18=::vx9;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                        cod=::x2;
                      }
                        else if(z==2 && z2!=8 && z3!=14){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,::x3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,v6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          if(cod==::x3){
                            if(::vx1==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v3=::x3;
                              v10=::vx1;
                            }
                            else if(::vx2==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v3=::x3;
                              v11=::vx2;
                            }
                            else if(::vx3==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,::vx3);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v3=::x3;
                              v12=::vx3;
                            }
                            else if(::vx4==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v3=::x3;
                              v13=::vx4;
                            }
                            else if(::vx5==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,::vx5);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v3=::x3;
                              v14=::vx5;
                            }
                            else if(::vx6==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,::vx6);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v3=::x3;
                              v15=::vx6;
                            }
                            else if(::vx6==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,::vx7);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v3=::x3;
                              v16=::vx7;
                            }
                            else if(::vx6==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,::vx8);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v3=::x3;
                              v17=::vx8;
                            }
                            else if(::vx6==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,::vx9);
                              v3=::x3;
                              v18=::vx9;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                          cod=::x3;
                      }
                        else if(z==3 && z2!=9 && z3!=15){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,::x4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,v6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          if(cod==::x4){
                            if(::vx1==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,::vx1);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v4=::x4;
                              v10=::vx1;
                            }
                            else if(::vx2==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,::vx2);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v4=::x4;
                              v11=::vx2;
                            }
                            else if(::vx3==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,::vx3);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v4=::x4;
                              v12=::vx3;
                            }
                            else if(::vx4==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v4=::x4;
                              v13=::vx4;
                            }
                            else if(::vx5==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,::vx5);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v4=::x4;
                              v14=::vx5;
                            }
                            else if(::vx6==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,::vx6);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v4=::x4;
                              v15=::vx6;
                            }
                            else if(::vx7==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,::vx7);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v4=::x4;
                              v16=::vx7;
                            }
                            else if(::vx8==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,::vx8);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v4=::x4;
                              v17=::vx8;
                            }
                            else if(::vx9==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,v13);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,::vx9);
                              v4=::x4;
                              v18=::vx9;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                        cod=::x4;
                      }
                        else if(z==4 && z2!=10 && z3!=16){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,::x5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::x5){
                          if(::vx1==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v5=::x5;
                            v10=::vx1;
                          }
                          else if(::vx2==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                          v5=::x5;
                            v11=::vx2;
                          }
                          else if(::vx3==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                          v5=::x5;
                            v12=::vx3;
                          }
                          else if(::vx4==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,::vx4);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v5=::x5;
                            v13=::vx4;
                          }
                          else if(::vx5==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v5=::x5;
                            v14=::vx5;
                          }
                          else if(::vx6==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v5=::x5;
                            v15=::vx6;
                          }
                          else if(::vx7==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v5=::x5;
                            v16=::vx7;
                          }
                          else if(::vx8==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,::vx8);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v5=::x5;
                            v17=::vx8;
                          }
                          else if(::vx9==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v5=::x5;
                            v18=::vx9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                      cod=::x5;
                    }
                        else if(z==5 && z2!=11 && z3!=17){
                      cardealer(0,0,h/12,w/20,v1);
                      cardealer(0,0,h/12,w/5,v2);
                      cardealer(0,0,h/12,w/2.85,v3);
                      cardealer(0,0,h/12,w/2,v4);
                      cardealer(0,0,h/12,w/1.54,v5);
                      cardealer(0,0,h/12,w/1.25,::x6);
                      cardealer(0,0,h/2.7,w/20,v7);
                      cardealer(0,0,h/2.7,w/5,v8);
                      cardealer(0,0,h/2.7,w/2.85,v9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,v17);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      if(cod==::x6){
                        if(::vx1==::x6){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,::x6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,::vx1);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          v6=::x6;
                          v10=::vx1;
                        }
                        else if(::vx2==::x6){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,::x6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,::vx2);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          v6=::x6;
                          v11=::vx2;
                        }
                        else if(::vx3==::x6){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,::x6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,::vx3);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          v6=::x6;
                          v12=::vx3;
                        }
                        else if(::vx4==::x6){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,::x6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,::vx4);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          v6=::x6;
                          v13=::vx4;
                        }
                        else if(::vx5==::x6){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,::x6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,::vx5);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          v6=::x6;
                          v14=::vx5;
                        }
                        else if(::vx6==::x6){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,::x6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,::vx6);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                        v6=::x6;
                          v15=::vx6;
                        }
                        else if(::vx7==::x6){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,::x6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,::vx7);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          v6=::x6;
                          v16=::vx7;
                        }
                        else if(::vx8==::x6){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,::x6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,::vx8);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          v6=::x6;
                          v17=::vx8;
                        }
                        else if(::vx9==::x6){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,::x6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,::vx9);
                          v6=::x6;
                          v18=::vx9;
                        }
                      std::this_thread::sleep_for(std::chrono::milliseconds(500));
                      }
                    cod=::x6;
                  }

                        else if(z2==6 && z3!=12){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,::x7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::x7){
                          if(::vx1==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v7=::x7;
                            v10=::vx1;
                          }
                          else if(::vx2==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v7=::x7;
                            v11=::vx2;
                          }
                          else if(::vx3==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v7=::x7;
                            v12=::vx3;
                          }
                          else if(::vx4==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,::vx4);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v7=::x7;
                            v13=::vx4;
                          }
                          else if(::vx5==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v7=::x7;
                            v14=::vx5;
                          }
                          else if(::vx6==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v7=::x7;
                            v15=::vx6;
                          }
                          else if(::vx7==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v7=::x7;
                            v16=::vx7;
                          }
                          else if(::vx8==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,::vx8);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v7=::x7;
                            v17=::vx8;
                          }
                          else if(::vx9==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v7=::x7;
                            v18=::vx9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                      cod=::x6;
                    }
                        else if(z2==7 && z3!=13){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,::x8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::x8){
                          if(::vx1==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v8=::x8;
                            v10=::vx1;
                          }
                          else if(::vx2==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v8=::x8;
                            v11=::vx2;
                          }
                          else if(::vx3==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v8=::x8;
                            v12=::vx3;
                          }
                          else if(::vx4==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,::vx4);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v8=::x8;
                            v13=::vx4;
                          }
                          else if(::vx5==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v8=::x8;
                            v14=::vx5;
                          }
                          else if(::vx6==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v8=::x8;
                            v15=::vx6;
                          }
                          else if(::vx7==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v8=::x8;
                            v16=::vx7;
                          }
                          else if(::vx8==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,::vx8);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v8=::x8;
                            v17=::vx8;
                          }
                          else if(::vx9==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v8=::x8;
                            v18=::vx9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                        cod=::x8;
                    }
                        else if(z2==8 && z3!=14){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,::x9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::x9){
                          if(::vx1==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v9=::x9;
                            v10=::vx1;
                          }
                          else if(::vx2==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v9=::x9;
                            v11=::vx2;
                          }
                          else if(::vx3==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v9=::x9;
                            v12=::vx3;
                          }
                          else if(::vx4==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,::vx4);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v9=::x9;
                            v13=::vx4;
                          }
                          else if(::vx5==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v9=::x9;
                            v14=::vx5;
                          }
                          else if(::vx6==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v9=::x9;
                            v15=::vx6;
                          }
                          else if(::vx7==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v9=::x9;
                            v16=::vx7;
                          }
                          else if(::vx8==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,::vx8);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v9=::x9;
                            v17=::vx8;
                          }
                          else if(::vx9==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v9=::x9;
                            v18=::vx9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                        cod=::x9;
                    }
                        else if(z2==9 && z3!=15){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,::vx1);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::vx1){
                          if(::vx1==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v10=::vx1;
                            v1=::x;
                          }
                          else if(::vx1==::x2){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,::x2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v10=::vx1;
                            v2=::x2;
                          }
                          else if(::vx1==::x3){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,::x3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v10=::vx1;
                            v3=::x3;
                          }
                          else if(::vx1==::x4){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,::x4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v10=::vx1;
                            v4=::x4;
                          }
                          else if(::vx1==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v10=::vx1;
                            v5=::x5;
                          }
                          else if(::vx1==::x6){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,::x6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v10=::vx1;
                            v6=::x6;
                          }
                          else if(::vx1==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v10=::vx1;
                            v7=::x7;
                          }
                          else if(::vx1==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v10=::vx1;
                            v8=::x8;
                          }
                          else if(::vx1==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v10=::vx1;
                            v9=::x9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                      cod=::vx1;
                    }
                        else if(z2==10 && z3!=16){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,::vx2);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::vx2){
                          if(::vx2==::x2){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v11=::vx2;
                            v1=::x;
                          }
                          else if(::vx2==::x2){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,::x2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v11=::vx2;
                            v2=::x2;
                          }
                          else if(::vx2==::x3){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,::x3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v11=::vx2;
                            v3=::x3;
                          }
                          else if(::vx2==::x4){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,::x4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v11=::vx2;
                            v4=::x4;
                          }
                          else if(::vx2==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v11=::vx2;
                            v5=::x5;
                          }
                          else if(::vx2==::x6){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,::x6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v11=::vx2;
                            v6=::x6;
                          }
                          else if(::vx2==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v11=::vx2;
                            v7=::x7;
                          }
                          else if(::vx2==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,::vx1);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v11=::vx2;
                            v8=::x8;
                          }
                          else if(::vx2==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,::vx2);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v11=::vx2;
                            v9=::x9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                      cod=::vx2;
                    }
                        else if(z2==11 && z3!=17){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,v6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,::vx3);
                          cardealer(0,0,h/1.5,w/20,v13);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::vx3){
                          if(::vx3==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v12=::vx3;
                            v1=::x;
                          }
                          else if(::vx3==::x2){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,::x2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v12=::vx3;
                            v2=::x2;
                          }
                          else if(::vx3==::x3){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,::x3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v12=::vx3;
                            v3=::x3;
                          }
                          else if(::vx3==::x4){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,::x4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v12=::vx3;
                            v4=::x4;
                          }
                          else if(::vx3==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                          v12=::vx3;
                            v5=::x5;
                          }
                          else if(::vx3==::x6){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,::x6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v12=::vx3;
                            v6=::x6;
                          }
                          else if(::vx3==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v12=::vx3;
                            v7=::x7;
                          }
                          else if(::vx3==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v12=::vx3;
                            v8=::x8;
                          }
                          else if(::vx3==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,::vx3);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v12=::vx3;
                            v9=::x9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                      cod=::vx3;
                    }

                        else if(z3==12){
                          cardealer(0,0,h/12,w/20,v1);
                          cardealer(0,0,h/12,w/5,v2);
                          cardealer(0,0,h/12,w/2.85,v3);
                          cardealer(0,0,h/12,w/2,v4);
                          cardealer(0,0,h/12,w/1.54,v5);
                          cardealer(0,0,h/12,w/1.25,v6);
                          cardealer(0,0,h/2.7,w/20,v7);
                          cardealer(0,0,h/2.7,w/5,v8);
                          cardealer(0,0,h/2.7,w/2.85,v9);
                          cardealer(0,0,h/2.7,w/2,v10);
                          cardealer(0,0,h/2.7,w/1.54,v11);
                          cardealer(0,0,h/2.7,w/1.25,v12);
                          cardealer(0,0,h/1.5,w/20,::vx4);
                          cardealer(0,0,h/1.5,w/5,v14);
                          cardealer(0,0,h/1.5,w/2.85,v15);
                          cardealer(0,0,h/1.5,w/2,v16);
                          cardealer(0,0,h/1.5,w/1.54,v17);
                          cardealer(0,0,h/1.5,w/1.25,v18);
                          if(cod==::vx4){
                            if(::vx4==::x){
                              cardealer(0,0,h/12,w/20,::x);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v13=::vx4;
                              v1=::x;
                            }
                            else if(::vx4==::x2){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,::x2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v13=::vx4;
                              v2=::x2;
                            }
                            else if(::vx4==::x3){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,::x3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v13=::vx4;
                              v3=::x3;
                            }
                            else if(::vx4==::x4){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,::x4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v13=::vx4;
                              v4=::x4;
                            }
                            else if(::vx4==::x5){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,::x5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v13=::vx4;
                              v5=::x5;
                            }
                            else if(::vx4==::x6){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,::x6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v13=::vx4;
                              v6=::x6;
                            }
                            else if(::vx4==::x7){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,::x7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v13=::vx4;
                              v7=::x7;
                            }
                            else if(::vx4==::x8){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,::x8);
                              cardealer(0,0,h/2.7,w/2.85,v9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v13=::vx4;
                              v8=::x8;
                            }
                            else if(::vx4==::x9){
                              cardealer(0,0,h/12,w/20,v1);
                              cardealer(0,0,h/12,w/5,v2);
                              cardealer(0,0,h/12,w/2.85,v3);
                              cardealer(0,0,h/12,w/2,v4);
                              cardealer(0,0,h/12,w/1.54,v5);
                              cardealer(0,0,h/12,w/1.25,v6);
                              cardealer(0,0,h/2.7,w/20,v7);
                              cardealer(0,0,h/2.7,w/5,v8);
                              cardealer(0,0,h/2.7,w/2.85,::x9);
                              cardealer(0,0,h/2.7,w/2,v10);
                              cardealer(0,0,h/2.7,w/1.54,v11);
                              cardealer(0,0,h/2.7,w/1.25,v12);
                              cardealer(0,0,h/1.5,w/20,::vx4);
                              cardealer(0,0,h/1.5,w/5,v14);
                              cardealer(0,0,h/1.5,w/2.85,v15);
                              cardealer(0,0,h/1.5,w/2,v16);
                              cardealer(0,0,h/1.5,w/1.54,v17);
                              cardealer(0,0,h/1.5,w/1.25,v18);
                              v13=::vx4;
                              v9=::x9;
                            }
                          std::this_thread::sleep_for(std::chrono::milliseconds(500));
                          }
                        cod=::vx4;
                      }
                        else if(z3==13){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,::vx5);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::vx5){
                          if(::vx5==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v14=::vx5;
                            v1=::x;
                          }
                          else if(::vx5==::x2){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,::x2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v14=::vx5;
                            v2=::x2;
                          }
                          else if(::vx5==::x3){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,::x3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v14=::vx5;
                            v3=::x3;
                          }
                          else if(::vx5==::x4){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,::x4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v14=::vx5;
                            v4=::x4;
                          }
                          else if(::vx5==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v14=::vx5;
                            v5=::x5;
                          }
                          else if(::vx5==::x6){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,::x6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v14=::vx5;
                            v6=::x6;
                          }
                          else if(::vx5==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v14=::vx5;
                            v7=::x7;
                          }
                          else if(::vx5==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v14=::vx5;
                            v8=::x8;
                          }
                          else if(::vx5==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,::vx5);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v14=::vx5;
                            v9=::x9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                      cod=::vx5;
                    }
                        else if(z3==14){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,::vx6);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::vx6){
                          if(::vx6==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v15=::vx6;
                            v1=::x;
                          }
                          else if(::vx6==::x2){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,::x2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v15=::vx6;
                            v2=::x2;
                          }
                          else if(::vx6==::x3){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,::x3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v15=::vx6;
                            v3=::x3;
                          }
                          else if(::vx6==::x4){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,::x4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v15=::vx6;
                            v4=::x4;
                          }
                          else if(::vx6==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v15=::vx6;
                            v5=::x5;
                          }
                          else if(::vx6==::x6){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,::x6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v15=::vx6;
                            v6=::x6;
                          }
                          else if(::vx6==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v15=::vx6;
                            v7=::x7;
                          }
                          else if(::vx6==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v15=::vx6;
                            v8=::x8;
                          }
                          else if(::vx6==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,::vx6);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v15=::vx6;
                            v9=::x9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                      cod=::vx6;
                    }
                        else if(z3==15){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,::vx7);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::vx7){
                          if(::vx7==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v13=::vx4;
                            v1=::x;
                          }
                          else if(::vx7==::x2){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,::x2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v16=::vx7;
                            v2=::x2;
                          }
                          else if(::vx7==::x3){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,::x3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v16=::vx7;
                            v3=::x3;
                          }
                          else if(::vx7==::x4){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,::x4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v16=::vx7;;
                            v4=::x4;
                          }
                          else if(::vx7==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v16=::vx7;
                            v5=::x5;
                          }
                          else if(::vx7==::x6){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,::x6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v16=::vx7;
                            v6=::x6;
                          }
                          else if(::vx7==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v16=::vx7;
                            v7=::x7;
                          }
                          else if(::vx7==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v16=::vx7;
                            v8=::x8;
                          }
                          else if(::vx7==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,::vx7);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,v18);
                            v16=::vx7;
                            v9=::x9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                      cod=::vx7;
                    }
                        else if(z3==16){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,::vx8);
                        cardealer(0,0,h/1.5,w/1.25,v18);
                        if(cod==::vx8){
                    if(::vx8==::x){
                      cardealer(0,0,h/12,w/20,::x);
                      cardealer(0,0,h/12,w/5,v2);
                      cardealer(0,0,h/12,w/2.85,v3);
                      cardealer(0,0,h/12,w/2,v4);
                      cardealer(0,0,h/12,w/1.54,v5);
                      cardealer(0,0,h/12,w/1.25,v6);
                      cardealer(0,0,h/2.7,w/20,v7);
                      cardealer(0,0,h/2.7,w/5,v8);
                      cardealer(0,0,h/2.7,w/2.85,v9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,::vx8);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      v17=::vx8;
                      v1=::x;
                    }
                    else if(::vx8==::x2){
                      cardealer(0,0,h/12,w/20,v1);
                      cardealer(0,0,h/12,w/5,::x2);
                      cardealer(0,0,h/12,w/2.85,v3);
                      cardealer(0,0,h/12,w/2,v4);
                      cardealer(0,0,h/12,w/1.54,v5);
                      cardealer(0,0,h/12,w/1.25,v6);
                      cardealer(0,0,h/2.7,w/20,v7);
                      cardealer(0,0,h/2.7,w/5,v8);
                      cardealer(0,0,h/2.7,w/2.85,v9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,::vx8);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      v17=::vx8;
                      v2=::x2;
                    }
                    else if(::vx8==::x3){
                      cardealer(0,0,h/12,w/20,v1);
                      cardealer(0,0,h/12,w/5,v2);
                      cardealer(0,0,h/12,w/2.85,::x3);
                      cardealer(0,0,h/12,w/2,v4);
                      cardealer(0,0,h/12,w/1.54,v5);
                      cardealer(0,0,h/12,w/1.25,v6);
                      cardealer(0,0,h/2.7,w/20,v7);
                      cardealer(0,0,h/2.7,w/5,v8);
                      cardealer(0,0,h/2.7,w/2.85,v9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,::vx8);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      v17=::vx8;
                      v3=::x3;
                    }
                    else if(::vx8==::x4){
                      cardealer(0,0,h/12,w/20,v1);
                      cardealer(0,0,h/12,w/5,v2);
                      cardealer(0,0,h/12,w/2.85,v3);
                      cardealer(0,0,h/12,w/2,::x4);
                      cardealer(0,0,h/12,w/1.54,v5);
                      cardealer(0,0,h/12,w/1.25,v6);
                      cardealer(0,0,h/2.7,w/20,v7);
                      cardealer(0,0,h/2.7,w/5,v8);
                      cardealer(0,0,h/2.7,w/2.85,v9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,::vx8);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      v17=::vx8;
                      v4=::x4;
                    }
                    else if(::vx8==::x5){
                      cardealer(0,0,h/12,w/20,v1);
                      cardealer(0,0,h/12,w/5,v2);
                      cardealer(0,0,h/12,w/2.85,v3);
                      cardealer(0,0,h/12,w/2,v4);
                      cardealer(0,0,h/12,w/1.54,::x5);
                      cardealer(0,0,h/12,w/1.25,v6);
                      cardealer(0,0,h/2.7,w/20,v7);
                      cardealer(0,0,h/2.7,w/5,v8);
                      cardealer(0,0,h/2.7,w/2.85,v9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,::vx8);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      v17=::vx8;
                      v5=::x5;
                    }
                    else if(::vx8==::x6){
                      cardealer(0,0,h/12,w/20,v1);
                      cardealer(0,0,h/12,w/5,v2);
                      cardealer(0,0,h/12,w/2.85,v3);
                      cardealer(0,0,h/12,w/2,v4);
                      cardealer(0,0,h/12,w/1.54,v5);
                      cardealer(0,0,h/12,w/1.25,::x6);
                      cardealer(0,0,h/2.7,w/20,v7);
                      cardealer(0,0,h/2.7,w/5,v8);
                      cardealer(0,0,h/2.7,w/2.85,v9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,::vx8);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      v17=::vx8;
                      v6=::x6;
                    }
                    else if(::vx8==::x7){
                      cardealer(0,0,h/12,w/20,v1);
                      cardealer(0,0,h/12,w/5,v2);
                      cardealer(0,0,h/12,w/2.85,v3);
                      cardealer(0,0,h/12,w/2,v4);
                      cardealer(0,0,h/12,w/1.54,v5);
                      cardealer(0,0,h/12,w/1.25,v6);
                      cardealer(0,0,h/2.7,w/20,::x7);
                      cardealer(0,0,h/2.7,w/5,v8);
                      cardealer(0,0,h/2.7,w/2.85,v9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,::vx8);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      v17=::vx8;
                      v7=::x7;
                    }
                    else if(::vx8==::x8){
                      cardealer(0,0,h/12,w/20,v1);
                      cardealer(0,0,h/12,w/5,v2);
                      cardealer(0,0,h/12,w/2.85,v3);
                      cardealer(0,0,h/12,w/2,v4);
                      cardealer(0,0,h/12,w/1.54,v5);
                      cardealer(0,0,h/12,w/1.25,v6);
                      cardealer(0,0,h/2.7,w/20,v7);
                      cardealer(0,0,h/2.7,w/5,::x8);
                      cardealer(0,0,h/2.7,w/2.85,v9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,::vx8);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      v17=::vx8;
                      v8=::x8;
                    }
                    else if(::vx8==::x9){
                      cardealer(0,0,h/12,w/20,v1);
                      cardealer(0,0,h/12,w/5,v2);
                      cardealer(0,0,h/12,w/2.85,v3);
                      cardealer(0,0,h/12,w/2,v4);
                      cardealer(0,0,h/12,w/1.54,v5);
                      cardealer(0,0,h/12,w/1.25,v6);
                      cardealer(0,0,h/2.7,w/20,v7);
                      cardealer(0,0,h/2.7,w/5,v8);
                      cardealer(0,0,h/2.7,w/2.85,::x9);
                      cardealer(0,0,h/2.7,w/2,v10);
                      cardealer(0,0,h/2.7,w/1.54,v11);
                      cardealer(0,0,h/2.7,w/1.25,v12);
                      cardealer(0,0,h/1.5,w/20,v13);
                      cardealer(0,0,h/1.5,w/5,v14);
                      cardealer(0,0,h/1.5,w/2.85,v15);
                      cardealer(0,0,h/1.5,w/2,v16);
                      cardealer(0,0,h/1.5,w/1.54,::vx8);
                      cardealer(0,0,h/1.5,w/1.25,v18);
                      v17=::vx8;
                      v9=::x9;
                    }
                  std::this_thread::sleep_for(std::chrono::milliseconds(500));
                  }
                        cod=::vx8;
                        }
                        else if(z3==17){
                        cardealer(0,0,h/12,w/20,v1);
                        cardealer(0,0,h/12,w/5,v2);
                        cardealer(0,0,h/12,w/2.85,v3);
                        cardealer(0,0,h/12,w/2,v4);
                        cardealer(0,0,h/12,w/1.54,v5);
                        cardealer(0,0,h/12,w/1.25,v6);
                        cardealer(0,0,h/2.7,w/20,v7);
                        cardealer(0,0,h/2.7,w/5,v8);
                        cardealer(0,0,h/2.7,w/2.85,v9);
                        cardealer(0,0,h/2.7,w/2,v10);
                        cardealer(0,0,h/2.7,w/1.54,v11);
                        cardealer(0,0,h/2.7,w/1.25,v12);
                        cardealer(0,0,h/1.5,w/20,v13);
                        cardealer(0,0,h/1.5,w/5,v14);
                        cardealer(0,0,h/1.5,w/2.85,v15);
                        cardealer(0,0,h/1.5,w/2,v16);
                        cardealer(0,0,h/1.5,w/1.54,v17);
                        cardealer(0,0,h/1.5,w/1.25,::vx9);
                        if(cod==::vx9){
                          if(::vx9==::x){
                            cardealer(0,0,h/12,w/20,::x);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v18=::vx9;
                            v1=::x;
                          }
                          else if(::vx9==::x2){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,::x2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v18=::vx9;
                            v2=::x2;
                          }
                          else if(::vx9==::x3){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,::x3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v18=::vx9;
                            v3=::x3;
                          }
                          else if(::vx9==::x4){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,::x4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v18=::vx9;
                            v4=::x4;
                          }
                          else if(::vx9==::x5){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,::x5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v18=::vx9;
                            v5=::x5;
                          }
                          else if(::vx9==::x6){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,::x6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v18=::vx9;
                            v6=::x6;
                          }
                          else if(::vx9==::x7){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,::x7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v18=::vx9;
                            v7=::x7;
                          }
                          else if(::vx9==::x8){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,::x8);
                            cardealer(0,0,h/2.7,w/2.85,v9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v18=::vx9;
                            v8=::x8;
                          }
                          else if(::vx9==::x9){
                            cardealer(0,0,h/12,w/20,v1);
                            cardealer(0,0,h/12,w/5,v2);
                            cardealer(0,0,h/12,w/2.85,v3);
                            cardealer(0,0,h/12,w/2,v4);
                            cardealer(0,0,h/12,w/1.54,v5);
                            cardealer(0,0,h/12,w/1.25,v6);
                            cardealer(0,0,h/2.7,w/20,v7);
                            cardealer(0,0,h/2.7,w/5,v8);
                            cardealer(0,0,h/2.7,w/2.85,::x9);
                            cardealer(0,0,h/2.7,w/2,v10);
                            cardealer(0,0,h/2.7,w/1.54,v11);
                            cardealer(0,0,h/2.7,w/1.25,v12);
                            cardealer(0,0,h/1.5,w/20,v13);
                            cardealer(0,0,h/1.5,w/5,v14);
                            cardealer(0,0,h/1.5,w/2.85,v15);
                            cardealer(0,0,h/1.5,w/2,v16);
                            cardealer(0,0,h/1.5,w/1.54,v17);
                            cardealer(0,0,h/1.5,w/1.25,::vx9);
                            v18=::vx9;
                            v9=::x9;
                          }
                        std::this_thread::sleep_for(std::chrono::milliseconds(500));
                        }
                      cod=::vx9;
                    }
                      }
                    if(v1!=13 && v2!=13 && v3!=13 && v4!=13 && v5!=13 && v6!=13 &&
                      v7!=13 && v8!=13 && v9!=13 && v10!=13 && v11!=13 && v12!=13 && v13!=13 && v14!=13 && v15!=13 && v16!=13 && v17!=13 && v18!=13){
                      clear();
                      addstr("CABOOO");
                      refresh();
                      break;
                    }
}
        break;
}
    playagain();
}

  void score(){
  int h,w;
  getmaxyx(stdscr,h,w);
  WINDOW*wwin=newwin(0,0,h/3,w/3);
  waddstr(wwin,"##### ##### ###### #####  #####\n");
  waddstr(wwin,"#     #     #    # #   ## #\n");
  waddstr(wwin,"##### #     #    # #####  #####\n");
  waddstr(wwin,"    # #     #    # #  #   #\n");
  waddstr(wwin,"##### ##### ###### #   #  #####\n");
  wrefresh(wwin);
  std::this_thread::sleep_for(std::chrono::milliseconds(2000));
  clear();

    playagain();
}

  void playagain(){
  int h,w;
  clear();
  getmaxyx(stdscr,h,w);
  WINDOW*wwin=newwin(0,0,h/3,w/3);
  wattron(wwin,A_BOLD);
  wattron(wwin,COLOR_PAIR(green));
  waddstr(wwin,"########   #######  #########   #######  ########   ######## ###    ### ########\n");
  waddstr(wwin,"###   ### ###   ### ###    ### ###   ### ###   ###  ######## ####   ### #######\n");
  waddstr(wwin,"###   ### ###   ### ###    ### ###   ### ###    ### ###      #####  ### ###\n");
  waddstr(wwin,"########  ######### #########  ######### ###  ####  #######  ### ## ### ########\n");
  waddstr(wwin,"###       ######### ###  ###   ###   ### ###    ### ###      ###  #####      ###\n");
  waddstr(wwin,"###       ###   ### ###   ###  ###   ### ###   ###  ######## ###   ####  #######\n");
  waddstr(wwin,"###       ###   ### ###    ### ###   ### ########   ######## ###    ### ########\n");
  wrefresh(wwin);
}

  void numberscreen(int x,int y,int x2,int y2,int a){
  if(a==1){
    WINDOW*wwin=newwin(x,y,x2,y2);
    wattron(wwin,A_BOLD);
    waddstr(wwin,"    #####\n");
    waddstr(wwin,"   ######\n");
    waddstr(wwin,"  #######\n");
    waddstr(wwin," ########\n");
    waddstr(wwin,"     ####\n");
    waddstr(wwin,"     ####\n");
    waddstr(wwin,"     ####\n");
    waddstr(wwin,"     ####\n");
    waddstr(wwin,"     ####\n");
    wrefresh(wwin);
    wattroff(wwin,A_BOLD);
    delwin(wwin);
  }
  else if(a==2){
    WINDOW*wwin=newwin(x,y,x2,y2);
    wattron(wwin,A_BOLD);
    waddstr(wwin," ######## \n");
    waddstr(wwin,"##########\n");
    waddstr(wwin,"###   ####\n");
    waddstr(wwin,"###   ####\n");
    waddstr(wwin,"     #### \n");
    waddstr(wwin,"    ####  \n");
    waddstr(wwin,"   ####   \n");
    waddstr(wwin,"  ########\n");
    waddstr(wwin," #########\n");
    wrefresh(wwin);
    wattroff(wwin,A_BOLD);
    delwin(wwin);
  }
  else if(a==3){
    WINDOW*wwin=newwin(x,y,x2,y2);
wattron(wwin,A_BOLD);
waddstr(wwin,"  #######\n");
waddstr(wwin," #########\n");
waddstr(wwin,"####   ####\n");
waddstr(wwin,"      ####\n");
waddstr(wwin,"    ####\n");
waddstr(wwin,"      ####\n");
waddstr(wwin,"####   ####\n");
waddstr(wwin," #########\n");
waddstr(wwin,"  #######\n");
wrefresh(wwin);
wattroff(wwin,A_BOLD);
delwin(wwin);
  }
  else if(a==4){
    WINDOW*wwin=newwin(x,y,x2,y2);
    wattron(wwin,A_BOLD);
    waddstr(wwin,"          ###\n");
    waddstr(wwin,"         ####\n");
    waddstr(wwin,"        #####\n");
    waddstr(wwin,"  #    ######\n");
    waddstr(wwin,"#####     ###\n");
    waddstr(wwin,"  #       ###\n");
    waddstr(wwin,"          ###\n");
    waddstr(wwin,"          ###\n");
    waddstr(wwin,"          ###\n");
    wrefresh(wwin);
    wattroff(wwin,A_BOLD);
    delwin(wwin);
  }
  else if(a==5){
    WINDOW*wwin=newwin(x,y,x2,y2);
    wattron(wwin,A_BOLD);
    waddstr(wwin,"      ######## \n");
    waddstr(wwin,"     ##########\n");
    waddstr(wwin,"     ###    ####\n");
    waddstr(wwin,"     ###    ####\n");
    waddstr(wwin,"####       #### \n");
    waddstr(wwin,"          ####  \n");
    waddstr(wwin,"         ####   \n");
    waddstr(wwin,"        ########\n");
    waddstr(wwin,"       #########\n");
    wrefresh(wwin);
    wattroff(wwin,A_BOLD);
    delwin(wwin);
  }
}
