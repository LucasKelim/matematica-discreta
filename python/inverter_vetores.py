def inverter(vet, inicio=0, fim=None):
    if fim is None:
        fim = len(vet) - 1

    if inicio >= fim:
        return vet

    vet[inicio], vet[fim] = vet[fim], vet[inicio]

    return inverter(vet, inicio + 1, fim - 1)

vet = [1, 2, 3, 4, 5]
print(inverter(vet))
