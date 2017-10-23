#include <iostream>
int main(){
	int a, b, c, x, y;
	std::cout<<"Vvedite pervoe chislo - a = ";
	std::cin>>a;
	std::cout<<"Vvedite vtoroe chislo - b = ";
	std::cin>>b;
	std::cout<<"Vvedite tret'e chislo - c = ";
	std::cin>>c;
	x = 0;
	y = 0;
	if (a>0) {
		x=x+1;
	}
	else{
		y=y+1;
	}
		if (b>0) {
		x=x+1;
	}
	else{
		y=y+1;
	}
		if (c>0) {
		x=x+1;
	}
	else{
		y=y+1;
	}
std::cout<<"Polojitel'nyh chisel = "<<x<<std::endl;
std::cout<<"Otricatel'nyh chisel = "<<y<<std::endl;	
}
