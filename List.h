/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: Mostafa Elgayar
 *
 * Created on May 30, 2017, 4:20 PM
 */

#ifndef LIST_H
#define LIST_H

class List{
    private:
            typedef struct node{
                    int data;
                    node* next;
            }* nodePtr;

            nodePtr head;
            nodePtr curr;
            nodePtr temp;

    public:
            List();
            void AddNode(int addData);
            void DeleteNode(int delData);
            void PrintList();
};

#endif /* LIST_H */

