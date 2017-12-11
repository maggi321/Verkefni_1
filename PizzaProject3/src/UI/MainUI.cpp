#include "MainUI.h"

MainUI::MainUI() {
    //ctor
}

void MainUI::displayMainUI() {
    system("COLOR 1E");

    char selection = '\0';

    while(selection != 'q') {
        cout << "-------Main Menu-------" << endl;
        cout << "=======================" << endl;

        cout << "u: Umsjon"  << endl;
        cout << "s: Sala" << endl;
        cout << "b: Bakstur" << endl;
        cout << "a: Afhending" << endl;
        cout << "q: Loka forriti" << endl;

        cin >> selection;
        cout << endl;

        if(selection == 'u') {
            UmsjonUI umsjonui;
            umsjonui.displayUmsjonUI();
        }
        else if(selection == 's') {
<<<<<<< HEAD

            SalaUI sala;
            sala.displaySala();

=======
            SalaUI salaui;
            salaui.displaySalaUI();
>>>>>>> ba5a1cba6973b406503a2ddc93d5a8f7cfe9f183
        }
        else if(selection == 'b') {
            /*
            BaksturUI bakstur;
            bakstur.displayBakstur();
            */
        }
        else if (selection == 'a') {
            /*
            AfhendingUI afhending;
            afhending.displayAfhending();
            */
        }
        else if (selection == 'q') {
            cout << "Bye bye" << endl;

        }
    }
}
