#include "Header.h"

void setupColor()
{
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    init_pair(4, COLOR_BLUE, COLOR_BLACK);
    init_pair(5, COLOR_CYAN, COLOR_BLACK);
    init_pair(6, COLOR_YELLOW, COLOR_BLACK);
    init_pair(7, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(8, COLOR_WHITE, COLOR_WHITE);
    init_pair(9, COLOR_BLACK, COLOR_BLACK);
    init_pair(10, COLOR_RED, COLOR_RED);
    init_pair(11, COLOR_GREEN, COLOR_GREEN);
    init_pair(12, COLOR_RED, COLOR_WHITE);
    init_pair(13, COLOR_BLACK, COLOR_WHITE);
    init_pair(14, COLOR_YELLOW, COLOR_WHITE);
    init_pair(15, COLOR_GREEN, COLOR_WHITE);
}

void inputMenu(int &hz, int &dirMenu)
{
	keypad(stdscr, true);
	halfdelay(1);

    int c = getch();
    switch(c)
    {
        case KEY_UP:
        {
            hz++;
            dirMenu = 1;
            break;
        }
        case KEY_DOWN:
        {
            hz++;
            dirMenu = 2;
            break;
        }
        case ' ':
        {
            dirMenu = 3;
            break;
        }
        default:
            break;
    }
}

void inputBackgroundMenu1(string backgroundMenu1[])
{
    ifstream fin;
    fin.open("BackgroundMenu1.txt");
    int i = 0;
    while(i<=40)
    {
        getline(fin, backgroundMenu1[i], '\n');
        i++;
    }
    fin.close();
}

void inputBackgroundMenu2(string backgroundMenu2[])
{
    ifstream fin;
    fin.open("BackgroundMenu2.txt");
    int i = 0;
    while(i<=38)
    {
        getline(fin, backgroundMenu2[i], '\n');
        i++;
    }
    fin.close();
}

void drawMenu(int &hz, int &chooseMenu, char box1[], char box2[], char box3[], char box4[], char box5[], char box6[], string backgroundMenu1[], string backgroundMenu2[])
{
    clear();
    
    if(chooseMenu == 16)
    {
        attron(COLOR_PAIR(1));
        for(int i = passingHeightMenu; i <=passingHeightMenu + 2; i++)
        {
            for(int j = 5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 1 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 1)
                    mvprintw(i, j, "-");
                else if(j == 11 && i == passingHeightMenu + 1)
                    mvprintw(i, j, "%s", box1);
            }
        }
        attroff(COLOR_PAIR(1));
    }
    else
    {
        attron(COLOR_PAIR(3));
        for(int i = passingHeightMenu; i <=passingHeightMenu + 2; i++)
        {
            for(int j = 5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 1 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 1)
                    mvprintw(i, j, "-");
                else if(j == 11 && i == passingHeightMenu + 1)
                    mvprintw(i, j, "%s", box1);
            }
        }
        attroff(COLOR_PAIR(3));
    }

    if(chooseMenu == 21)
    {
        attron(COLOR_PAIR(1));
        for(int i = passingHeightMenu + 5; i <=passingHeightMenu + 7; i++)
        {
            for(int j=5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 6 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 6)
                    mvprintw(i, j, "-");
                else if(j == 11 && i == passingHeightMenu + 6)
                    mvprintw(i, j, "%s", box2);
            }
        }
        attroff(COLOR_PAIR(1));
    }
    else
    {
        attron(COLOR_PAIR(3));
        for(int i = passingHeightMenu + 5; i <=passingHeightMenu + 7; i++)
        {
            for(int j = 5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 6 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 6)
                    mvprintw(i, j, "-");
                else if(j == 11 && i == passingHeightMenu + 6)
                    mvprintw(i, j, "%s", box2);
            }
        }
        attroff(COLOR_PAIR(3));
    }

    if(chooseMenu == 26)
    {
        attron(COLOR_PAIR(1));
        for(int i = passingHeightMenu + 10; i<=passingHeightMenu + 12; i++)
        {
            for(int j=5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 11 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 11)
                    mvprintw(i, j, "-");
                else if(j == 10 && i == passingHeightMenu + 11)
                    mvprintw(i, j, "%s", box3);
            }
        }
        attroff(COLOR_PAIR(1));
    }
    else
    {       
        attron(COLOR_PAIR(3));
        for(int i = passingHeightMenu + 10; i<=passingHeightMenu + 12; i++)
        {
            for(int j=5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 11 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 11)
                    mvprintw(i, j, "-");
                else if(j == 10 && i == passingHeightMenu + 11)
                    mvprintw(i, j, "%s", box3);
            }
        }
        attroff(COLOR_PAIR(3));
    }

    if(chooseMenu == 31)
    {
        attron(COLOR_PAIR(1));
        for(int i = passingHeightMenu + 15; i<=passingHeightMenu + 17; i++)
        {
            for(int j=5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 16 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 16)
                    mvprintw(i, j, "-");
                else if(j == 10 && i == passingHeightMenu + 16)
                    mvprintw(i, j, "%s", box4);
            }
        }
        attroff(COLOR_PAIR(1));
    }
    else
    {
        attron(COLOR_PAIR(3));
        for(int i = passingHeightMenu + 15; i<=passingHeightMenu + 17; i++)
        {
            for(int j=5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 16 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 16)
                    mvprintw(i, j, "-");
                else if(j == 10 && i == passingHeightMenu + 16)
                    mvprintw(i, j, "%s", box4);
            }
        }
        attroff(COLOR_PAIR(3));
    }
    
    if(chooseMenu == 36)
    {
        attron(COLOR_PAIR(1));
        for(int i = passingHeightMenu + 20; i<=passingHeightMenu + 22; i++)
        {
            for(int j=5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 21 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 21)
                    mvprintw(i, j, "-");
                else if(j == 9 && i == passingHeightMenu + 21)
                    mvprintw(i, j, "%s", box5);
            }
        }
        attroff(COLOR_PAIR(1));
    }
    else
    {
        attron(COLOR_PAIR(3));
        for(int i = passingHeightMenu + 20; i<=passingHeightMenu + 22; i++)
        {
            for(int j=5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 21 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 21)
                    mvprintw(i, j, "-");
                else if(j == 9 && i == passingHeightMenu + 21)
                    mvprintw(i, j, "%s", box5);
            }
        }
        attroff(COLOR_PAIR(3));
    }

    if(chooseMenu == 41)
    {
        attron(COLOR_PAIR(1));
        for(int i = passingHeightMenu + 25; i<=passingHeightMenu + 27; i++)
        {
            for(int j=5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 26 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 26)
                    mvprintw(i, j, "-");
                else if(j == 12 && i == passingHeightMenu + 26)
                    mvprintw(i, j, "%s", box6);
            }
        }
        attroff(COLOR_PAIR(1));
    }
    else
    {
        attron(COLOR_PAIR(3));
        for(int i = passingHeightMenu + 25; i<=passingHeightMenu + 27; i++)
        {
            for(int j=5; j <= 22; j++)
            {
                if(i == passingHeightMenu + 26 && (j == 5 || j == 22))
                    mvprintw(i, j, "|");
                else if(j != 5 && j != 22 && i != passingHeightMenu + 26)
                    mvprintw(i, j, "-");
                else if(j == 12 && i == passingHeightMenu + 26)
                    mvprintw(i, j, "%s", box6);
            }
        }
        attroff(COLOR_PAIR(3));
    }
    
    if(hz%2 == 0)
    {
        attron(COLOR_PAIR(1));
        for(int i = passingHeightMenu - 4; i <=50; i++)
            for(int j = 0; j <= 69; j++)
                mvprintw(i, j + 80, "%c", backgroundMenu1[i - 8][j]);
        attroff(COLOR_PAIR(1));
    }
    else
    {
        attron(COLOR_PAIR(6));
        for(int i = passingHeightMenu - 3; i <=49; i++)
            for(int j = 0; j <= 127; j++)
                mvprintw(i, j + 40, "%c", backgroundMenu2 [i - 8][j]);
        attroff(COLOR_PAIR(6));

        attron(COLOR_PAIR(9));
        for(int i = 50; i <= 60; i++)
            for(int j = 0; j <= 160; j++)
                mvprintw(i, j, " ");
        attroff(COLOR_PAIR(9));
    } 
    refresh();
}

void logicMenu(int &chooseMenu, int &dirMenu, bool &endMenu, bool &endGM)
{
    switch(dirMenu)
    {
        case 1:
        {    
            if(chooseMenu == 16)
                chooseMenu = 41;
            else
                chooseMenu -= 5;
            break;
        }
        case 2:
        {
            if(chooseMenu == 41)
                chooseMenu = 16;
            else
                chooseMenu += 5;
            break;
        }
        case 3:
        {
            if(chooseMenu == 16)
            {
                endGM = false;
                break;
            }
            else if(chooseMenu == 41)
            {
                endMenu = true;
                break;
            }
        }
        default:
            break;
    }
    dirMenu = 0;
}