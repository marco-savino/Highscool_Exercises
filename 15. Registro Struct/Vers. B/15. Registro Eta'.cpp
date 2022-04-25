
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
	int i, old_day=32, old_month=13, old_year=4000;
	string old_name, old_surname;
	id_t student[LIMIT];
	
	for(i=0; i<LIMIT; i++)
	{
		cout <<"\n Inserire il nome del "<< i+1 <<"^ studente: \t";
		cin >> student[i].name;
		cout <<"\n Inserire il cognome del "<< i+1 <<"^ studente: \t";
		cin >> student[i].surname;
		cout <<"\n Inserire la data di nascita del "<< i+1 <<"^ studente: \t";
		cin >> student[i].date.day >> student[i].date.month >> student[i].date.year;
		
		if((student[i].date.year<old_year) || (student[i].date.year==old_year && (student[i].date.month<old_month || (student[i].date.month==old_month  && student[i].date.day<old_day))))
		{
			old_year=student[i].date.year;
			old_month=student[i].date.month;
			old_day=student[i].date.day;
			old_name=student[i].name;
			old_surname=student[i].surname;
		}
		else
		{
			if(student[i].date.year==old_year && student[i].date.month==old_month && student[i].date.day==old_day)
			old_day=0;
		}

		cout <<"\n Inserire la classe del "<< i+1 <<"^ studente: \t";
		cin >> student[i].clas.grade >> student[i].clas.section;
	}
	
	cout <<"\n\n\n\n";
	cout <<"Nome \t Cognome \t Data \t\t Classe \n\n";
	
	for(i=0; i<LIMIT; i++)
	{
		cout << student[i].name << " \t " << student[i].surname << " \t\t " << student[i].date.day << "." << student[i].date.month << "." << student[i].date.year << " \t " << student[i].clas.grade << student[i].clas.section <<" \n";
	}
	
	if(old_day==0)
	cout <<"\n\n Esistono due o piu' studenti con la stessa eta' ";
	else
	cout <<"\n\n Lo studente piu' vecchio e': "<< old_name << " " << old_surname;
	
	cout <<"\n\n\n\n";
	
	system("pause");
	
}








