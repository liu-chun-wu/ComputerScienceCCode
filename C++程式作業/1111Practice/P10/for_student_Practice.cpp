# include<iostream>
# include<vector>
using namespace std;

// ========== Global Variables ========== 

vector <string> g_token_list; // Global token list

// ========== Print Function ==========

void print_types_info( int i_num, int n_num, int s_num ) {
  cout << "Identifier: " << i_num << ", " << "Number: " << n_num << ", " << "Special Symbol: " << s_num << endl;
}

void print_invalid_command() {
  cout << "Invalid command." << endl;
}

void print_token( string token ) {
  cout << "[" << token << "]" << endl;
} 

void print_token_sum( int sum ) {
  cout << "Total number of tokens: " << sum << endl;
} 

// ========== Other Functions ==========

void skip_white_space() {
  // skip white space such as ' ', '\t', '\n', and make g_char the first character of the next token

  /*Your Code Here*/

}

bool is_identifier( char c ) {
  // given a character, return true if it is a part of a identifier

  bool result = false;
  /*Your Code Here*/
  return result;

} 

bool is_number( char c ) {
  // given a character, return true if it is a number

  bool result = false;
  /*Your Code Here*/
  return result;

} 

bool is_special_symbol( char c ) {
  // given a character, return true if it is a special symbol or not

  bool result = false;
  /*Your Code Here*/
  return result;

}

void get_user_input() {
  // Get user input until END_OF_FILE appears, and store the tokens into g_token_list.

  /*Your Code Here*/

} 

string get_token_type( string token ) {
  // Given a token, return the type of the token.(Identifier, Number, or Special Symbol?)

  string type;
  /*Your Code Here*/
  return type;

} 

void excute_command( int cmd ) {
  // Given a command:
  // if command == 1, print token sum
  // if command == 2, print all tokens
  // if command == 3, token sum in each cases
} 

// ========== Main Function ==========

int main() {
  // Get User Input form the input stream, and execute the command until command == 0.

  /*Your Code Here*/

}
