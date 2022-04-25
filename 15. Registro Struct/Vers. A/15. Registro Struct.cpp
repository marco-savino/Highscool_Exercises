
/*
cin >> stringa; ---> scanf
cout << stringa; ---> printf 
variante cout:
cout <<"Il valore di s e': "<< s << end1;
*/

#include<iostream>
using namespace std;

#define LIMIT 3


struct dt
{
	int day;
	int month;
	int year;
}; 

struct clss 
{
	int grade;
	char section;
};

typedef struct dt date_t;
typedef struct clss class_t;


struct id 
{
	string name;
	string surname;
	date_t date;
	class_t clas;
};

typedef struct id id_t;


main()
{
	int i;
	id_t student[LIMIT];
	
	for(i=0; i<LIMIT; i++)
	{
		cout <<"\n Inserire il nome del "<< i+1 <<"^ studente: \t";
		cin >> student[i].name;
		cout <<"\n Inserire il cognome del "<< i+1 <<"^ studente: \t";
		cin >> student[i].surname;
		cout <<"\n Inserire la data di nascita del "<< i+1 <<"^ studente: \t";
		cin >> student[i].date.day >> student[i].date.month >> student[i].date.year;
		cout <<"\n Inserire la classe del "<< i+1 <<"^ studente: \t";
		cin >> student[i].clas.grade >> student[i].clas.section;
	}
	
	cout <<"\n\n\n\n";
	cout <<"Nome \t Cognome \t Data \t Classe \n\n";
	
	for(i=0; i<LIMIT; i++)
	{
		cout << student[i].name << " \t " << student[i].surname << " \t\t " << student[i].date.day << "." << student[i].date.month << "." << student[i].date.year << " \t " << student[i].clas.grade << student[i].clas.section <<" \n";
	}
	
	cout <<"\n\n\n\n";
	
	system("pause");
	
}








