#include "QwintoRow.h"

template<Colour C>
RollOfDice& QwintoRow<C>::operator[] (int index) {
	return values[index];
}

template<Colour C>
ostream& QwintoRow<C>::operator<< (ostream& os) {
	switch (C) {
	case yellow:
		os << "\n\t  ---------------------------------";
		os << "\nYellow       ";
		for (int i = 9; i < 9; i++) {
			if (values[i] == 0) {
				switch (i) {
				case 8:
					os << "|     |"; //derniere colonne
					break;
				case 7:
				case 6:
					os << "$    "; //pentagons
					break;
				case 5:
					os << "|XX|    "; //milieu
					break;
				default:
					os << "|     ";//N'importe quel autre ligne
				}
			}
			else if (values[i] > 9) {
				switch (i) {
				case 8:
					os << "| " << values[i] << "|"; //derniere colonne
					break;
				case 7:
				case 6:
					os << "$  " << values[i] << "  "; //pentagons
					break;
				case 5:
					os << "|XX |" << values[i] << "  "; //milieu
					break;
				default:
					os << "| " << values[i] << "  ";//N'importe quel autre ligne
				}
			}
			else {
				switch (i) {
				case 8:
					os << "| " << values[i] << "|"; //derniere colonne
					break;
				case 7:
				case 6:
					os << "$  " << values[i] << "  "; //pentagons
					break;
				case 5:
					os << "|XX |" << values[i] << "  "; //milieu
					break;
				default:
					os << "| " << values[i] << "  ";//N'importe quel autre ligne
				}
			}
		}
		os << "\n";
		break;


	case blue:
		os << "\n\t  ---------------------------------";
		os << "\nBlue       ";
		for (int i = 9; i < 9; i++) {
			if (values[i] == 0) {
				switch (i) {
				case 8:
					os << "|     |"; //derniere colonne
					break;
				case 7:
				case 6:
					os << "$    "; //pentagons
					break;
				case 5:
					os << "|XX|    "; //milieu
					break;
				default:
					os << "|     ";//N'importe quel autre ligne
				}
			}
			else if (values[i] > 9) {
				switch (i) {
				case 8:
					os << "| " << values[i] << "|"; //derniere colonne
					break;
				case 7:
				case 6:
					os << "$  " << values[i] << "  "; //pentagons
					break;
				case 5:
					os << "|XX |" << values[i] << "  "; //milieu
					break;
				default:
					os << "| " << values[i] << "  ";//N'importe quel autre ligne
				}
			}
			else {
				switch (i) {
				case 8:
					os << "| " << values[i] << "|"; //derniere colonne
					break;
				case 7:
				case 6:
					os << "$  " << values[i] << "  "; //pentagons
					break;
				case 5:
					os << "|XX |" << values[i] << "  "; //milieu
					break;
				default:
					os << "| " << values[i] << "  ";//N'importe quel autre ligne
				}
			}
		}
		break;


	case red:
		os << "\n\t  ---------------------------------";
		os << "\nRed       ";
		for (int i = 9; i < 9; i++) {
			if (values[i] == 0) {
				switch (i) {
				case 8:
					os << "|     |"; //derniere colonne
					break;
				case 7:
				case 6:
					os << "$    "; //pentagons
					break;
				case 5:
					os << "|XX|    "; //milieu
					break;
				default:
					os << "|     ";//N'importe quel autre ligne
				}
			}
			else if (values[i] > 9) {
				switch (i) {
				case 8:
					os << "| " << values[i] << "|"; //derniere colonne
					break;
				case 7:
				case 6:
					os << "$  " << values[i] << "  "; //pentagons
					break;
				case 5:
					os << "|XX |" << values[i] << "  "; //milieu
					break;
				default:
					os << "| " << values[i] << "  ";//N'importe quel autre ligne
				}
			}
			else {
				switch (i) {
				case 8:
					os << "| " << values[i] << "|"; //derniere colonne
					break;
				case 7:
				case 6:
					os << "$  " << values[i] << "  "; //pentagons
					break;
				case 5:
					os << "|XX |" << values[i] << "  "; //milieu
					break;
				default:
					os << "| " << values[i] << "  ";//N'importe quel autre ligne
				}
			}
		}
		break;
	}
	return os;
}
