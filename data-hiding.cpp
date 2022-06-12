#include <iostream>
using namespace std;

// data hiding is nothing but hiding data from outside world so that no one accidentally manipulate that data
// it is used for data members in class by using private keyword
// suppose we take a example of a music player and we know that volume doesnt goes more than 100
// so we keep the member private so that it wont go more than that by preventing and taking measures.

class MusicPlayer
{
    int volume;
public:
    MusicPlayer():volume{0}{}

    void setVolume(int x)
    {
        if(x >=0 and x <= 100)
        {
            volume =x;
            cout << "Set volume" << endl;
        }
        else{
            cout << "cant Set volume" << endl;
        }
    }

    void GetVolume()
    {
        cout << volume << endl;
    }
};

int main()
{
    MusicPlayer mp = MusicPlayer();
    mp.GetVolume();

    mp.setVolume(1000);
    mp.GetVolume();

    mp.setVolume(100);
    mp.GetVolume();

    return 0;
}
