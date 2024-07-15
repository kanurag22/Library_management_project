#include"header.h"
#include"classes.h"


Book::Book()
{
#ifdef DEBUG
    cout<<"Begin : "<<__func__<<endl;
#endif
    author = new char[125];
    title = new char[125];
    pub_location = new char[125];
    pub_name = new char[125];
    book_state = ON_SHELF;
#ifdef DEBUG
    cout<<"End : "<<__func__<<endl;
#endif
 
}
