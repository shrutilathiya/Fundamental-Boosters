#include<iostream>

main(){
	
	char a;
	char n;
	
	std::cout<<"Enter value : ";
	std::cin>>n;
	
	if(('a' == n) || ('e' == n) || ('i' == n) || ('o' == n) || ('d' == n)){
		
	std::cout<<"vowel"<<std::endl;
	}
	
	else{
		std::cout<<"consonant"<<std::endl;
	}
}
