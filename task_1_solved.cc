#include <iostream>
#include "lib.h"

using namespace N;
using namespace std;

void Cat::idz(void)
{
        cout << " Meow meow - cat said and walked 2 meters " << endl;
}

void Cat::jedz(void)
{
        cout << " Meow meow - cat drunk milk! " << endl;
}

int main()
{
	Cat small_cat('m', "Bullbazar", 3, "dachowiec");
	small_cat.idz();
	small_cat.jedz();

	return 0;
}
