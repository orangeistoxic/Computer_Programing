#ifndef DATE2_H
#define DATE2_H

class Date{

    public:
    Date(int=0,int=0,int=0);

    void print() const;

    Date &setMonth(int);
    Date &setDay(int);
    Date &setYear(int);

    void checkDay();

    ~Date();
    
    private:

    int month;
    int day;
    int year;
};

#endif