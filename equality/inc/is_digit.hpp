
void is_digit(std::vector<std::string> my_string){
		std::vector<char> number{'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'}; 
		std::string temp;
		for(int i = 0; i < my_string.size(); ++i){	
		temp = my_string[i];
		for(int j = 0; j < temp.size(); ++j){ 
			for(int k = 0; k < 10; ++k){
				if(number[k] == temp[j]){
					std::cout<<temp<<std::endl;
				}	
			}
		}
	}
}

