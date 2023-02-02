#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "print.h"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <vector>
#include"string"
#include <map>
#include <iomanip>


using namespace std;


void lose(string x, int h, clock_t start, clock_t finish, int &wins, int &loses)
{
	float time;
	loses++;
	time = (finish - start) / CLK_TCK;
	PlaySound(TEXT("ahaha.wav"), NULL, SND_ASYNC);
	system("cls");
	cout << "                    #////    #/                 #//           \\\\\\       \\\\\\                                             "; cout << endl;
	cout << "    /    /         #//      #/               #///               \\\\\\\\    \\\\                                              "; cout << endl;
	cout << "/ //    /        #//    #///         #///@////#                      \\\\     \\\\                                          "; cout << endl;
	cout << "/#/   //        &//   #////&///@///&////      #                        \\\\     \\                                         "; cout << endl;
	cout << "//  //         #//////                        #                          \\            "; printRed("Время игры : "); printGreen(time); cout << " "; printGreen("сек."); cout << "      " << endl;
	cout << "//@/         #//                              #                                                                         "; cout << endl;
	cout << "/         #//                                 #     "; printRedEndl("#   #  ##   #  #   #    ##   #### #### ");
	cout << "//      #&/                                   #     "; printRedEndl(" # #  #  #  #  #   #   #  #  #    #    ");
	cout << "&/   #//                                      #     "; printRedEndl("  #   #  #  #  #   #   #  #  #### #### ");
	cout << "//#///&                /                      #     "; printRedEndl("  #   #  #  #  #   #   #  #     # #    ");
	cout << "///       /           /                       #     "; printRedEndl("  #    ##    ##    ###  ##   #### #### ");
	cout << "##//    @/           //                      ===                                                                      "; cout << endl;
	cout << "///   @/          @//                       /.-..\\                                                                   "; cout << endl;
	cout << "//////          //                          :x x :        ";printRed("Загаданное слово : "); printGreen(x);cout <<"                    "; cout << endl;
	cout << "//&&          //                             !__!         ";printRed("Сделано ходов : "); printGreen(h);    cout << "               "; cout << endl;
	cout << "////        /&                                ::                                                       #%               "; cout << endl;
	cout << "/@///    ///    /                           #00100#                                                    %#               "; cout << endl;
	cout << "////@////     //                            !10!#0!                                                    ##               "; cout << endl;
	cout << "///#/      /#/                              01!!0!!                                              #@@@###%####%%%     "; cout << endl;
	cout << "/////   ///                                010!!##!                                                    #%               "; cout << endl;
	cout << "/###/////                                   1!00!0!                                                @#  @#               "; cout << endl;
	cout << "/////                                       1!1  1!!                                                 %###               "; cout << endl;
	cout << "/&&//      /                               1!0  01!                                                   @###              "; cout << endl;
	cout << "//////    //                                1#   !1                                                    %# %#            "; cout << endl;
	cout << "//###//  /&                                 //   //                                                    #@   #@          "; cout << endl;
	cout << "//////////                                                                                             ##               "; cout << endl;
	cout << "/&&///                                                                                           ======----====        "; cout << endl;
	cout << "///////=========       wWWWWWw       ======-----==========            wWWWWWWWw         ======---=========-------======"; cout << endl;
	cout << "//@@@//==---=========------------===========----=======---=======------------------================----===========---==="; cout << endl;
	cout << "                                           "; printBlue("Выиграл: "); printGreen(wins); printBlue(" Проиграл: "); printRed(loses); cout << "                    "; printBlue("Press any key");
	
	Sleep(6000);
	
	
	
	
	
}