# 📘 Gabarito Prova - ADS Fatec Mogi Mirim

Este repositório contém o gabarito em linguagem C para a **prova do primeiro semestre** do curso de **Análise e Desenvolvimento de Sistemas (ADS)** da **Fatec Mogi Mirim**.

---

## 📝 Descrição

O programa apresenta um **menu interativo** com diversos exercícios:

- 🔢 **Exercício 1:** Verifica se um número inteiro é par ou ímpar.
- ⚖️ **Exercício 2:** Calcula o IMC (Índice de Massa Corporal) com base no peso e altura informados.
- 📐 **Exercício 3:** Verifica se os três lados informados podem formar um triângulo.
- 🔍 **Exercício 4:** Leitura de 5 números, mostrando a contagem dos pares e ímpares, além de identificar o **maior número par** e o **menor número ímpar**.

Cada exercício possui sua própria lógica de repetição, permitindo que o usuário execute o exercício quantas vezes desejar antes de retornar ao menu principal.

---

## 🧰 Funcionalidades

- 📋 **Menu interativo:** Permite selecionar o exercício desejado.
- 🔁 **Repetição individual:** Cada exercício pode ser testado novamente ou retornar ao menu.
- 🧼 **Compatibilidade com sistema operacional:** O programa identifica o sistema (_WIN32 ou Linux/Unix) para limpar a tela utilizando o comando adequado (`cls` ou `clear`).

---

## 💻 Requisitos

- 🛠️ **Compilador C:** O código foi desenvolvido em linguagem C e pode ser compilado com o GCC ou outro compilador compatível.
- 🖥️ **Sistema Operacional:** Compatível com Windows, Linux e macOS.

---

## 🧪 Como Compilar

### No Linux ou macOS:
```bash
gcc -o gabarito main.c
```

### No Windows, abra o prompt de comando e compile com:

```bash
gcc -o gabarito.exe main.c
```

💡 *Obs: Certifique-se de que o arquivo fonte esteja nomeado como main.c ou ajuste o comando conforme o nome do arquivo.*

## ▶️ Como Executar
Após a compilação, execute o programa:

### 🐧 No Linux/macOS:

```bash
./gabarito
```

### 🪟 No Windows:

```bash
gabarito.exe
```

📌 O menu principal será exibido e você poderá navegar entre os exercícios utilizando os números correspondentes.

## 📂 Estrutura do Código
- **Menu Principal:** Exibe as opções e utiliza um laço do...while para manter o menu ativo até que o usuário escolha sair (opção 5).

- **Switch Case:** Cada opção do menu é tratada com um switch case que direciona para a lógica de cada exercício.

- **Repetição Local:** Cada exercício usa um laço do...while individual para possibilitar a repetição do teste sem retornar imediatamente ao menu.

## 📄 Licença
Este projeto está disponível sob a Licença MIT.

## 📬 Contato
Para dúvidas ou sugestões:
📧 ian.camargo@fatec.sp.gov.br
📁 Ou abra uma issue neste repositório.
