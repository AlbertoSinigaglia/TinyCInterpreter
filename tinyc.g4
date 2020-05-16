grammar tinyc;

start     : program EOF ;
program   : statement | statement program ;
          
statement : decl ';' | assign ';' | branch | loop | out ';' ;

decl      : 'int' ID ;
assign    : ID '=' expr ;
out       : 'write' '(' expr ')' | 'write' '(' STRING ')' ;
input     : 'read' '(' ')' ;
branch    : 'if' '(' guard ')'  '{' program '}'
          | 'if' '(' guard ')' '{' program '}' 'else' '{' program '}' ;
loop      : 'while' '(' guard ')' '{' program '}' ;
expr      : NUMBER | ID | input | expr PLUS expr | expr MINUS expr | expr TIMES expr 
          | expr DIV expr | expr MOD expr | '(' expr ')' ;
guard     : relation | NOT '(' guard ')' | guard AND guard | guard OR guard | '(' guard ')';
relation  : expr LT expr | expr LEQ expr | expr EQ expr | expr NEQ expr | expr GEQ expr | expr GT expr ;

MINUS     : '-' ;
PLUS      : '+' ;
TIMES     : '*' ;
DIV       : '/' ;
MOD       : '%' ;
EQ        : '==' ;
LT        : '<' ;
LEQ       : '<=' ;
GT        : '>' ;
GEQ       : '>=' ;
NEQ       : '!=' ;
AND       : '&&' ;
OR        : '||' ;
NOT       : '!' ;
ID        : [a-z]+ ;
NUMBER    : [0-9]+ ;
STRING    : '"' .*? '"' ; // .*? matches anything until the first "
COMMENT   : '/*' .*? '*/' -> skip ; // .*? matches anything until the first */
LINE_COMMENT : '//' ~[\r\n]* -> skip ;
WS        : [ \n\t\r]+ -> skip;
ErrorChar : . ;

