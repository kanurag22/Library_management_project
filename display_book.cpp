#include"header.h"
#include"classes.h"


void Library::display_book()
{
#ifdef DEBUG
    cout<<"Begin : "<<__func__<<endl;
#endif
    Book b;
    ifstream infile("books.dat",ios::binary);
    infile.read(reinterpret_cast<char*>(&b),sizeof(b));
    b.show_book();
#ifdef DEBUG
    cout<<"End : "<<__func__<<endl;
#endif
 
}
