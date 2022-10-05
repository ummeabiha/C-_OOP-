//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

class THE_TIME
{
    private:
    int hr;  
    int min; 
    int sec; 
    
    public:
    THE_TIME(int hours, int minutes, int seconds);
    THE_TIME();
    void setTime(int hours, int minutes, int seconds);
    void getTime(int& hours, int& minutes, int& seconds) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
	bool equalTime(const THE_TIME& otherClock) const;

};

void THE_TIME::setTime(int hours, int minutes, int seconds)
{
	if(0 <= hours && hours < 24)
		hr = hours;
	else 
		hr = 0;

	if(0 <= minutes && minutes < 60)
		min = minutes;
	else 
		min = 0;

	if(0 <= seconds && seconds < 60)
		sec = seconds;
	else 
		sec = 0;
}

void THE_TIME::getTime(int& hours, int& minutes, int& seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
}

void THE_TIME::printTime() const
{  if(hr < 10)
	   cout<<"0";
	cout<<hr<<":";

	if(min < 10)
	   cout<<"0";
	cout<<min<<":";

	if(sec < 10)
	   cout<<"0";
	cout<<sec<<endl<<endl;
}

void THE_TIME::incrementHours()
{
	hr++;
	if(hr > 23)
 	  hr = 0;
}

void THE_TIME::incrementMinutes()
{
	min++;
	if(min > 59)
	{
	   min = 0;
	   incrementHours(); //increment hours
	}
}

void THE_TIME::incrementSeconds()
{
    sec++;
	if(sec > 59)
	{
	   sec = 0;
	   incrementMinutes(); //increment minutes
	}
}

bool THE_TIME::equalTime(const THE_TIME& otherClock) const
{
   return(hr == otherClock.hr 
 	    && min == otherClock.min 
          && sec == otherClock.sec);
}

THE_TIME::THE_TIME(int hours, int minutes, int seconds)
{
	setTime(hours, minutes, seconds);
}

THE_TIME::THE_TIME()  //default constructor
{
	setTime(0, 0, 0);
}

int main()
{
    THE_TIME cellPhoneClock;
    THE_TIME myWatch;
    int hrs, mins, secs;

    cout << "Please enter the hours for the cell phone clock.\n";
    cin >> hrs >>mins >>  secs;
    cellPhoneClock.setTime(hrs, mins, secs);
    cellPhoneClock.printTime();
    
    cout << "Increment Hours.\n";
    cellPhoneClock.incrementHours();
    cellPhoneClock.printTime();
    
    cout << "Increment Minutes.\n";
    cellPhoneClock.incrementMinutes();
    cellPhoneClock.printTime();
    
    cout << "Increment Seconds.\n";
    cellPhoneClock.incrementSeconds();
    cellPhoneClock.printTime();

    return 0;
}

