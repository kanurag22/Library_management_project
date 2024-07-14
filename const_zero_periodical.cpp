#include"header.h"
#include"classes.h"


Periodical::Periodical()
{
#ifdef DEBUG
    cout<<"Begin : "<<__func__<<endl;
#endif
    pd_author = new char[125];
    pd_title = new char[125];
    pd_name = new char[125];
    pd_page_range = new char[125];
#ifdef DEBUG
    cout<<"End : "<<__func__<<endl;
#endif
 
}
