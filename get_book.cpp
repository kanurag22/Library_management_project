#include"header.h"
#include"classes.h"


void Book::get_book()
{
   
    char buffer[125];
#ifdef DEBUG
    cout<<"Begin : "<<__func__<<endl;
#endif

    cout<<"Enter author name : ";
    cin.getline(buffer,125);
    strncpy(author,buffer,125);
    author[125] = '\0';

    cout<<"Enter Date as DD/MM/YYYY : ";
    cin>>pub_date.day>>pub_date.month>>pub_date.year;
    cin.ignore();

    cout<<"Enter Title : ";
    cin.getline(buffer,125);
    strncpy(title,buffer,125);
    title[125]= '\0';

    cout<<"Enter Publication Location : ";
    cin.getline(buffer,125);
    strncpy(pub_location,buffer,125);
    pub_location[125] = '\0';
    
    cout<<"Enter the Publisher Name : ";
    cin.getline(buffer,125);
    strncpy(pub_name,buffer,125);
    pub_name[125] = '\0';

    int state;
    cout<<"Enter state (0 for ON_SHELF , 1 for CHECK_OUT) : ";
    cin>>state;
    book_state = static_cast<State>(state);
    cin.ignore();

#ifdef DEBUG
    cout<<"End : "<<__func__<<endl;
#endif
}
