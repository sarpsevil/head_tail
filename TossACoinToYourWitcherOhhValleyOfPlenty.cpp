/* istedim ki enter tusuna basildigi zaman yazi tura atan bir program yazayim.
ama enter tusu ile aktif olan bir programin yaziminin anlamsiz zor oldugunu 
internettiki "abilerim" bana "kibar" bir yolla anlatti. Programi
hic degistirmeden birakiyorum cunku onunla kapanmamıs bir davamiz var
ve zamani gelince ifadesini alicam. O zamana kadar vm1 (version minus 1.
cunku gelismiyor bence geriye gitmis versiyon.) i yazdim. onu inceleyebilirsiniz*/  

#include <iostream>

using namespace std;

string CoinToss()
{
    int toss = rand() % 2;

    if (toss == 1)
        return "head";
    else
        return "tail";
    
}

int main()
{
    srand(time(NULL));
    char Selection {};

    cout << "1. Press ENTER key to toss." << endl;
    cout << "(q/Q) Keys to quit the program."<< endl;

    do
    {
        char Selection2 {};
        std::cin.getchar();
        string result;
        
        if (cin){
            result = CoinToss();
            cout << result << endl;
        }
    } while (Selection != 'q' && Selection != 'Q');
    
}
