#include"header.h"
#include"classes.h"


Dvd::Dvd()
{
#ifdef DEBUG
    cout<<"Begin : "<<__func__<<endl;
#endif
    dd_artist = new char[125];
    dd_Title = new char[125];
    dd_lable = new char[125];

#ifdef DEBUG
    cout<<"End : "<<__func__<<endl;
#endif
 
}
