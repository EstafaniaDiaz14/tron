#include <iostream>
#include <ftxui/screen/screen.hpp>
#include <thread>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );

    int x=0;
    while (true)
    {
        x++;
        pantalla.Clear();
        this_thread::sleep_for(0.1s);
        
        pantalla.PixelAt(x,5).character = "   ,_o   ";
        pantalla.PixelAt(x,6).character = ".-/c-/,::";
        pantalla.PixelAt(x,7).character = "(_)'==(_)";

        pantalla.Print();
        cout<<pantalla.ResetPosition();
    }
    
}