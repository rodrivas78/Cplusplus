// Gerando a sequencia de Fibonacci utilizando 3 variáveis.
// R.G.Rivas
 
#include<iostream>
using namespace std;

int fib(int n);
int posicao;

int main()

{  	
	cout << endl;
	cout << "Entre a posicao: "; 
	cin >> posicao;
    cout << "Numero da posicao na sequencia FIBONACCI :  " << fib(posicao) << endl;  
	cout << endl;
	
  return 0;
}          

int fib(int n)
{
    int a, b, c;
	a = 1; 
	b = 1;
	c = 1;
	cout << a << endl; 
	cout << b << endl;
	n--;
	
	while (n>=0)
	{		
		 a = b + c; n--;
		 if (n==1) return a;		
		 cout << a << endl;  

		 b = a + c; n--;
		 if (n==1) return b;
		 cout << b << endl;  

		 c = a + b;	n--;
		 if (n==1) return c;	  			  	   
		 cout << c << endl ;  			   
	}
	
}
