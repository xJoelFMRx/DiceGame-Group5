#include "iostream"
#include "string"

using namespace System;
using namespace std;

int datos = -1; // Letra o Número

int n_part = 0; // Numero partidas
int n_tira = 0; // Numeros tiradas

int m_puntPart = 0; // Maquina puntos partida
int u_puntPart = 0; // Usuario puntos partida

int m_puntGlobal = 0; // Maquina puntos todas las part.
int u_puntGlobal = 0; // Usuario puntos todas las part.

//GENERADOR
int lDado() {
    return rand() % 6 + 1;
}

//GRAFICADOR NUMERO
void gDado(int numero) {
    switch (numero) {
    case 1:
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   *   |" << endl;
        cout << "|       |" << endl;
        cout << " ------- " << endl;
        break;
    case 2:
        cout << " ------- " << endl;
        cout << "|     * |" << endl;
        cout << "|       |" << endl;
        cout << "| *     |" << endl;
        cout << " ------- " << endl;
        break;
    case 3:
        cout << " ------- " << endl;
        cout << "|     * |" << endl;
        cout << "|   *   |" << endl;
        cout << "| *     |" << endl;
        cout << " ------- " << endl;
        break;
    case 4:
        cout << " ------- " << endl;
        cout << "| *   * |" << endl;
        cout << "|       |" << endl;
        cout << "| *   * |" << endl;
        cout << " ------- " << endl;
        break;
    case 5:
        cout << " ------- " << endl;
        cout << "| *   * |" << endl;
        cout << "|   *   |" << endl;
        cout << "| *   * |" << endl;
        cout << " ------- " << endl;
        break;
    case 6:
        cout << " ------- " << endl;
        cout << "| * * * |" << endl;
        cout << "|       |" << endl;
        cout << "| * * * |" << endl;
        cout << " ------- " << endl;
        break;
    default:
        cout << "Número de dado inválido" << endl;
    }
}

//GRAFICADOR LETRA
void gDado_let(int numero) {
    switch (numero) {
    case 1:
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   A   |" << endl;
        cout << "|       |" << endl;
        cout << " ------- " << endl;
        break;
    case 2:
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   B   |" << endl;
        cout << "|       |" << endl;
        cout << " ------- " << endl;
        break;
    case 3:
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   C   |" << endl;
        cout << "|       |" << endl;
        cout << " ------- " << endl;
        break;
    case 4:
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   D   |" << endl;
        cout << "|       |" << endl;
        cout << " ------- " << endl;
        break;
    case 5:
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   E   |" << endl;
        cout << "|       |" << endl;
        cout << " ------- " << endl;
        break;
    case 6:
        cout << " ------- " << endl;
        cout << "|       |" << endl;
        cout << "|   F   |" << endl;
        cout << "|       |" << endl;
        cout << " ------- " << endl;
        break;
    default:
        cout << "Número de dado inválido" << endl;
    }
}

//CONTADOR
int cDados(string a) {
    int res = 0;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;

    for (int i = 0; i < 7; i++) {
        if (a[i] == '1') c1++;
        else if (a[i] == '2') c2++;
        else if (a[i] == '3') c3++;
        else if (a[i] == '4') c4++;
        else if (a[i] == '5') c5++;
        else if (a[i] == '6') c6++;
    }

    if (c1 >= 5 || c2 >= 5 || c3 >= 5 || c4 >= 5 || c5 >= 5 || c6 >= 5) {
        res = 2;
    }

    return res;
}

// 7 DADOS (TIRO)
string sDados() {
    int d1 = lDado();
    int d2 = lDado();
    int d3 = lDado();
    int d4 = lDado();
    int d5 = lDado();
    int d6 = lDado();
    int d7 = lDado();

    string a = to_string(d1)
        + to_string(d2)
        + to_string(d3)
        + to_string(d4)
        + to_string(d5)
        + to_string(d6)
        + to_string(d7);

    return a;
}

//INSTRUCCIONES TEXTUALES
void instrucciones() {
    system("cls");
    string inst =
        "\n######"
        "\n#     # ######  ####  #        ##    ####  "
        "\n#     # #      #    # #       #  #  #      "
        "\n######  #####  #      #      #    #  ####  "
        "\n#   #   #      #  ### #      ######      # "
        "\n#    #  #      #    # #      #    # #    # "
        "\n#     # ######  ####  ###### #    #  ####  "
        "\n"
        "\n- Inicia tirando los 7 dados."
        "\n- Se debe ingresar la cantidad que se lanzaran los dados, debe ser mayor a 5 a lanzadas"
        "\n- Se debe solicitar si los datos tendran valores numericos o letras"
        "\n- Se debe verificar si 5 dados tienen el mismo valor, contaría 2 puntos"
        "\n- Si se consiguen 8 puntos, debe mostrar un mensaje: 'Tuviste suerte'"
        "\n- Si se consiguen 2 puntos, debe mostrar un mensaje: 'Sigue intentando'"
        "\n- Si en el cuarto lanzamiento ya tiene 8 puntos, indicar un mensaje: 'Eres una persona con mucha suerte'\n\n";
    cout << inst;
    system("pause");
}

//SOLO SON USADOS EN presentacion()
void dados_anim(int num, int x, int y) {
    Console::SetCursorPosition(x, y);
    switch (num) {
    case 1:
        cout << " ------- ";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|   O   |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << " ------- ";
        break;
    case 2:
        cout << " ------- ";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|   B   |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << " ------- ";
        break;
    case 3:
        cout << " ------- ";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|   C   |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << " ------- ";
        break;
    case 4:
        cout << " ------- ";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|   D   |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << " ------- ";
        break;
    case 5:
        cout << " ------- ";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "| O   O |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|   O   |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "| O   O |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << " ------- ";
        break;
    case 6:
        cout << " ------- ";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|   F   |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << "|       |";
        y++;
        Console::SetCursorPosition(x, y);
        cout << " ------- ";
        break;
    default:
        cout << "Número de dado inválido" << endl;
    }
}

//PEQUEÑA ANIMACION
void presentacion() {
    Console::CursorVisible = false;
    system("cls");

    // Esperar X segundos
    _sleep(200);

    for (int i = 0; i < 6; ++i) {
        system("cls");
        int dado = lDado();
        dados_anim(dado, 35, 15);
        _sleep(150);
    }

    system("cls");

    Console::SetCursorPosition(9, 15);
    cout << R"(
            ____   _                                 _      _        
           | __ ) (_)  ___  _ __ __   __ ___  _ __  (_)  __| |  ___  
           |  _ \ | | / _ \| '_ \\ \ / // _ \| '_ \ | | / _` | / _ \ 
           | |_) || ||  __/| | | |\ V /|  __/| | | || || (_| || (_) |
           |____/ |_| \___||_| |_| \_/  \___||_| |_||_| \__,_| \___/ 
                                                             
)";
    _sleep(500);
    Console::CursorVisible = true;
}

//PEDIR CUANTAS PARTIDAS JUGARÁ
void iniciar() {
    do {
        system("cls");
        cout << "Ingrese el numero de partidas(>0): ";
        cin >> n_part;
    } while (n_part < 1 || n_part > 20);
}

// PREGUNTAR NUMERO DE TIRADAS
void tiradas() {

    do {
        system("cls");
        cout << "Ingrese el numero de tiradas(>5): ";
        cin >> n_tira;
    } while (n_tira < 5);
}

// PREGUNTAR LETRA O NUMERO
void objetivos() {
    system("cls");
    char opc_;
    do {
        system("cls");
        cout << "El ingreso de datos son en números[N] o letras[L]: ";
        cin >> opc_;
    } while (!(opc_ == 'N' || opc_ == 'n' || opc_ == 'L' || opc_ == 'l'));

    if (opc_ == 'N' || opc_ == 'n') { //NUMERO
        datos = 1;
    }
    else if (opc_ == 'L' || opc_ == 'l') { //LETRA
        datos = 0;
    }
}

//TURNOS
void turno(int num /* 1 MAQUINA - 0 USUARIO */, int turn /*nº turno*/, int num_l /*1 NUM - 0 LETRA*/, int part) {
    system("cls");
    string tiro = sDados();

    cout << "\nPARTIDA N: " << part << "\n";
    if (num == 1) { // MAQUINA

        cout << "\nTURNO nº " << turn << " DE LA MAQUINA\n";
        cout << "\nPUNTAJE PARTIDA: " << m_puntPart << "\n";
        cout << "\nPUNTAJE TOTAL: " << m_puntGlobal << "\n";
    }
    else if (num == 0) { // USUARIO
        cout << "\nTURNO nº " << turn << " DEL USUARIO\n";
        cout << "\nPUNTAJE PARTIDA: " << u_puntPart << "\n";
        cout << "\nPUNTAJE TOTAL: " << u_puntGlobal << "\n";
    }

    // GRAFICAR 7 TIROS
    for (int i = 0; i < 7; i++) {
        if (num_l == 1) {
            gDado(stoi(string(1, tiro[i])));
        }
        else if (num_l == 0) {
            gDado_let(stoi(string(1, tiro[i])));
        }
        _sleep(100);
    }

    // DEFINIR SI SUMA PTJ O NO
    int ptj;
    if (num == 1) { // MAQUINA
        ptj = cDados(tiro);
        m_puntPart += ptj;
        m_puntGlobal += ptj;
        if (ptj == 2) {
            cout << "\n(+2 PUNTOS)\n";
        }
    }
    else if (num == 0) { // USUARIO
        ptj = cDados(tiro);
        u_puntPart += ptj;
        u_puntGlobal += ptj;
        if (ptj == 2) {
            cout << "\n(+2 PUNTOS)\n";
        }
    }

    if (turn == 4 && (u_puntPart >= 8)) {
        cout << "\nEres una persona con mucha suerte, Usuario (8 pts)\n";
    }
    else if (turn == 4 && (m_puntPart >= 8)) {
        cout << "\nEres una persona con mucha suerte, Maquina (8 pts)\n";
    }
}

//LOGICA DE JUEGO
void jugar(int num  /*1 NUM - 0 LETRAS*/, int part/*Nº DE PARTIDAS*/) {
    system("cls");
    int c_part = 1;
    int c_tira = 1; //contadores

    tiradas();
    do {
        do {
            system("cls");
            if (c_tira % 2 == 0) { // TURNO MAQUINA
                turno(1, (c_tira / 2), num, c_part);
                system("pause");
                c_tira++;
            }
            else { //TURNO USUARIO
                turno(0, ((c_tira / 2) + 1), num, c_part);
                system("pause");
                c_tira++;
            }
        } while (c_tira <= n_tira * 2);

        system("cls");
        cout << "\nPARTIDA N" << c_part << " TERMINADA\n";

        if (m_puntPart == 2) {
            cout << "\nSIGUE INTENTANDO (MAQUINA)\n";
        }
        if (u_puntPart == 2) {
            cout << "\nSIGUE INTENTANDO (USUARIO)\n";
        }

        if (m_puntPart >= 8) {
            cout << "\nTienes suerte, Maquina (8 pts)\n";
        }
        if (u_puntPart >= 8) {
            cout << "\nTienes suerte, Usuario (8 pts)\n";
        }

        _sleep(2000);
        c_part++;
        c_tira = 1;
        u_puntPart = 0;
        m_puntPart = 0;
    } while (c_part <= part);

    /*   AÑADIR RESUMEN DE LA PARTIDA - QUIEN GANO O SI HUBO EMPATE  */
    system("cls");
    cout << "\nRESULTADO FINAL:\n";
    if (u_puntGlobal > m_puntGlobal)
    {
        cout << "¡Felicidades! Has ganado con un puntaje total de " << u_puntGlobal << " puntos." << endl;
        cout << "Puntaje maquina: " << m_puntGlobal << endl;
        cout << "Puntaje usuario: " << u_puntGlobal << endl;
    }
    else if (u_puntGlobal < m_puntGlobal)
    {
        cout << "¡La máquina ha ganado con un puntaje total de " << m_puntGlobal << " puntos!" << endl;
        cout << "Puntaje maquina: " << m_puntGlobal << endl;
        cout << "Puntaje usuario: " << u_puntGlobal << endl;
    }
    else
    {
        cout << "¡Ha sido un empate! Ambos tienen un puntaje total de " << u_puntGlobal << " puntos." << endl;
        cout << "Puntaje maquina: " << m_puntGlobal << endl;
        cout << "Puntaje usuario: " << u_puntGlobal << endl;
    }

    system("pause");
    m_puntGlobal = 0;
    u_puntGlobal = 0;
}

int main() {
    Console::SetWindowSize(80, 40);
    srand(time(0));
    presentacion();

    int opc;
    do {
        opc = 0;
        system("cls");
        Console::SetCursorPosition(0, 10);
        cout << R"(
         $$$$$$\                                                $$$$$$$\  
        $$  __$$\                                               $$  ____| 
        $$ /  \__| $$$$$$\  $$\   $$\  $$$$$$\   $$$$$$\        $$ |      
        $$ |$$$$\ $$  __$$\ $$ |  $$ |$$  __$$\ $$  __$$\       $$$$$$$\  
        $$ |\_$$ |$$ |  \__|$$ |  $$ |$$ /  $$ |$$ /  $$ |      \_____$$\ 
        $$ |  $$ |$$ |      $$ |  $$ |$$ |  $$ |$$ |  $$ |      $$\   $$ |
        \$$$$$$  |$$ |      \$$$$$$  |$$$$$$$  |\$$$$$$  |      \$$$$$$  |
         \______/ \__|       \______/ $$  ____/  \______/        \______/ 
                                      $$ |
                                      $$ |
                                      \__|                                  
            )";
        Console::SetCursorPosition(25, 23);
        cout << "=========================";
        Console::SetCursorPosition(25, 24);
        cout << "[1] Iniciar juego";
        Console::SetCursorPosition(25, 25);
        cout << "[2] Como jugar";
        Console::SetCursorPosition(25, 26);
        cout << "[3] Repetir presentacion";
        Console::SetCursorPosition(25, 27);
        cout << "[9] Salir";
        Console::SetCursorPosition(25, 28);
        cout << "=========================";
        Console::SetCursorPosition(25, 29);
        cout << "Ingrese una opcion: ";
        cin >> opc;

        switch (opc) {
        case 1:
            objetivos();
            iniciar();
            jugar(datos, n_part);
            break;
        case 2:
            instrucciones();
            break;
        case 3:
            presentacion();
            break;
        case 9:
            system("exit");
            break;
        default:
            Console::SetCursorPosition(45, 29);
            cout << "Ingrese una opcion valida";
            _sleep(400);
            break;
        }
    } while (opc != 9);

    return 0;
}