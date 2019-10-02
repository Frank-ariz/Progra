#include <iostream>

using namespace std;
void llenar_v1(int V[],int n);
void llenar_v0(int V[], int n);
void mostrar_v(int V[],int n);


int main()
{
	int Vec[1000];
		
	llenar_v1(Vec,1000);
	llenar_v0(Vec,1000);
	mostrar_v(Vec,1000);

    return 0;
}
void llenar_v1(int V[],int n)
{
	for(int i=2;i<1000;i++)
	{
	    V[i]=1;
	}
}

void mostrar_v(int V[], int n)
{
	for(int i=0;i<1000;i++)
	{
		if(V[i]==1)
		{
		    cout<<i<<" ";
		}
		
	}

}

void llenar_v0(int V[], int n){
	for(int i=2;i<1000;i++)
	{
		if(V[i]==1)
		{
			for(int j=i+1;j<1000;j++)
			{
				if(j%i==0)
				{
				    V[j]=0;
				}
			}
		}
	}
}
