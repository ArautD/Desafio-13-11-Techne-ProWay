# 🧩 Desafio C++ - Proway/Techne

Este projeto é um programa em C++ que simula diferentes sistemas interativos, organizados em um **Menu Principal**.  
Cada opção do menu leva o usuário a um subsistema temático, como envio de mensagens, mutantes dos X-Men, criaturas mágicas, sistema financeiro e batalhas de RPG.

---

## 📂 Estrutura do Projeto

O projeto está dividido em múltiplos módulos, cada um representando um sistema independente:

- **menuPrincipal.h / menuPrincipal.cpp**  
  Controla o menu principal e a navegação entre os sistemas.

- **sistemaMensagem.h / sistemaMensagem.cpp**  
  Implementa envio de mensagens de diferentes tipos:
  - Texto
  - Voz
  - Imagem

- **sistemaMutante.h / sistemaMutante.cpp**  
  Simula poderes de personagens dos X-Men:
  - Wolverine
  - Jean Grey
  - Noturno

- **criaturaMagica.h / criaturaMagica.cpp**  
  Representa criaturas fantásticas:
  - Grifo
  - Dragão
  - Fênix

- **sistemaFinanceiro.h / sistemaFinanceiro.cpp**  
  Simula diferentes formas de pagamento:
  - Pix
  - Cartão de Crédito
  - Boleto

- **habilidadeRPG.h / habilidadeRPG.cpp**  
  Sistema de RPG com personagens e habilidades:
  - Mago
  - Guerreiro
  - Arqueiro

---

## 📜 Funcionamento

Ao executar o programa, o usuário acessa o **Menu Principal**:

```
===== MENU PRINCIPAL =====
1. Sistema de Mensagens
2. X-Men - Mutantes
3. Animais Fantásticos
4. Pagamentos
5. RPG
0. Sair
Escolha uma opção:
```

Cada opção chama o respectivo subsistema:

- **1. Sistema de Mensagens** → Envia mensagens de texto, voz e imagem.  
- **2. X-Men - Mutantes** → Exibe os poderes dos mutantes.  
- **3. Animais Fantásticos** → Faz criaturas mágicas emitirem sons.  
- **4. Pagamentos** → Processa diferentes métodos de pagamento.  
- **5. RPG** → Executa ataques normais e especiais de personagens.  
- **0. Sair** → Finaliza o programa.

---

## 🚀 Como Executar

1. Compile todos os arquivos `.cpp` juntos:
   ```bash
   g++ main.cpp menuPrincipal.cpp sistemaMensagem.cpp sistemaMutante.cpp criaturaMagica.cpp sistemaFinanceiro.cpp habilidadeRPG.cpp -o desafio
   ```

2. Execute o programa:
   ```bash
   ./desafio
   ```

---

## 🎯 Conceitos Utilizados

- **Programação Orientada a Objetos (POO)**  
  - Classes abstratas e polimorfismo (`virtual` e `override`).  
  - Herança para especialização de classes (ex.: `MensagemTexto`, `PagamentoPix`).  

- **Memória Dinâmica**  
  - Uso de `new` e `delete` para alocação e desalocação.  
  - Uso de `std::unique_ptr` para gerenciamento automático de memória.  

- **Estruturas de Dados**  
  - Arrays e `std::vector` para armazenar objetos.  

- **Organização Modular**  
  - Separação em headers (`.h`) e implementações (`.cpp`).  

---

Projeto desenvolvido como parte do **Desafio de C++ da Proway/Techne**.  
Exercício voltado para prática de **POO, modularização e abstração em C++**.
