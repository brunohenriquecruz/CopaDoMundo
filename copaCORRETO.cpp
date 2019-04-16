#include <stdio.h>
#include <stack> //manipulação de LIFO
using namespace std;
 
struct aresta{
    int v1;
    int v2;
    int peso;
};
 
int ciclo[2001];	//vetor utilizado para a detecçao de ciclos tamanho é a quantidade maxima de vertices
 
void unir(int v1, int v2); //Protótipo detectar ciclos
int pai(int x);				//Protótipo detectar ciclos
void countSort( aresta *A, int tamanhoVetor );	//ordenar as arestas pelo custo mínimo

int main(){
	
    int i,n,Ferr, Rod,aux=0,H,J,I;
 
    scanf("%d %d %d", &n, &Ferr, &Rod);	//lendo os vertices e as arestas
 
    //vetor para armazenar as arestas:
    aresta arestas[Ferr+Rod];
      
	//iniciando o vetor de ciclos
	for(i=0;i<Ferr+Rod;i++){ //se os vertices forem numerados de 0 a n colocar n+1 no lugar de n
		ciclo[i] = i;
	}
  
	//lendo e armazenando as arestas
	for(i=0;i<Ferr+Rod;i++){
		scanf("%d %d %d",&H,&I,&J );
		
		arestas[i].v1 = H;
		arestas[i].v2 = I;
		if(i<Ferr){
		arestas[i].peso = J;
		}
		else{
		arestas[i].peso = J+1000;
		}
			
	}
  	//ordenando pela menor custo
	countSort(arestas, Ferr+Rod);
  
	//kruskal
	for(i=0;i<Ferr+Rod;i++){ //percorrendo todas as arestas
 		//detectando se com esta aresta forma ciclo:
		if ( pai(arestas[i].v1) != pai(arestas[i].v2) ){ 
 			//imprimindo a aresta que está na arvore geradora minima em ordem crescente de vertices
			if(arestas[i].v1 < arestas[i].v2){
				if(arestas[i].peso>1000) //Condição para receber rodovias
					aux = aux+(arestas[i].peso-1000);
				else { //condição para receber ferrovias
					aux = aux+arestas[i].peso;
				}
			}
			else{
				if(arestas[i].peso>1000)
				aux = aux+(arestas[i].peso-1000);
				else {
					aux = aux+arestas[i].peso;
				}
			}
 
			unir(arestas[i].v1, arestas[i].v2);
		}
 
	}
	printf("\n%d",aux);
	printf("\n");
}
 
void unir(int v1, int v2){
    ciclo[pai(v1)] = pai(v2);
}
 
int pai(int v){ 
 
    if (ciclo[v] == v){
        return v;
	}
 
    ciclo[v] = pai(ciclo[v]);
 
    return ciclo[v];
}
 
void countSort( aresta *A, int tamanhoVetor ){ //Função ordenação
	stack<aresta> peso[2001]; 	//valor máximo do custo
 int i;
 
	for(i=0; i<tamanhoVetor; i++){
		peso[A[i].peso].push(A[i]);
	}
 
	int j=0;
	for(i=0; i<tamanhoVetor; i++){
		while( peso[j].empty() ){ 
			j++;
		}
 
		A[i] = peso[j].top();
		peso[j].pop();
		j--;
	}
  
}
