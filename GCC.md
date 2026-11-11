# Compilar e executar com GCC pelo terminal

Todos os comandos partem da raiz do projeto (`beecrowd/`).

## Básico

```bash
# Compilar
gcc pg3/bee1099.c -o output/bee1099

# Executar
./output/bee1099

# Compilar e executar de uma vez (só roda se compilar sem erro)
gcc pg3/bee1099.c -o output/bee1099 && ./output/bee1099
```

## Comando recomendado

```bash
gcc -Wall -Wextra -O2 -std=c99 pg3/bee1099.c -o output/bee1099 -lm && ./output/bee1099
```

| Flag       | O que faz                                                        |
|------------|------------------------------------------------------------------|
| `-o nome`  | Define o nome/caminho do executável                              |
| `-Wall`    | Mostra avisos sobre possíveis erros                              |
| `-Wextra`  | Mostra ainda mais avisos                                         |
| `-O2`      | Otimiza o código (parecido com o juiz do beecrowd)               |
| `-std=c99` | Usa o padrão C99                                                 |
| `-g`       | Inclui informações para debug (use no lugar de `-O2` ao depurar) |
| `-lm`      | Liga a biblioteca matemática; **coloque sempre no final**        |

> Se usar `math.h` (`sqrt`, `pow`, `fabs`...) e esquecer o `-lm`, aparece o erro
> `undefined reference to 'sqrt'`.

## Entrada a partir de arquivo

Para não digitar a entrada toda vez, salve-a num arquivo e redirecione:

```bash
./output/bee1099 < entrada.txt
```

Salvar a saída num arquivo:

```bash
./output/bee1099 < entrada.txt > saida.txt
```

Comparar com a saída esperada (nenhuma mensagem = saídas iguais):

```bash
./output/bee1099 < entrada.txt | diff - esperado.txt
```

Entrada rápida sem criar arquivo:

```bash
echo "5 10" | ./output/bee1099
```

## C++

Mesma ideia, trocando `gcc` por `g++`:

```bash
g++ -Wall -O2 -std=c++17 arquivo.cpp -o output/arquivo && ./output/arquivo
```

## Atalho opcional

Adicione ao `~/.zshrc` para compilar e rodar com um comando curto:

```bash
crun() {
    gcc -Wall -Wextra -O2 -std=c99 "$1" -o "output/$(basename "$1" .c)" -lm \
        && "./output/$(basename "$1" .c)"
}
```

Depois rode `source ~/.zshrc` e use:

```bash
crun pg3/bee1099.c
crun pg3/bee1099.c < entrada.txt
```

## Erros comuns

| Erro                                    | Causa / solução                                      |
|-----------------------------------------|------------------------------------------------------|
| `undefined reference to 'sqrt'`         | Faltou `-lm` no final do comando                     |
| `No such file or directory`             | Caminho do `.c` errado; confira com `ls`             |
| `Permission denied` ao executar         | Rode com `./` na frente, ex.: `./output/bee1099`     |
| `command not found` ao executar         | Faltou o `./` antes do nome do executável            |
| Programa "trava" sem mostrar nada       | Ele está esperando entrada; digite os valores        |
