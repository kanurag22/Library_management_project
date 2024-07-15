#include"header.h"
#include"classes.h"


int main()
{
    Library l;
    int ch;
#ifdef DEBUG
    cout<<"Begin : "<<__func__<<endl;
#endif
    while(1)
    {
        ch = l.main_menu();
        l.add_book();
    }
#ifdef DEBUG
    cout<<"End : "<<__func__<<endl;
#endif
 
    return 0;
}
