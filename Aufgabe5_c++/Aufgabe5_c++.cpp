// Aufgabe5_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cmath>
#include <string>
#include < stdio .h >
	
		int main(int argc, char** argv)
		{
		 // fuer jede seite eine variable nebst initialisierung
			 int a = -1, b = -1, c = -1;
		
			// eingabeaufforderung und die seiten einlesen
			printf(" Bitte Seite a eingeben : "); scanf(" % d ", &a);
		printf(" Bitte Seite b eingeben : "); scanf(" % d ", &b);
		 printf(" Bitte Seite c eingeben : "); scanf(" % d ", &c);
		
			 // damit wir wissen , was vor  sich geht
			 printf(" \ nEingabe : a =% d b =% d c =% d \ n \ n ", a, b, c);
		
			 // pruefung auf korrekte eingabe
			 if ((a > 0) && (b > 0) && (c > 0))
			
		 // alles OK ; erster test : dreieck oder keines
				 if ((a + b > c) && (a + c > b) && (b + c > a))
			 {
				 printf("a , b und c bilden ein Dreieck \ n ");
				
					 // zweiter test : gleichseitiges dreieck
					 if ((a == b) && (b == c))
					 printf(" Das Dreieck ist gleichseitig \ n ");
				
					 // dritter test : gleichschenkliges dreieck
					 if ((a == b) || (b == c) || (a == c))
					 printf(" Das Dreieck ist gleichschenklig \ n ");
				
					 // vierter test : rechtwinkliges dreieck
					 if ((a * a + b * b == c * c) || (a * a + c * c == b * b)
						 || (b * b + c * c == a * a))
					 printf(" Das Dreieck ist rechtwinklig \ n ");
				 }
			 else printf("a , b und c bilden kein Dreieck !\ n ");
			}
		 else printf(" Mindestens eine Seite ist fehlerhaft \ n ");
		
			// fertig
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
