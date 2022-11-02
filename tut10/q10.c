#include<stdio.h>
#include<string.h>

#define MAX_CHARACTER_ON_WORD 32
#define MAX_WORD 128


// Question 10
int split_string(char* input, char array_of_strings[MAX_WORD][MAX_CHARACTER_ON_WORD]) {
  // destructure the string into substrings, divided by commas
  // "Halloween, Party, one" => "Halloween", "Party", "one"
  char *token;
  /* get the first token */
  token = strtok(input, ", ");
  /* walk through other tokens */
  int i = 0;
  while( token != NULL ) {
    strcpy(array_of_strings[i], token);
    token = strtok(NULL, ", ");
    i++;
  }

  // returning the number of substring
  return i;
}

// Question 11
void print_substring(char array_of_strings[MAX_WORD][MAX_CHARACTER_ON_WORD], int length) {
  for (int i = 0; i < length; i ++) {
    printf("%s\n", array_of_strings[i]);
  }
}


// Question 12
int substrings_sorted(char array_of_strings[MAX_WORD][MAX_CHARACTER_ON_WORD], int length) {
  if (length == 1) {
    return 1;
  }
  for (int i = 0; i < length - 1; i ++) {
    int res = strcmp(array_of_strings[i], array_of_strings[i+1]);
    if (res > 0) {
      // not in increasing order
      return 1;
    }
  }
  //in increasing order
  return 0;
}

int main() {
  // scan line using fgets
  char input[MAX_WORD * MAX_CHARACTER_ON_WORD];
  char array_of_strings[MAX_WORD][MAX_CHARACTER_ON_WORD];
  fgets(input, MAX_WORD * MAX_CHARACTER_ON_WORD, stdin);
  char* new_line = strchr(input, '\n');
  if (new_line != NULL) {
    new_line = '\0';
  }

  int num_substring = split_string(input, array_of_strings);
  print_substring(array_of_strings, num_substring);
  printf("the order is %d\n", substrings_sorted(array_of_strings, num_substring));
}