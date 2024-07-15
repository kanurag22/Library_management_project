using namespace std;

typedef struct date
{
    int day;
    int month;
    int year;
}Date;

enum State
{
    ON_SHELF,
    CHECKED_OUT
};

class Book
{
    private:
        char *author;
        Date pub_date;
        char *title;
        char *pub_location;
        char *pub_name;
        State book_state;
    public:
        Book();
        void get_book();
        void show_book();
};

class Periodical
{
    private:
        char *pd_author;
        Date  pd_pub_date;
        char *pd_title;
        char *pd_name;
        char *pd_page_range;
        State pd_state;
    public:
        Periodical();
};

class Dvd
{
    private:
        char *dd_artist;
        char *dd_Title;
        char *dd_lable;
        Date dd_date;
        State dd_state;
    public:
        Dvd();
};

class Library:public Book
{
    private:
        Book b_obj;
        Dvd  d_obj;
        Periodical p_obj;
    public:
        int main_menu();
        void add_book();
        void display_book();
};
