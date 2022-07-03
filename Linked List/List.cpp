#include<stdio.h>
#include<iostream>
#include "Linked_list.h"
using namespace std;

int main(){
    List Link;
    //pushing element in front
    Link.push_front(3);
    Link.push_front(1);

    //pushing element at back
    Link.push_back(7);
    Link.push_back(8);

    //inserting an element
    Link.insert(4,2);
    
    //displaying element
    Link.display();

    //reverse a linked list
    Link.reverse();
    Link.display();
    return 0;
}