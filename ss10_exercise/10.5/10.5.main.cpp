////
////  10.5.cpp
////  ss10_exercise
////
////  Created by 王星洲 on 2018/4/12.
////  Copyright © 2018年 王星洲. All rights reserved.
////
//
//#include "10.5.hpp"
//#include <iostream>
//#include <cctype>  // or ctype.h
//int main()
//{
//    using namespace std;
//    CStack st; // create an empty stack
//    char ch;
//    customer cu;
//    cout << "Please enter A to add a customer,\n"
//    << "P to process a customer, or Q to quit.\n";
//    while (cin >> ch && toupper(ch) != 'Q')
//    {
//        while (cin.get() != '\n')
//            continue;
//        if (!isalpha(ch))
//        {
//            cout << '\a';
//            continue;
//        }
//        switch(ch)
//        {
//            case 'A':
//            case 'a':
//                cout << "Enter customer's name: ";
//                cin.getline(cu.fullname,35);
//                cout << "Enter payment: ";
//                cin>>cu.payment;
//                if (st.isfull())
//                    cout << "stack already full\n";
//                else
//                    st.push(cu);
//                break;
//            case 'P':
//            case 'p':
//                if (st.isempty())
//                    cout << "stack already empty\n";
//                else
//                {
//                    st.pop(cu);
//                    cout << cu.fullname << " payed.\n";
//                    cout << "Now the summation of payment is " << st.returnSum() << " yuan.\n";
//                }
//                break;
//        }
//        cout << "\nPlease enter A to add a customer,\n"
//        << "P to process a customer, or Q to quit.\n";
//    }
//    cout << "\nBye\n";
//    return 0;
//}
