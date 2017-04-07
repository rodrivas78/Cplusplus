//Exercício de Algoritmo by R.G.Rivas
//números primos dentro de 100

#include<iostream>
using namespace std;

int main()
{
  	int x = 0;
	int j;
	int i;
	int k;

	for(i=2;i<=100;i++)
	{
		j=i;
		k=i;
				
		while(k>0)
		{
			if(j % k == 0)
			{
				x++;

				if(x==3) 
			    {
					x = 0;
					break;
				} 
				if(k==1 && x==2)
				{
					cout << j << endl;
				    x = 0;
				    break;
				}
			}
			k--;
		}
	}
	return 0;
}
