#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{

    cout << "Reproductor musical, por favor, elija sus temas." << endl;
    cout << "Agregue 5 canciones" << endl;
    string Songs[] = {"", "", "", "", ""};
    int Time[] = {0, 0, 0, 0, 0};
    int sum = 0;
    for (int x = 0; x < 5; x++)
    {
    cin >> ws;
    string song;
    std::getline(std::cin,song);
    Songs[x] = song;
    std::cin >> Time[x];
    sum += Time[x];
    }
    cout << "Cancion 1: " << Songs[0] << " " << Time[0] << " minutos." << endl;
    cout << "Cancion 2: " << Songs[1] << " " << Time[1] << " minutos." << endl;
    cout << "Cancion 3: " << Songs[2] << " " << Time[2] << " minutos." << endl;
    cout << "Cancion 4: " << Songs[3] << " " << Time[3] << " minutos." << endl;
    cout << "Cancion 5: " << Songs[4] << " " << Time[4] << " minutos." << endl;
    cout << "El tiempo de reproduccion total es: " << sum << endl;
    string RandomSong = Songs[rand() % 5];
    cout << "Ahora se seleccionara aleatoriamente una cancion, la cancion es: " << RandomSong << endl;

}
