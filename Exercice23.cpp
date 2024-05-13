/*
Écrire un programme qui affiche la « table de multiplication » des nombres de 1 à 10
Rappelons que l’insertion dans le flot cout d’une expression de la forme setw(n), où n est une expression entière, demande de réaliser l’affichage suivant sur n caractères au minimum. L’emploi de setw nécessite l’inclusion du fichier iomanip.
*/

#include <iostream>
#include <iomanip> // pour setw
using namespace std ;
int main()
{   const int NMAX = 10 ; // nombre de valeurs
    int i, j ;
        /* affichage ligne en-tête */
    cout << " I" ;
    for (j=1 ; j<=NMAX ; j++) cout << setw(4) << j ;
    cout << "\n" ;
    printf ("-------") ;
    for (j=1 ; j<=NMAX ; j++) cout << "----" ;
    cout << "\n" ;
        /* affichage des différentes lignes */
    for (i=1 ; i<=NMAX ; i++)
        { cout << setw(4) << i << " I" ;
        for (j=1 ; j<=NMAX ; j++)
        cout << setw(4) << i*j ;
    cout << "\n" ;
    }
}

/*Résultat :
 I   1   2   3   4   5   6   7   8   9  10
-----------------------------------------------
   1 I   1   2   3   4   5   6   7   8   9  10
   2 I   2   4   6   8  10  12  14  16  18  20
   3 I   3   6   9  12  15  18  21  24  27  30
   4 I   4   8  12  16  20  24  28  32  36  40
   5 I   5  10  15  20  25  30  35  40  45  50
   6 I   6  12  18  24  30  36  42  48  54  60
   7 I   7  14  21  28  35  42  49  56  63  70
   8 I   8  16  24  32  40  48  56  64  72  80
   9 I   9  18  27  36  45  54  63  72  81  90
  10 I  10  20  30  40  50  60  70  80  90 100


=== Code Execution Successful ===
*/
