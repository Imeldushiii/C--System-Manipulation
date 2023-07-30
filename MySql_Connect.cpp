#include <iostream>
#include <windows.h>
#include <winsock.h>
#include <mysql.h>

using namespace std;

int main()
{
    MYSQL* conn;
    conn = mysql_init(0);
    //my_sql_real_connect(inicjalizacja, adres, nazwaUzytkownika, haslo, nazwa bazy, port, unixsocket, flaga klienta)
    conn = mysql_real_connect(conn, "127.0.0.1", "root", "", "hej", 0, NULL, 0);
    //Jezeli nie polaczono to zwraca 0
    if (conn) {
        cout << "Polaczono";
    }
    else {
        cout << "Blad";
    }
    return 0;
}
