#include <iostream>
#include <string>

using namespace std;

	
	class tekerlekfirmasi{
		protected:
			int cap,kalinlik;
		public:
			tekerlekfirmasi(int a = 0, int b = 0){
				cap = a;
				kalinlik = b;
			}
			void control(){
				if(( cap >= 2 && cap <= 40) && (kalinlik >= 10 && kalinlik <= 20))
				cout << "Bisiklet Tekeridir"<< endl;
				else if(( cap >= 20 && cap <= 60) && (kalinlik >= 50 && kalinlik <= 70))
				cout << "Araba Tekeridir"<< endl;
				else
				cout << "Aralik Disidir"<< endl;
			}
	};
	
	class bisiklettekeri: public tekerlekfirmasi{
	   public:
	      bisiklettekeri(int a=0, int b=0):tekerlekfirmasi(a, b) { }
	};
	
	class arabatekeri: public tekerlekfirmasi{
	   public:
	      arabatekeri(int a=0, int b=0):tekerlekfirmasi(a, b) { }
	};
	
int main( )
{
   int cap = 0, kalinlik = 0;
   tekerlekfirmasi *t;
   
   cout << "Cap girin: ";
   cin >> cap;
   cout << endl << "Kalinlik girin: ";
   cin >> kalinlik;
   
   bisiklettekeri bt(cap, kalinlik);

   t = &bt;
   t->control();
   
    arabatekeri at(cap, kalinlik);

	t = &at;

	t->control();
   
   return 0;
}
