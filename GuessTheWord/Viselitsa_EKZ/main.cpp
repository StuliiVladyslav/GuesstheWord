#include <iostream>
#include <conio.h>
#include <windows.h>
#include "print.h"
#include "start.h"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <vector>
#include"string"
#include <map>
#include <iomanip>
#include <random>
#include <time.h>
#include <ctime>
#include "lose.h"
#include "win.h"
int wins = 0;
int loses = 0;
using namespace std;
class game
{
public:
    int lifes = 9;
    int hod = 0;
    int win = 0;
    
    vector<char> ch;
    vector<int> dt;
    game()
    {
        ch.push_back('а');
        dt.push_back(0);
        ch.push_back('б');
        dt.push_back(0);
        ch.push_back('в');
        dt.push_back(0);
        ch.push_back('г');
        dt.push_back(0);
        ch.push_back('д');
        dt.push_back(0);
        ch.push_back('е');
        dt.push_back(0);
        ch.push_back('ж');
        dt.push_back(0);
        ch.push_back('з');
        dt.push_back(0);
        ch.push_back('и');
        dt.push_back(0);
        ch.push_back('й');
        dt.push_back(0);
        ch.push_back('к');
        dt.push_back(0);
        ch.push_back('л');
        dt.push_back(0);
        ch.push_back('м');
        dt.push_back(0);
        ch.push_back('н');
        dt.push_back(0);
        ch.push_back('о');
        dt.push_back(0);
        ch.push_back('п');
        dt.push_back(0);
        ch.push_back('р');
        dt.push_back(0);
        ch.push_back('с');
        dt.push_back(0);
        ch.push_back('т');
        dt.push_back(0);
        ch.push_back('у');
        dt.push_back(0);
        ch.push_back('ф');
        dt.push_back(0);
        ch.push_back('х');
        dt.push_back(0);
        ch.push_back('ц');
        dt.push_back(0);
        ch.push_back('ч');
        dt.push_back(0);
        ch.push_back('ш');
        dt.push_back(0);
        ch.push_back('щ');
        dt.push_back(0);
        ch.push_back('ы');
        dt.push_back(0);
        ch.push_back('ь');
        dt.push_back(0);
        ch.push_back('э');
        dt.push_back(0);
        ch.push_back('ю');
        dt.push_back(0);
        ch.push_back('я');
        dt.push_back(0);
    }
    void showAlph()
    {
        system("cls");
        cout << endl;
        printRedEndl("                                                   Доступные буквы:");
        cout << endl;
        cout << "         ";
        for (int i = 0; i < 31; i++)
        {
            cout << "  ";
            if (dt[i] == 0)
            {
                printBlue(ch[i]);
            }
            if (dt[i] == 1)
            {
                printRed(ch[i]);
            }
            
        }
        cout << endl;
        cout << endl;
       printYellow("  Попытки: "); if (lifes <= 3) { printRed(lifes); } if (lifes >= 4 && lifes <= 6) printYellow(lifes); if (lifes > 6) { printGreen(lifes); }printYellowEndl("/9");
    }
    void GetWord(string& str)
    {
        cout << endl;
        cout << endl;
        int sizeW = str.size();
        cout << "                                            "; printBlue("Слово из "); printBlue(sizeW); printBlueEndl(" букв:");
        cout << endl;
        cout << "                                               ";
        int locctr = 0;
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < 31; j++)
            {
                if (str[i] == this->ch[j] && this->dt[j] == 0)
                {
                    printRed("# ");
                    locctr++;
                }
                if (str[i] == this->ch[j] && this->dt[j] == 1)
                {
                    printGreen(str[i]); cout << " ";
                }
            }
        }
        if (locctr == 0)
        {
            win = 1;
        }
    }
    void EnterX(game& game_, string& str)
    {
        char temp;
        cout << endl;
        cout << endl;
       
       
        
        printRed("                   В в е д и т е   б у к в у -> "); cin >> temp; hod++;
        cout << endl;
        
        for (int i = 0; i < 31; i++)
        {
            
            if (ch[i] == temp)
            {
                dt[i] = 1;
               
            }
           
        }
      
        int localcounter = 0;
        for (int i = 0; i < str.size(); i++)
        {
           
                if (str[i] == temp)
                {
                    localcounter++;
                }
                
            
        }
        if (localcounter > 0) //// extra lifes
        {
            int random3 = rand() % 100 + 1;
            {
                if (random3 <= 5)
                {
                    cout << endl;
                    cout << "                                        "; printGreen("Да ты любимчик богов! Попытки +3"); Sleep(2000);
                    lifes += 5;
                }
               
            }
        }
        if (localcounter == 0)
        {
            lifes--;
            if (lifes == 8)
            {
                cout << endl;
                cout << "                                        "; printRed("Не угадал."); Sleep(1000);
            }
            
            if (lifes == 7)
            {
                cout << endl;
                cout << "                                        "; printRed("Снова не угадал."); Sleep(1000);
            }
           
            if (lifes == 6)
            {
                cout << endl;
                cout << "                                        "; printRed("Хи хи."); Sleep(1000);
            }
           
            if (lifes == 5)
            {
                cout << endl;
                cout << "                                        "; printRed("Да ты везунчик!"); Sleep(1000);
            }
           
            if (lifes == 4)
            {
                cout << endl;
                cout << "                                        "; printRed("Какой стыд..."); Sleep(1000);
            }
           
            if (lifes == 3)
            {
                cout << endl;
                cout << "                                        "; printRed("Недотёпа..."); Sleep(1000);
            }
            
            if (lifes == 2)
            {
                cout << endl;
                cout << "                                        "; printRed("Продолжай в том же духе."); Sleep(1000);
            }
           
            if (lifes == 1)
            {
                cout << endl;
                cout << "                                        "; printRed("Ты почти мой."); Sleep(1000);
            }
            
            if (lifes == 0)
            {
                cout << endl;
                cout << "                                        "; printRed("Прощай, хи хи хи."); Sleep(1000);
            }
            
           
        }
        localcounter = 0;
          
    }
};
#pragma warning(disable : 4996)
using namespace std;

void main()
{
    srand(time(0));
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	start();

tryAgain:
    clock_t start, finish;
    
    start = clock(); // начало отсчёта
   
    fstream fin;
    game MiniGame;
 
    vector<string> words;
 
    fin.open("data.txt", ios::in);    ////////////// СЧИТАТЬ
    if (!fin) { perror("errorin"); exit(4); }
    
    while (!fin.eof()) 
    {

        string str = "";
        getline(fin, str);
        
        words.push_back(str);
        
    }
    
    int random = rand() % words.size() + 1;
    
   
    cout << endl;
   //Раскодировка
    for (int i = 0; i < words[random].size(); i++)
    {
        if (words[random][i] != 'ё')
        {
            words[random][i] = words[random][i] - 1;
        }
        if (words[random][i] == 'ё')
        {
            words[random][i] = 'я';
        }
        
    }
   
    cout << words[random];
    cout << endl;
    
    fin.close();
    int random2 = rand() % 6 + 1;
    if (random2 == 1)
    {
        PlaySound(TEXT("fon1.wav"), NULL, SND_ASYNC);
    }
    if (random2 == 2)
    {
        PlaySound(TEXT("fon2.wav"), NULL, SND_ASYNC);
    }
    if (random2 == 3)
    {
        PlaySound(TEXT("fon3.wav"), NULL, SND_ASYNC);
    }
    if (random2 == 4)
    {
        PlaySound(TEXT("fon4.wav"), NULL, SND_ASYNC);
    }
    if (random2 == 5)
    {
        PlaySound(TEXT("fon5.wav"), NULL, SND_ASYNC);
    }
    if (random2 == 6)
    {
        PlaySound(TEXT("fon6.wav"), NULL, SND_ASYNC);
    }
    while (true)
    {
        MiniGame.showAlph();
        MiniGame.GetWord(words[random]);
        if (MiniGame.win == 1)
        {
            finish = clock();
            win(words[random], MiniGame.hod, start,finish,wins,loses);
            
            _getch();
            goto tryAgain;
        }
        MiniGame.EnterX(MiniGame, words[random]);
        if (MiniGame.lifes == 0)
        {
            finish = clock();
            lose(words[random], MiniGame.hod, start, finish,wins,loses);
            
            _getch();
            goto tryAgain;
        }
        
        MiniGame.showAlph();
        MiniGame.GetWord(words[random]);
    }
    

}
    


    
    
