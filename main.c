/*O custo de um carro novo ao consumidor finalé o preço de fábrica somado
ao percentual de lucro do distribuidor, acrescentado dos impostos aplicados
ao preço de fábrica. Faça um programa que receba o preço de fábrica de um
veículo, o percentual de lucro de distribuidor e o percentual de impostos.

Em cada item, crie uma função distinta para calcular e retornar:

a)o valor correspondente ao lucro do distribuidor;
b)o valor correspondente aos impostos;
c)o preco final do veículo.

Após criar cada uma das funções, desenvolva um algoritmo que declare e
invoque cada uma delas*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcLucroDist(float p_fab, float por_dist){
	return p_fab*por_dist/100;
}


float calcImpostos(float p_fab, float por_imp){
		return p_fab*por_imp/100;
}

float calcPrecoFinal(float p_fab,float v_dist, float v_imp){
	return p_fab + v_dist + v_imp;
}


int main(int argc, char *argv[]) {
	
 setlocale(LC_ALL, "Portuguese");
	
	float preco_f, porce_dist, porc_i, lucro_dist, imp, vlr_f;
	
	printf("Insira o preço de fábrica:\n");
	scanf("%f", &preco_f);
	
	printf("Insira o percentual de lucro do distribuidor:\n");
	scanf("%f", &porce_dist);
	printf("Insira o percentual de imposto:\n");
	scanf("%f", &porc_i);
	
	lucro_dist= calcLucroDist(preco_f, porce_dist);
	imp = calcImpostos(preco_f, porc_i);
	vlr_f = calcPrecoFinal(preco_f, lucro_dist, imp);
	
	printf("Lucro do distribuidor: R$%.2f.\n", lucro_dist);
	printf("Impostos: R$%.2f.\n", imp);
	printf("Valor final: R$%.2f.\n", vlr_f);
	
	system("pause");
	return 0;
}





