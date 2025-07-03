# Sistema_Caixa_Eletronico

## Problema
Implemente um sistema de gerenciamento de um caixa eletrônico com base nos **pilares do pensamento computacional.** A solução deve:
- Receber a configuração inicial de cédulas disponíveis no caixa eletrônico (valores e quantidades).
- Entrar em modo de operação, permitindo **múltiplos saques**.
- A cada saque solicitado, tentar entregar o valor exato com o menor número de cédulas possível.
- Caso não haja cédulas suficientes para atender ao valor solicitado, exibir mensagem de erro **(“Valor indisponível para saque”).**
- **O CAIXA NÃO DEVE ENTREGAR TROCO NEM VALORES PARCIAIS — OU ENTREGA O VALOR EXATO OU NÃO ENTREGA**

```
Exemplo de Entrada Inicial:
    > Cédulas 100, 50, 20, 10
    > Quantidades 2, 4, 5, 10
Exemplos de Saques:
    > Saque de 180 → entrega 2x100, 1x50, 1x20, 1x10.
    > Saque de 70 → entrega 1x50, 1x20
    > Saque de 250 → não há cédulas suficientes
```

##  Entregas:
Tipo        | Status
:---:         | :---:
Fluxograma  | ✅
Programa C  | ✅
Mips-32     | ⏳ / ⚙️
Python      | ⏳ / ⚙️