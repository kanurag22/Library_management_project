#include"header.h"
#include"classes.h"


void Book::show_book()
{
#ifdef DEBUG
    cout<<"Begin : "<<__func__<<endl;
#endif
    cout<<"Author : "<<author<<" | ";
    cout<<"Day : "<<pub_date.day<<"/ Month : "<<pub_date.month<<"/ Year : "<<pub_date.year<<" | ";
    cout<<"Tilte : "<<title<<" | ";
    cout<<"Publication Location : "<<pub_location<<" | ";
    cout<<"Publisher Name : "<<pub_name<<" | ";
    cout<<"State : "<<book_state<<endl;
#ifdef DEBUG
    cout<<"End : "<<__func__<<endl;
#endif
 
}
