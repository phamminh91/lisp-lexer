//
//  lexer.h
//  lisp-lexer
//
//  Created by Minh Pham on 1/23/16.
//  Copyright © 2016 Minh Pham. All rights reserved.
//

#ifndef LEXER_H_
#define LEXER_H_

#include <stdio.h>
#include <stdlib.h>
#include "token.h"
#include "tokenlist.h"

tokenlist* lex(const char *);
void toklist_print(const tokenlist *);

#endif /* lexer_h */
