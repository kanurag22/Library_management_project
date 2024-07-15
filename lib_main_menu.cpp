#include"header.h"
#include"classes.h"


int  Library::main_menu()
{
#ifdef DEBUG
    cout<<"Begin : "<<__func__<<endl;
#endif
    int command;
    cout<<" || ======= Library Inventory Manager ======="<<endl;
    cout<<" | 0  - Quit"<<endl;
    cout<<" | 1  - Add Book"<<endl;
    cout<<" | 2  - Add Dvd"<<endl;
    cout<<" | 3  - Add Periodical"<<endl;
    cout<<" | 11  - Display all collections"<<endl;
    cout<<" | 12  - Display book collection"<<endl;
    cout<<" | 13  - Display periodical collection"<<endl;
    cout<<" | 14  - Display DVD collection"<<endl;
    cout<<" | 21 - Checkout book"<<endl;
    cout<<" | 22 - Checkout periodical"<<endl;
    cout<<" | 23 - Checkout DVD"<<endl;
    cout<<" | 31 - Checkin book"<<endl;
    cout<<" | 32 - Checkin periodical"<<endl;
    cout<<" | 33 - Checkin DVD"<<endl;
    cout<<" | ====================================="<<endl;
    cout<<" | Command: ";
    cin>>command;
    cin.ignore();
#ifdef DEBUG
    cout<<"End : "<<__func__<<endl;
#endif
    return command;
 
}
