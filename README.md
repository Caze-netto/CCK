
---
## 🎮 KAZE — Emulador de Game Boy Advance em C++
Um projeto ambicioso e técnico que busca recriar, com fidelidade e paixão, o funcionamento interno do lendário Game Boy Advance. Construído em C++ moderno, este emulador é uma ode à engenharia reversa, ao amor por jogos clássicos e ao poder de abstração do software.

“Não estamos apenas rodando ROMs. Estamos traduzindo memórias em código.”
---

## 🧩 Arquitetura do Projeto

O projeto é modular e espelha fielmente a arquitetura do hardware real do Game Boy Advance (GBA). Cada componente é separado e especializado:

* **CPU** — Emulação do processador **ARM7TDMI**, com suporte aos modos **ARM** e **Thumb**.
* **MMU** — Gerenciamento de memória e mapeamento das regiões: **WRAM**, **VRAM**, **ROM**, **I/O**, **BIOS**.
* **PPU** — Renderização gráfica 2D: **tilemaps**, **sprites**, camadas e efeitos visuais.
* **APU** — Emulação de áudio: canais **PSG**, som por **DMA**, **FIFO** e mixer estéreo.
* **DMA** — Suporte a **transferência direta de memória**, essencial para desempenho.
* **Timers & Interrupts** — Controle de ciclos, geração de eventos e **sincronização precisa**.
* **BIOS** — Simulação parcial ou suporte à **BIOS externa** real.
* **I/O** — Captura e processamento de **input** (direcionais, botões, Start/Select).

---

## ⚙️ Tecnologias Utilizadas

| Ferramenta    | Finalidade                                  |
| ------------- | ------------------------------------------- |
| C++17 / C++20 | Lógica central e foco em performance nativa |
| SDL2          | Áudio, vídeo e input cross-plataforma       |
| CMake         | Sistema de build moderno e multiplataforma  |
| GoogleTest    | Testes unitários e validação de precisão    |

---

## 📚 Documentação Essencial

Durante a construção de um emulador, você dependerá constantemente de fontes técnicas. Eis os pilares:

| Recurso                   | Descrição                                                                |
| ------------------------- | ------------------------------------------------------------------------ |
| 📜 **GBATEK**             | A bíblia técnica do GBA. Referência completa do hardware.                |
| 📖 **Tonc**               | Guia prático de desenvolvimento para GBA. Foco em gráficos e DMA.        |
| 🧠 **ARM7TDMI Datasheet** | Manual oficial da CPU. Fundamental para a implementação correta do core. |
| 🌐 **gbdev (GitHub)**     | Comunidade repleta de ferramentas, docs e testes.                        |
| 💬 **r/EmuDev**           | Fórum no Reddit. Discussões, dúvidas e projetos da galera.               |
| 🎮 **Testes do mGBA**     | Suíte de testes para medir a fidelidade da emulação.                     |

---

## 💻 Como Compilar e Executar

### Passo 0: Pré-requisitos

Instale as dependências conforme seu sistema operacional:

<details><summary>🐧 <strong>Linux (Debian/Ubuntu)</strong></summary>

```bash
sudo apt update
sudo apt install git build-essential cmake libsdl2-dev libgtest-dev
```

</details>

<details><summary>🍎 <strong>macOS (Homebrew)</strong></summary>

```bash
brew install git cmake sdl2 googletest
```

</details>

<details><summary>#<strong>Windows (MSYS2)</strong></summary>

1. Instale o [MSYS2](https://www.msys2.org).
2. Abra o terminal **MSYS2 MINGW64**.
3. Execute:

```bash
pacman -Syu
pacman -S --needed git base-devel \
  mingw-w64-x86_64-toolchain \
  mingw-w64-x86_64-cmake \
  mingw-w64-x86_64-SDL2 \
  mingw-w64-x86_64-gtest
```

</details>

---

### Passo 1: Clonar o Projeto

```bash
git clone --recursive [https://github.com/seu-usuario/kaze-emulator.git](https://github.com/Caze-netto/CaKaCa)
cd CCK
```

### Passo 2: Compilar com CMake

```bash
cmake -B build -S .
cmake --build build
```

### Passo 3: Executar o Emulador

```bash
./build/CCK caminho/para/sua/rom.gba
```

---

## 🎮 Controles Padrão

| Tecla     | Botão no GBA |
| --------- | ------------ |
| Setas     | D-Pad        |
| Z         | B            |
| X         | A            |
| A         | L            |
| S         | R            |
| Enter     | Start        |
| Backspace | Select       |

---

## 🚧 Principais Desafios Técnicos

* Pipeline de instruções ARM com **ciclos exatos**;
* Sincronização entre **CPU, DMA, PPU e APU**;
* Renderização precisa dos **modos gráficos e efeitos especiais**;
* Áudio estéreo com **baixa latência em tempo real**;
* Save states, carregamento de **BIOS externa**;
* Compatibilidade com **jogos exigentes** e comportamento fiel ao console original.

---

## 🚀 Roadmap

* ✅ Estrutura base com CMake
* ✅ Emulação completa da **CPU ARM7TDMI** (ARM + Thumb)
* ✅ Implementação do **MMU**
* ✅ Primeira renderização via PPU (Modo 3)
* ⏳ Interface com SDL2 e input
* ⏳ Suporte a **DMA**
* ⏳ Áudio via **APU**
* ⏳ Save & Load States
* ⏳ Testes com jogos reais e suíte mGBA
* ⏳ **Primeira release pública!**

---

## 🤝 Como Contribuir

Adoraríamos sua ajuda! Siga este fluxo:

1. Abra uma **Issue** descrevendo o bug ou sugestão.
2. Faça um **fork** do projeto.
3. Crie uma branch: `git checkout -b feature/minha-feature`
4. Realize as alterações e commite:
   `git commit -m "feat: adiciona minha feature"`
5. Envie um **Pull Request** para a `main`.

---

## 📜 Licença

Este projeto é licenciado sob a **MIT License**. Consulte o arquivo `LICENSE` para mais detalhes.