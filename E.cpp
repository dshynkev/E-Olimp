#include <iostream>
#include <vector>
using namespace std;
const char* _template[]={"000", "001", "010", "011", "100", "101", "110", "111"};
vector<char> read_octal()
{
	vector<char> buffer;
	char c=0;
	while((c=getchar())!='\n')
		buffer.push_back(c);
	return buffer;
}
vector<const char*> oct_to_bin(vector<char>& octal)
{
	size_t counter;
	vector<const char*> binary;
	binary.resize(octal.size());
	for(counter=0; counter<octal.size(); ++counter)
	{
		binary[counter]=_template[octal[counter]-'0'];
	}
	return binary;
}
void print(vector<const char*>& binary)
{
	size_t i;
	if(binary[0][0]!='0')
		printf("%s", binary[0]);
	else
		if(binary[0][1]!='0')
			printf("%c%c", binary[0][1], binary[0][2]);
		else
			if(binary[0][2]!='0')
				printf("%c", binary[0][2]);
	for(i=1; i<binary.size(); ++i)
		printf("%s", binary[i]);
	printf("\n");
}
int main()
{
	vector<char> octal;
	vector<const char*> binary;
	octal=read_octal();
	binary=oct_to_bin(octal);
	print(binary);
	return 0;
}

