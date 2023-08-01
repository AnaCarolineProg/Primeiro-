#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale (LC_ALL, "Portuguese");

	const int NUM_VIAGENS = 10;
	int num_passageiro[50], i;
	float tarifa, valor_viagem = 0, valor_arrecadado = 0;


	printf("Informe o valor da tarifa: \n");
	scanf("%f", &tarifa);

	for(i = 0; i < NUM_VIAGENS; i++){
		printf("Informe o número de passageiros da %dª viagem: ", i+1);
		scanf("%d", &num_passageiro[i]);

		valor_viagem = tarifa * num_passageiro[i];
		valor_arrecadado += valor_viagem;
	}

	printf("Estimativa de valor arrecadado das 10 viagens: R$ %.2f.\n\n", valor_arrecadado);

	system("pause");
	return 0;
}

