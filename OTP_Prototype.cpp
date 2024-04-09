#include <iostream>
#include <string>
#include <random>
using namespace std;
string generate_random_key(int length){
	string key;
	static const char alphabet[]=
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<>dis(0,sizeof(alphabet)-2);
	for(int i=0;i<length;i++){
		key+=alphabet[dis(gen)];
	}
	return key;
}
string encrypt(const string&plain_text,const string&key){
	string encrypted_text;
	for(size_t i=0;i<plain_text.length();i++){
		char encrypted_char=plain_text[i]^key[i];
		encrypted_text += encrypted_char;
	}
	return encrypted_text;
}
int main(){
	string plain_text;
	cout<<"Enter the text to be encrypted:"<<endl;
	cin>>plain_text;
	string key=generate_random_key(plain_text.length());
	string encrypted_text=encrypt(plain_text,key);
	cout<<"plain text:"<<plain_text<<endl;
	cout<<"Key:"<<key<<endl;
	cout<<"Encrypted text:"<<encrypted_text<<endl;
	system("pause");
	return 0;
}