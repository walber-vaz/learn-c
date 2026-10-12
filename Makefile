# ==============================================================================
# Makefile - build de C com padrão C23
# ==============================================================================
# Uso:
#   make            -> build em modo release
#   make debug      -> build com símbolos de depuração
#   make run        -> compila e executa
#   make clean      -> remove artefatos
#   make rebuild    -> clean + build
#   make format     -> formata com clang-format (se disponível)
# ==============================================================================

# --- Ferramentas -------------------------------------------------------------
CC      = gcc
RM      = rm -f
MKDIR   = mkdir -p
CLANG_FORMAT ?= clang-format

# --- Diretórios e arquivos ---------------------------------------------------
SRC_DIR   := .
BUILD_DIR := obj
BIN_DIR   := bin
TARGET    := $(BIN_DIR)/main

# Descobre automaticamente todos os .c do diretório atual
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))
DEPS := $(OBJS:.o=.d)

# --- Flags -------------------------------------------------------------------
# C23 + conjunto de avisos rigoroso (boas práticas)
WARNINGS := -Wall -Wextra -Wpedantic -Wshadow -Wconversion \
            -Wstrict-prototypes -Wmissing-prototypes -Wcast-qual \
            -Wformat=2 -Wundef -Werror
STD      := -std=c23

CFLAGS   ?=
CPPFLAGS ?=
LDFLAGS  ?=
LDLIBS   ?=

# Flags de build específicas de cada modo
CFLAGS_RELEASE := -O2 -DNDEBUG
CFLAGS_DEBUG   := -O0 -g3 -fsanitize=address,undefined -fno-omit-frame-pointer

# Dependências de header geradas pelo pré-processador
DEPFLAGS := -MMD -MP

# --- Modo de build (release por padrão) --------------------------------------
BUILD ?= release
ifeq ($(BUILD),debug)
    CFLAGS_MODE := $(CFLAGS_DEBUG)
else
    CFLAGS_MODE := $(CFLAGS_RELEASE)
endif

CFLAGS += $(STD) $(WARNINGS) $(CFLAGS_MODE)
CFLAGS += -I$(SRC_DIR)
ifeq ($(BUILD),debug)
    LDFLAGS += -fsanitize=address,undefined
endif

# --- Metas -------------------------------------------------------------------
.PHONY: all build debug release run clean rebuild format help

all: build

build: $(TARGET)

# Alvo que força a mudança para debug
debug:
	@$(MAKE) BUILD=debug build

release:
	@$(MAKE) BUILD=release build

# Linkagem final
$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS)

# Compilação de cada objeto
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(DEPFLAGS) -c $< -o $@

$(BIN_DIR) $(BUILD_DIR):
	$(MKDIR) $@

run: build
	./$(TARGET)

clean:
	$(RM) -r $(BUILD_DIR) $(BIN_DIR)

rebuild: clean build

format:
	$(CLANG_FORMAT) -i $(SRCS)

help:
	@echo "Metas disponíveis:"
	@echo "  make [build]   Build release (padrão)"
	@echo "  make debug     Build com AddressSanitizer/UBSan e símbolos"
	@echo "  make run       Compila e executa o binário"
	@echo "  make clean     Remove $(BUILD_DIR)/ e $(BIN_DIR)/"
	@echo "  make rebuild   clean + build"
	@echo "  make format    Formata os fontes com clang-format"
	@echo ""
	@echo "Variáveis: CC=$(CC) BUILD=$(BUILD)"

# Inclui dependências de headers (criadas com -MMD)
-include $(DEPS)
