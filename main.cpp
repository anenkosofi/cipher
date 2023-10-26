#include <iostream>
#include <string>

using namespace std;

int main()
{
  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string cipher{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
  string message{};
  string encrypted_message{};
  string decrypted_message{};

  cout << "Enter a secret message:\n"
       << endl;
  getline(cin, message);

  for (auto character : message)
  {
    size_t index = alphabet.find(character);
    if (index != std::string::npos)
    {
      encrypted_message += cipher.at(index);
    }
    else
    {
      encrypted_message += character;
    }
  }

  cout << "Encrypting message..." << endl;
  cout << "encrypted message: " << encrypted_message << endl;

  for (auto character : encrypted_message)
  {
    size_t index = cipher.find(character);
    if (index != std::string::npos)
    {
      decrypted_message += alphabet.at(index);
    }
    else
    {
      decrypted_message += character;
    }
  }

  cout << "Decrypting message..." << endl;
  cout << "Decrypted message: " << decrypted_message << endl;

  return 0;
}
