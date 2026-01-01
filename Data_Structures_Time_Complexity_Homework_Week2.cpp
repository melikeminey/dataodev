#include <stdio.h>
#include <stdlib.h>


/*			1. soru

int fun(int n)
{
	int count = 0;
	for(int i = n; i > 0; i /= 2)
	{
		for(int j = 0; j < i; j++)
		{
			count++;
		}
		return count;
	}
}
//Sadece içteki döngü 3 kere çalýþýyor, dýþtaki döngü 1 kere çalýþýp duruyor. Bu yüzden time complexity O(n) dir.
//Ve de space complexity O(1) dir. Çünkü sürekli yeni bir bellek ayýrýlmýyor, var olan bellek üzerine iþlem yapýlýyor.
*/


/*				2. soru

int a = 0, b = 0;
for(int i = 0; i < N; i++)
{
	a = a + rand();
}
for(int j = 0; j < M; j++)
{
	b = b + rand();
}
//ilk önce üstteki for çalýþýyor, bu for un time complexity O(N) kadardýr. Alttaki for a baktýðýmýzda onun time complexity O(M) olarak görüyoruz.
//Böylelikle time complexity O(N+M) olmuþ oluyor.
//Space complexity gelecek olursak her sefreinde yeni bir bellek ayýrýmý yapýlmýyor, var olan bellekler üzerinden iþlemler saðlanýyor. Dolayýsýyla O(1) olur.

*/



/*			4. soru

for(int i = 0; i < n; i++)
{
	i*= k;
}
// forda parametre olarak kullanýlan i, ayný zamanda döngü içerisinde logaritmik bir artýþa tabii tutulmuþ. Dolayýsýyla time complexity O(logn) þeklinde olur.
//Space complexity gelecek olursak yine var olan bellekler üzerinden iþlemler yapýlýyor, dolayýsýyla O(1) olur.
*/


/*			5. soru

int i = 0, j = 0, k = 0;
for(i = n/2; i <= n; i++)
{
	for(j = 2; j <= n; j = j * 2)
	{
		k = k + n/2;
	}
}
//ilk for a baktýðýmýzda O(n) time complexity sahip, ikinci for a baktýðýmýzda logaritmik bir artýþla döngü döndürülüyor, yani time complexity O(logn) þeklinde
//nested loop olduklarý için her iki for un time complexity çarpýlýr. yani O(nlogn) þeklinde olur.
//space complexity gelecek olursak yine her seferinde yeni bellek atamasý yapýlmadýðýndan , var olanlar kullanýlmaya devam edilidðinden O(1) olur.

*/

/*		6. soru
int a = 0, i = N;
while(i > 0)
{
	a += i;
	i/=2;
}
//Bakýldýðýnda i, logaritmik olarak artýrýlmýþ, dolayýsyla while da logaritmik time complexity ile çalýþacak, yani O(logn) olur.
//space complexity bakýldýðýnda a ve i ye atanan bellekler kullanýlmaya devam ediliyor, süreklli biçimde kalýcý yeni bellek tahsisi yapýlmýyor. Dolayýsýyla O(1) olur.

*/

/*			7.soru
int value = 0;
for(int i = 0; i < n; i++)
{
	for(int j = 0; j < i; j++)
	{
		value += 1;
	}
}
//ilk for a bakýldýðýnda time complexity O(n) kadardýr. ikinci for a bakýldýðýnda yine time complexity O(n) olduðu görülüyor. Nested loop olduklarý için time complexity O(n^2) olur.
// space complexity bakacak olursak var olan bellekler üzerinden iþlem yapýlýyor, dolayýsýyla space complexity O(1) dir.

*/



