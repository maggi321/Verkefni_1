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
            SalaUI salaui;
            salaui.displaySalaUI();
        }
        else if(selection == 'b') {
<<<<<<< HEAD

            BaksturUI bakstur;
            bakstur.displayBakstur();

=======
            BaksturUI baksturui;
            baksturui.displayBaksturUI();
>>>>>>> 5f1e2488e66f249102af727fa3bb61f3b34b6802
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
