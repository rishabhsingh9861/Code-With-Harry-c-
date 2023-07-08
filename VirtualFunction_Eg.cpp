#include <iostream>
#include <string.h>
using namespace std;

class CWH
{
protected:
     string title;
     float rating;

public:
     CWH(string s, float r)
     {
          title = s; // title mai s dalna
          rating = r;
     }

     virtual void display()
     {
          //  cout<<"bogus code"<<endl ;   // point 5  of rules
     }
};

class CWHVideo : public CWH
{
     float videolength;

public:
     CWHVideo(string s, float r, float vl) : CWH(s, r)
     {
          videolength = vl;
     }

     void display()
     {
          cout << "THis is an amazing video with title " << title << endl;
          cout << "Rating " << rating << " out of 5  stars " << endl;
          cout << "length of the video " << videolength << " minutes" << endl;
     }
};
class CWHText : public CWH
{
     int wordlength;

public:
     CWHText(string s, float r, float wl) : CWH(s, r)
     {
          wordlength = wl;
     }

     void display()
     {

          cout << "THis is an amazing Text Tutorial with title " << title << endl;
          cout << "Rating of Text tutorial is  " << rating << " out of 5  stars " << endl;
          cout << "No of word in Text Tuoruial is  " << wordlength << " words" << endl;
     }
};

int main()
{
     string title;
     float rating, vlen;
     int words;

     // for code with wirth harry video
     title = "Rishabh C++";
     vlen = 10.56;

     rating = 4.89;

     CWHVideo rvideo(title, rating, vlen);
     //  rvideo.display();

     // for code with wirth harry text

     title = "Rishabh C++ Text ";
     words = 528;
     rating = 4;
     CWHText rtext(title, rating, words);
     // rtext.display();

     CWH *tuts[2];
     tuts[0] = &rvideo;
     tuts[1] = &rtext;

     tuts[0]->display();
     tuts[1]->display();

     return 0;
}

/* Rules For Virtual Functions
1. They cannot be static
2. They are acessed by object  pointer
3. Virtual function can be a friend of another class
4. A Virtual function in Base class cannot be used
5. If a virtual defined in the base class , there is no necessity of redefining it in the derived class
*/