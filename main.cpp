/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mostafa Elgayar
 *
 * Created on May 30, 2017, 4:16 PM
 */

#include <cstdlib>
#include "List.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    List Arabella;

    Arabella.AddNode(3);
    Arabella.AddNode(5);
    Arabella.AddNode(7);
    Arabella.AddNode(9);
    Arabella.PrintList();
    
    Arabella.DeleteNode(3);
    Arabella.PrintList();

    return 0;
}

