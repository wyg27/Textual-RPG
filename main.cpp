#include <iostream>
#include <string>
#include "Personnage.h"
#include "functions.h"


//CONFIG


using namespace std;


int main()
{
    //CONFIGURATION DE L'INTERFACE

    cout << color(COLOR_WHITE) << color(BACKGROUND_BLACK);



    string nom;
    int choix;
    Personnage joueur; //init(nom, lvl, pdv, xpValue, atk);

    cout << "你好\n请输入角色的名字：";
    cin >> nom;
    joueur.init(nom, 1, 13, 5, 3);
    cout << "恭喜你！角色 " << joueur.getName() << " 已经创建好了。\n";

    while(joueur.getLife() > 0) {
        Personnage nmy;
        nmy.init("蚯蚓", 1, 5, 4, 2);
        nmy.setLife(5);
        choix = 0;
        cout << "一个 " + nmy.getName() + " 出现了!\n";
        while(nmy.getLife() > 0 && joueur.getLife() > 0) {
            choix = 0;
            cout << "该怎么办 ?\n1 : 攻击\n2 : 逃跑\n选择 : ";
            cin >> choix;
            clearConsole();
            switch(choix) {
                case 1:
                joueur.attack(&nmy);
                if(nmy.isAlive()) { 
                    nmy.attack(&joueur);
                }
                break;
                case 2:
                cout << "现在不能逃跑...";
                break;
            }
        }
    }
    if (joueur.getLife() < 0) {
        cout << "你死了。\nNAME : " << joueur.getName() << "\nLVL : " << joueur.getLvl() << "\n\n";
        cout << "感谢你能玩这个游戏！" << endl;
    }
    return 0;
}