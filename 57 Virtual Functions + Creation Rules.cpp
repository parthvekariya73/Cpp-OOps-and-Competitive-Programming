#include<iostream>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r) {
            title = s;
            rating = r;
        }
        virtual void display() {
             cout << "bogs code " << endl;
        }
};

class CWHVideo : public CWH{
    float video_length;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            video_length = vl;
        }
        void display() {
            cout << "This is Amazing video with title " << title << endl
                << "Ratings: " << rating << " out of 5 star " << endl
                << "Length of this video is : " << video_length << " minuts " << endl;
        }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int w): CWH(s, r){
            words = w;
        }
        void display() {
            cout << "This is Amazing text tutorials with title " << title << endl
                << "Ratings of this text tutorials : " << rating << " out of 5 star" << endl
                << "Numbers of words is : " << words << " words " << endl;
        }
};

int main()
{
    string title;
    float rating, vlen;
    int word;

    // CWH Video class
    title = "PHP tutorial";
    vlen = 12.32;
    rating = 4.23;
    CWHVideo phpVideo(title, rating, vlen);
    // phpVideo.display();

    // CWH Video class
    title = "PHP text tutorial";
    word = 334;
    rating = 3.93;
    CWHText phpText(title, rating, word);
    phpText.display();
    

    CWH* tuts[2];
    tuts[0] = &phpVideo;
    tuts[1] = &phpText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}