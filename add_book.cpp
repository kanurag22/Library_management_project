#include"header.h"
#include"classes.h"


void Library::add_book()
{
#ifdef DEBUG
    cout<<"Begin : "<<__func__<<endl;
#endif
   Book b;
   b.get_book();
   ofstream outfile("books.dat",ios::binary);
   outfile.write(reinterpret_cast<char*>(&b),sizeof(b));   
#ifdef DEBUG
    cout<<"End : "<<__func__<<endl;
#endif
 
}
