#include <iostream>
using namespace std;

int main()
{
  char rank;
  cout << "Input your rank:";
  cin >> rank;
  
     string S = "You have received Super Ultra Rare Unit!!!\n";
     string A = "You have received 5 gems.\n";
     string B = "You have received 1 gems.\n";
     string C = "You have received 2000 coins.\n";
     string D = "You have received very KAK items.\n";
 
 
 
  if(rank == 'S'){
      cout << "You have received Super Ultra Rare Unit!!!\n";
      cout << "You have received 5 gems.\n";
      cout << "You have received 1 gems.\n";
      cout <<  "You have received 2000 coins.\n";
      cout << "You have received very KAK items.\n";
 
	  }
  else if(rank == 'A'){
      cout << "You have received 5 gems.\n";
      cout << "You have received 1 gems.\n";
      cout << "You have received 2000 coins.\n";
      cout << "You have received very KAK items.\n";	
	  }
  else if(rank == 'B'){
      cout << "You have received 1 gems.\n";
      cout << "You have received 2000 coins.\n";
      cout << "You have received very KAK items.\n";
 	 }
  else if(rank == 'C'){
  	  cout << "You have received 2000 coins.\n";
      cout << "You have received very KAK items.\n";
     }
  else if(rank == 'D'){
  	  cout << "You have received very KAK items.\n";
     }
   

  return 0;
}
