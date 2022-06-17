#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string a, float r)
    {
        title = a;
        rating = r;
    }
    virtual void display()=0; // do-nothing function -> pura virtual function
    
    
};
class video : public CWH
{
protected:
    float video_length;

public:
    video(string a, float r, float vr) : CWH(a, r)
    {
        video_length = r;
    }
    void display()
    {
        cout << "The Title of Video Is : " << title << endl;
        cout << "The Video rating is : " << rating << " Out of 5 " << endl;
        cout << "The Video Is : " << video_length << " in Second" << endl;
    }
};

class webpage : public CWH
{
protected:
    int word_count;

public:
    webpage(string a, float r, int wc) : CWH(a, r)
    {
        word_count = wc;
    }
    // void display()
    // {
    //     cout << "The Title of Web page Is : " << title << endl;
    //     cout << "The web page rating rating is : " << rating << " Out of 5 " << endl;
    //     cout << "The Video Is : " << word_count << endl;
    // }
};

int main()
{
    string title;
    float rating, video_length;
    int word;
    title = "KGF Chapter 2";
    rating = 4.87;
    video_length = 894.45;
    word = 455;

    video c1(title, rating, video_length);

    title = "KGF Chapter 2";
    rating = 4.47;
    word = 455;

    webpage c2(title, rating, word);

    CWH *tut[2];
    tut[0] = &c1;
    tut[1] = &c2;

    tut[0]->display();
    tut[1]->display();

    return 0;
}