#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct film
{
	string tytul;
	string rezyseria;
	double rok;
	double czasTrwaniaMinut;
};

int main(int argc, char** argv) {
	
	film t[5];
		for (int i=0; i<5; i++)
		{
			t[i].tytul="Trailer Park Boys - The Movie";
			t[i].rezyseriaa="Mike Clattenbutg";
			t[i].rok=2006;
			t[i].czasTrwaniaMinut=95;
		}
		{
		
		
			t[i].tytul="LOTR: The Fellowship of the Ring";
			t[i].rezyseria="Peter Jackson";
			t[i].rok=2001;
			t[i].czasTrwaniaMinut=178;
		}
		{
		
			t[i].tytul="Baby Driver";
			t[i].rezyseria="Edgar Wright";
			t[i].rok=2007;
			t[i].czasTrwaniaMinut=113;
	}
	{
		
			t[i].tytul="It";
			t[i].rezyseria="Andy Muschietti";
			t[i].rok=2017;
			t[i].czasTrwaniaMinut=135;
	}
	{
			t[i].tytul="The Social Network ";
			t[i].rezyseria="David Fincher";
			t[i].rok=2010;
			t[i].czasTrwaniaMinut=120;
	
	}
		
		
	
		for (int i=0; i<5; i++)
		{
			cout<<t[i].tytul;
			cout<<t[i].	rezyseria;
			cout<<t[i].rok;
			cout<<t[i].czasTrwaniaMinut;
			
		}
	
	
	
	return 0;
}
