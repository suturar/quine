#include <stdio.h>

const char *program = "#include <stdio.h>\n\nconst char *program = \"\";\n\nint main(void)\n{\n  int i = 0;\n  while(program[i] != \'\\\"\') {    \n    putchar(program[i]);\n    ++i;\n  }\n  putchar(\'\\\"\');\n  int j = 0;\n  while(program[j] != 0) {    \n    switch(program[j]) {\n    case \'\\\"\':\n      putchar(\'\\\\\');\n      putchar(\'\\\"\');\n      break;\n    case \'\\n\':\n      putchar(\'\\\\\');\n      putchar(\'n\');\n      break;\n    case \'\\\'\':\n      putchar(\'\\\\\');\n      putchar(\'\\\'\');\n      break;\n    case \'\\\\\':\n      putchar(\'\\\\\');\n      putchar(\'\\\\\');\n      break;\n    default:\n      putchar(program[j]);\n    }\n    ++j;\n  }\n  ++i;\n  while(program[i] != 0) {   \n    putchar(program[i]);\n    ++i;\n  }\n\n  return 0;\n}\n";

int main(void)
{
  int i = 0;
  while(program[i] != '\"') {    
    putchar(program[i]);
    ++i;
  }
  putchar('\"');
  int j = 0;
  while(program[j] != 0) {    
    switch(program[j]) {
    case '\"':
      putchar('\\');
      putchar('\"');
      break;
    case '\n':
      putchar('\\');
      putchar('n');
      break;
    case '\'':
      putchar('\\');
      putchar('\'');
      break;
    case '\\':
      putchar('\\');
      putchar('\\');
      break;
    default:
      putchar(program[j]);
    }
    ++j;
  }
  ++i;
  while(program[i] != 0) {   
    putchar(program[i]);
    ++i;
  }

  return 0;
}
