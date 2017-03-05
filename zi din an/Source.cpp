//Nicorici Adrian, 08.03.2014
//Se considera o data calendaristica (zi, luna, an). Sa se verifice daca data respectiva este a secolului nostru sau nu.
#include <iostream>
using namespace std;

int verificare_data(int zi,int luna,int an){
	if(zi<1 && luna <1 && an < 1){
		cout << "Data nu este valida!" << endl;
		return 0;
	}
	if(luna < 1 ||  luna >12){
		cout << "Data nu este valida" << endl;
		return 0;
	}
	if(luna == 2){
		if(an%4==0 ||( an % 100==0 && an %400==0)){
			if(zi<1 || zi >29){
				cout << "Data nu este valida!" << endl;
				return 0;
			}
		}
		else{
			if(zi<1 || zi >28){
				cout << "Data nu este valida!" << endl;
				return 0;
			}
		}
	}
	if( (luna == 1) || (luna == 3) || (luna =5) || (luna==7) || (luna == 8) || (luna == 10) || (luna == 12)){
		if(zi<1 || zi >31){
			cout << "Data nu este valida!" << endl;
			return 0;
		}
	}
	if ( (luna == 4) || (luna == 6) || (luna =9) || (luna==11)){
		if(zi < 1 || zi > 30 ) {
			cout << "Data nu este valida!" << endl;
			return 0;
		}
	}
	else
		return 1;
}

void data_secolului(int zi,int luna,int an){
	if(an <1950 || an >2050 ) {
		cout << "Data nu este a secolului nostru" << endl;
	}
	else{
		cout << "Data este a secolului nostru" << endl;
	}
}

void calcul(int zi, int luna, int an){
	int total=0;
	int ln = 1;
	if (ln!= luna){
		switch (luna)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			total+=31;
		case 4:
		case 6:
		case 9:
		case 11:
			total+=30;
		case 2:
			if(an%4==0 ||( an % 100==0 && an %400==0)){
				if(zi<1 || zi >29){
					total+=29;
				}
			}
			else{
				total+=28;
			}
	
		}
	}
	else{
		total = zi;
	}
	cout << "Data " << zi << "," << luna << ", " << an << " este a " << total << " a zi a anului. " << endl;
}

int main(){
	int zi,luna,an;
	cout << "Introduceti ziua: " << endl;
	cin >> zi;

	cout << "Introduceti luna: " << endl;
	cin >> luna;

	cout << "Introduceti an:" << endl;
	cin >> an;

	if(verificare_data(zi,luna,an) ){
		data_secolului(zi,luna,an);
		calcul(zi,luna,an);
	}

	
	system("pause");
	return 0;

}