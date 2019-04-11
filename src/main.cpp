#include <iostream>
#include "class/renderables/obj/Player.h"

using namespace std;

string mainScreen(Map *m, Player *p)
{
    cout << endl << "WELCOME TO ENGI::~FARM()" << endl;
    cout << "=====================================================" << endl;
    m->print();
    p->printInventory();
    cout << endl;
    cout << "Money :" << p->getMoney() << endl;
    cout << "Water :" << p->getBottle() << endl;
    cout << "=====================================================" << endl;
    cout << "Command: ";
    
    string input;
    cin >> input;

    cout << endl;

    return input;
}

int main()
{
    Map m;
    Player p(&m);

    Cell *c;
    // Set GrassLand
    Grassland gland1(0, 3);
    gland1.setGrass(false);
    Grassland gland2(0, 7);
    gland2.setGrass(false);
    Grassland gland3(0, 8);
    gland3.setGrass(false);
    Grassland gland4(1, 3);
    gland4.setGrass(false);
    Grassland gland5(1, 7);
    gland5.setGrass(false);
    Grassland gland6(1, 8);
    gland6.setGrass(false);
    Grassland gland7(2, 3);
    gland7.setGrass(false);
    Grassland gland8(2, 7);
    gland8.setGrass(false);
    Grassland gland9(2, 8);
    gland9.setGrass(false);
    Grassland gland10(2, 9);
    gland10.setGrass(false);
    Grassland gland11(3, 0);
    gland11.setGrass(false);
    Grassland gland12(3, 1);
    gland12.setGrass(false);
    Grassland gland13(3, 2);
    gland13.setGrass(false);
    Grassland gland14(3, 3);
    gland14.setGrass(false);
    Grassland gland15(3, 7);
    gland15.setGrass(false);
    Grassland gland16(3, 8);
    gland16.setGrass(false);
    Grassland gland17(4, 0);
    gland17.setGrass(false);
    Grassland gland18(4, 1);
    gland18.setGrass(false);
    Grassland gland19(4, 2);
    gland19.setGrass(false);
    Grassland gland20(4, 3);
    gland20.setGrass(false);
    Grassland gland21(4, 7);
    gland21.setGrass(false);
    Grassland gland22(4, 8);
    gland22.setGrass(false);
    Grassland gland23(4, 9);
    gland23.setGrass(false);
    Grassland gland24(5, 0);
    gland24.setGrass(false);
    Grassland gland25(5, 1);
    gland25.setGrass(false);
    Grassland gland26(5, 2);
    gland26.setGrass(false);
    Grassland gland27(5, 3);
    gland27.setGrass(false);
    Grassland gland28(5, 7);
    gland28.setGrass(false);
    Grassland gland29(5, 8);
    gland29.setGrass(false);
    Grassland gland30(5, 9);
    gland30.setGrass(false);
    Grassland gland31(6, 0);
    gland31.setGrass(false);
    Grassland gland32(6, 1);
    gland32.setGrass(false);
    Grassland gland33(6, 2);
    gland33.setGrass(false);
    Grassland gland34(6, 3);
    gland34.setGrass(false);
    Grassland gland35(6, 4);
    gland35.setGrass(false);
    Grassland gland36(6, 5);
    gland36.setGrass(false);
    Grassland gland37(6, 6);
    gland37.setGrass(false);
    Grassland gland38(6, 7);
    gland38.setGrass(false);
    Grassland gland39(6, 8);
    gland39.setGrass(false);
    Grassland gland40(6, 9);
    gland40.setGrass(false);
    Grassland gland41(7, 0);
    gland41.setGrass(false);
    Grassland gland42(7, 1);
    gland42.setGrass(false);
    Grassland gland43(7, 2);
    gland43.setGrass(false);
    Grassland gland44(7, 3);
    gland44.setGrass(false);
    Grassland gland45(7, 4);
    gland45.setGrass(false);
    Grassland gland46(7, 5);
    gland46.setGrass(false);
    Grassland gland47(7, 6);
    gland47.setGrass(false);
    Grassland gland48(7, 7);
    gland48.setGrass(false);
    Grassland gland49(7, 8);
    gland49.setGrass(false);
    Grassland gland50(7, 9);
    gland50.setGrass(false);
    Grassland gland51(8, 0);
    gland51.setGrass(false);
    Grassland gland52(8, 1);
    gland52.setGrass(false);
    Grassland gland53(8, 2);
    gland53.setGrass(false);
    Grassland gland54(8, 3);
    gland54.setGrass(false);
    Grassland gland55(8, 4);
    gland55.setGrass(false);
    Grassland gland56(8, 5);
    gland56.setGrass(false);
    Grassland gland57(8, 6);
    gland57.setGrass(false);
    Grassland gland58(8, 7);
    gland58.setGrass(false);
    Grassland gland59(8, 8);
    gland59.setGrass(false);
    Grassland gland60(8, 9);
    gland60.setGrass(false);
    Grassland gland61(9, 0);
    gland61.setGrass(false);
    Grassland gland62(9, 1);
    gland62.setGrass(false);
    Grassland gland63(9, 2);
    gland63.setGrass(false);
    Grassland gland64(9, 3);
    gland64.setGrass(false);
    Grassland gland65(9, 4);
    gland65.setGrass(false);
    Grassland gland66(9, 5);
    gland66.setGrass(false);
    Grassland gland67(9, 6);
    gland67.setGrass(false);
    Grassland gland68(9, 7);
    gland68.setGrass(false);
    Grassland gland69(9, 8);
    gland69.setGrass(false);
    Grassland gland70(9, 9);
    gland70.setGrass(false);
    // Set Coop
    Coop coop1(0, 0);
    coop1.setGrass(false);
    Coop coop2(0, 1);
    coop2.setGrass(false);
    Coop coop3(0, 2);
    coop3.setGrass(false);
    Coop coop4(1, 0);
    coop4.setGrass(false);
    Coop coop5(1, 1);
    coop5.setGrass(false);
    Coop coop6(1, 2);
    coop6.setGrass(false);
    Coop coop7(2, 0);
    coop7.setGrass(false);
    Coop coop8(2, 1);
    coop8.setGrass(false);
    Coop coop9(2, 2);
    coop9.setGrass(false);
    // Set Barn
    Barn barn1(0, 4);
    barn1.setGrass(false);
    Barn barn2(0, 5);
    barn2.setGrass(false);
    Barn barn3(0, 6);
    barn3.setGrass(false);
    Barn barn5(1, 4);
    barn5.setGrass(false);
    Barn barn6(1, 5);
    barn6.setGrass(false);
    Barn barn7(1, 6);
    barn7.setGrass(false);
    Barn barn9(2, 4);
    barn9.setGrass(false);
    Barn barn10(2, 5);
    barn10.setGrass(false);
    Barn barn11(2, 6);
    barn11.setGrass(false);
    Barn barn13(3, 4);
    barn13.setGrass(false);
    Barn barn14(3, 5);
    barn14.setGrass(false);
    Barn barn15(3, 6);
    barn15.setGrass(false);
    Barn barn17(4, 4);
    barn17.setGrass(false);
    Barn barn18(4, 5);
    barn18.setGrass(false);
    Barn barn19(4, 6);
    barn19.setGrass(false);
    Barn barn21(5, 4);
    barn21.setGrass(false);
    Barn barn22(5, 5);
    barn22.setGrass(false);
    Barn barn23(5, 6);
    barn23.setGrass(false);

    // Facility
    Truck truck(0, 9);

    Mixer mixer(1, 9);

    Well well(3, 9);

    // Set Grassland
    c = &gland1;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland2;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland3;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland4;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland5;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland6;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland7;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland8;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland9;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland10;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland11;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland12;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland13;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland14;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland15;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland16;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland17;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland18;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland19;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland20;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland21;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland22;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland23;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland24;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland25;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland26;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland27;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland28;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland29;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland30;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland31;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland32;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland33;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland34;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland35;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland36;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland37;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland38;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland39;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland40;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland41;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland42;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland43;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland44;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland45;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland46;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland47;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland48;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland49;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland50;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland51;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland52;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland53;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland54;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland55;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland56;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland57;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland58;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland59;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland60;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland61;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland62;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland63;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland64;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland65;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland66;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland67;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland68;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland69;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &gland70;
    m.setObjectAt(c->getX(), c->getY(), c);
    // Set Coop
    c = &coop1;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop2;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop3;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop4;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop5;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop6;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop7;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop8;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &coop9;
    m.setObjectAt(c->getX(), c->getY(), c);
    // Set Barn
    c = &barn1;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn2;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn3;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn5;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn6;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn7;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn9;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn10;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn11;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn13;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn14;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn15;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn17;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn18;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn19;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn21;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn22;
    m.setObjectAt(c->getX(), c->getY(), c);
    c = &barn23;
    m.setObjectAt(c->getX(), c->getY(), c);

    // c - &truck;
    // m.setObjectAt(c->getX(), c->getY(), c);

    p.moveRight();
    p.moveRight();
    p.moveRight();
    p.moveDown();

    string input = "";

    while(input != "quit"){
        input = mainScreen(&m, &p);

        if(input == "up")
            p.moveUp();
        else if(input == "down")
            p.moveDown();
        else if(input == "left")
            p.moveLeft();
        else if(input == "right")
            p.moveRight();
        else if(input == "interact") {}
        else if(input == "mix") {}
        else if(input == "talk") {}
        else if(input == "grow") {}
        else
        {
            cout << "Command tidak dikenal." << endl;
        }
        

        cout << "-------------------------------------------------------------------" << endl;
    }

    cout << "Thank you!" << endl;
    cout << "13517094 - Harry Prabowo" << endl;
    cout << "13517103 - Vincent Chuardi" << endl;
    cout << "13517094 - Lucky Jonathan Chandra" << endl;
    cout << "13517094 - Fata Nugraha" << endl << endl;

    cout << "TUBES OOP 1 - ENGI'S FARM" << endl << endl;

    return 0;
}