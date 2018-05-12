//
//  10.8.cpp
//  ss10_exercise
//
//  Created by 王星洲 on 2018/4/12.
//  Copyright © 2018年 王星洲. All rights reserved.
//

#include "10.8.hpp"
#include <iostream>
using namespace std;
CList::CList(int ar[], int len)
{
    m_room = (len < MAX)?len:MAX;
    m_length = (len < MAX)?len:MAX;
    for(int i = 0;i < len && i < MAX;i++)
    {
        m_elements[i] = ar[i];
    }
}
void CList::append(int element)
{
    if (isFull())
    {
        cout<<"The list is full!"<<endl;
    }
    else
    {
        m_elements[m_length] = element;
        m_length ++;
    }
}
bool CList::isEmpty() const
{
    if(m_length == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool CList::isFull()const
{
    if(m_length == m_room)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void CList::visit(void (*pf)(int &))
{
    for(int i=0;i<m_length;i++)
    {
        pf(m_elements[i]);
    }
}
void print(int & a)
{
    cout<<a<<" ";
}
