#!/bin/bash

# DEFASM="./Default_asm"
# CHLASM="./asm"

DECOR="default_cor_files/"
CHCOR="challenger_cor_files/"


# $DEFASM

# $DEFASM  
# mv bots/42.s $DECOR

echo -e "\x1B[31m"

cmp $DECOR$"42.s" asm_test.sh

echo -e "\x1B[0m"