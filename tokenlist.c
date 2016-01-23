//
//  tokenlist.c
//  lisp-lexer
//
//  Created by Minh Pham on 1/23/16.
//  Copyright © 2016 Minh Pham. All rights reserved.
//

#include "tokenlist.h"

void toklist_print(const tokenlist *list) {
  if (!list)
    return;
  
  token *cur = list->head;
  for (int i = 0; cur; ++i) {
    tok_print(cur);
  }
}