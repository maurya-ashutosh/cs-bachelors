// 1. PROGRAMMING CONSTRUCTS, BASIC DATA TYPES, CONSTANTS AND VARIABLES
// 2. CONTROL STRUCUTRES IN CONDITIONALS, ARITHMETIC AND LOGICAL EXPRESSIONS, ASSIGNMENT
// 3. LOOPING
// 4. FUNCTIONS
// 5. STRINGS AND ARRAYS
// 6. FILE HANDLING
// 7. ABSTRACTION AND ENCAPSULATION, PROCEDURAL ABSTRACTION, OBJECTS AND CLASSES
// 8. INHERITANCE, POLYMORPHISM
// 9. EXCEPTION HANDLING






#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<cmath>
#include<stdlib.h>

#include<fstream>

using namespace std;
/*int main(){
	int n, smallest, largest, i = 0;
	while(cin>>n){
		if(i == 0){
			smallest = n;
			largest = n;
		}

		else
			if(n<smallest)
				smallest = n;
			else if(n>largest)
				largest = n;
		i++;
	}
	cout<<"Smallest: "<<smallest<<" \n";
	cout<<"Largest: "<<largest<<" \n";
	return 0;
}


int main(){
	int n = 1;
	natural:{
		cout<<n;
		n++;
	}
	if(n<=50)
		goto natural;
}


long int rfactorial(int no);
int main(){
	long int n;
	cout<<"Enter no: ";
	cin>>n;
	cout<<rfactorial(n);
	cout<<" \n";
}
long int rfactorial(int no){
		if(no == 0)
			return 1;
		else
			return(no*rfactorial(no-1));
	}



int fibonacci(int n);
int fibonacci(int n){
	if(n==0 or n==1)
		return 1;
	else{
		int f = fibonacci(n-1)+fibonacci(n-2);
		return(f);
		
	}	
}
int main(){
	int n;
	cout<<"Enter no: ";
	cin>>n;
	for(int i=0; i<=n; i++)
		cout<<fibonacci(i)<<" \n";

}


void print(int n);
void print(int n){
	if(n==0)
		return;
	else{
		cout<<n<<"#";
		print(n-1);
		cout<<" \n";
		cout<<n<<"$";
	}
}
int main(){
	print(5);
	return 0;
}



int main(){
	int n;
	cin>>n;
	for(int i=0; i<=n; i++){
		for(int j=1; j<=i; j++) 
			cout<<"*";
		cout<<" \n";

	}
	return 0;
}



int main(){
	int n;
	cin>>n;
	for(int i=0; i<=n; i++){
		for(int j=(n-i); j>=0; j--) 
			cout<<"*";
		cout<<" \n";

	}
	return 0;
}



int main(){
	int n;
	cin>>n;
	for(int i=0; i<=n; i++){
		for(int j=1; j<=i; j++)
			cout<<" ";
		for(int k=(n-i); k>=1; k--)
			cout<<"*";
		cout<<" \n";

	}
	return 0;
}



//PYRAMID
int main(){
	int n;
	cin>>n;
	for(int i=0; i<=n; i++){
		for(int k=(n-i); k>=1; k--)
			cout<<" ";
		for(int j=1; j<=((2*i)-1); j++)
			cout<<"*";		
		cout<<" \n";

	}
	return 0;
}


//CHECK PRIME


int main(){
	cout<<"Range? :";
	int n;
	cin>>n;
	for(int i=2; i<=n; i++){
		int flag = 1;
		flag = checkprime(i);
		if(flag == 1)
			cout<<i<<" \n";
	}
}


int checkprime(long int x);
int checkprime(long int x){
	int flag = 1;
	for(long int j=2; j<=sqrt(x); j++){
		if(x%j==0)
			flag = 0;
	}
	if(flag == 1)
		cout<<"YES PRIME";
	else	
		cout<<"NO";
}

int main(){
	checkprime(9576890767);
}
				

#define size 5
int main()
{
	int marks[size];
	for(int i = 0; i<size; i++)
		cin>>marks[i];
	
	for(int i = 0; i<size; i=i+2)
		cout<<marks[i];

	for(int i = 1; i<size; i=i+2)
		cout<<marks[i];
	return 0;

}


int main(){
	int x=1;
	int y=3;
	int z=0;
	switch(x){
		case 0:
			x=2;
			y=3;
			break;
		case 1:
			x=4;
			break;
		default:
			x=1;
			y=3;
	}
	cout<<x<<y<<z;

	cout<<x++;
	cout<<x;
}


int main(){
	int cb[8][8];
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if((i+j)%2==0)
				cout<<"0";
			else
				cout<<"1";
		
		}	
		cout<<" \n";	
	}
}

void swap(int *n1, int *n2);
int main(){
	int no1, no2;
	cout<<"Input numbers";
	cin>>no1>>no2;
	swap(&no1,&no2);
	cout<<no1<<" \n"<<no2;
	return 0;
}
void swap(int *n1,int *n2){
	int tmp; 
	tmp=*n1;
	*n1=*n2;
	*n2=tmp;
}

int *larger(int *n1, int *n2);
int main(){
	int n1,n2, *ptr;
	cout<<"Enter numbers";
	cin>>n1>>n2;
	ptr=larger(&n1, &n2);
	cout<<"Larger: "<<*ptr;
	return 0;
}
int *larger(int *n1, int *n2){
	if(*n1>*n2)
		return n1;
	else
		return n2;
}



int main(){
	int l[5]= {1,2,3,4,5};
	int *ptr=l;
	int size = 5;
	for(int i=0; i<size; i++)
		cout<<(ptr+i)<<" no: "<<l[i]<<" \n"; 
	return 0;
}



int main(){
	int l[2]={1,2};
        int *ptr = &l[0];
        cout<<l<<endl<<ptr;




class fraction{
	private:
		int num;
		int den;
	public:
		fraction(int n=1, int d=1);
		void print() const;
		fraction operator+(fraction);
		fraction operator++();
		fraction operator++(int);
		friend void test(fraction f);
};

int gcd(int, int);

int gcd(int n1, int n2){
	if(n2==0)
		return n1;
	else
		return gcd(n2, n1%n2);
}


fraction::fraction(int n, int d){
	if(d==0){
		cout<<"ERROR";
		exit(1);
	}
	if(d<0){
		n=-n;
		d=-d;
	}
	num=n/gcd(n,d);
	den=d/gcd(n,d);
}

void fraction::print() const{
	cout<<num<<"/"<<den<<endl;
}

fraction fraction::operator+(fraction f1){		

	int a=num*f1.den+f1.num*den;
	int b=den*f1.den;
	return fraction (a,b);
	
}

fraction fraction::operator++(){
	num = num + den;
	return *this;
	
}

fraction fraction::operator++(int){
	fraction copy(*this);
	num = num+den;
	return copy;
}

int main(int argc, char* argv[]){
	fraction frc1(atoi(argv[1]), atoi(argv[2]));
	fraction frc2(atoi(argv[3]), atoi(argv[4]));
	fraction frc3 = frc1+frc2;
	frc3.print();
	test(frc3);
	++frc3;
	frc3.print();
	frc3++.print();
	frc3.print();
	return 0;
	
}

void test(fraction f){
	cout<<"FRIEND!!!"<<endl;
	cout<<f.num<< " "<<f.den<<endl;
}


class Polygon{
	protected:
		double area;
		double perimeter;
	public:
		void printarea() const;
		void printperi() const;
		virtual void print() {cout<<"POLYGON"<<endl;}
};

class Triangle : public Polygon{
	private:
		double a;
		double b;
		double c;
	public:
		Triangle(double, double, double);
		void calcarea();
		void calcperi();
		virtual void print() {cout<<"TRIANGLE"<<endl;}
};

class Square : public Polygon{
	private:

		double s;
	public:
		Square(double);
		void calcarea();
		void calcperi();
		virtual void print() {cout<<"SQUARE"<<endl;}
};

Triangle::Triangle(double n1, double n2, double n3){
	a = n1;
	b = n2;
	c = n3;
}

Square::Square(double n1){
	s = n1;
}

void Polygon::printarea() const{
	cout<<area<<endl;
	return;
}

void Polygon::printperi() const{
	cout<<perimeter<<endl;
	return;
}

void Triangle::calcarea(){
	double mid = perimeter/2;
	area = sqrt(mid*(mid-a)*(mid-b)*(mid-c));
	return;
}

void Square::calcarea(){
	area = s*s;
	return;
}

void Triangle::calcperi(){
	perimeter = a+b+c;
}

void Square::calcperi(){
	perimeter = 4*s;
}


int main(int argc, char* argv[]){
	Triangle t1(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
	Square s1(atoi(argv[4]));
	t1.calcperi();
	t1.calcarea();
	t1.printperi();
	t1.printarea();
	s1.calcperi();
	s1.calcarea();
	s1.printperi();
	s1.printarea();
	
	Polygon* ptr = new Polygon();
	ptr->print();
	delete ptr;
	ptr = new Triangle(3,4,5);
	ptr->print();
	delete ptr;
	
	return 0;
}



int main(){
	ofstream fout;
	fout.open("text.txt");
	if(!fout){
		cout<<"ERROR IN OPENING";
		exit(1);
	}
	char ch;
	while(cin>>ch){
		fout<<ch;
	}
	fout.close();
	
	ifstream fin;
	fin.open("text.txt");

	while(fin>>ch){
		cout<<ch;
	}
	fin.close();
	return 0;
}
	
*/



// file input and output using get and put

/*

int main(){
	ifstream fin;
	ofstream fout;
	char ch;
	
	fout.open("Text.txt");
	if(!fout)
	{
		cout<<"CREATION UNSUCCESSFUL";
		exit(1);
	}
	
	while(cin.get(ch)){
		fout.put(ch);
	}	
	
	fout.close();
	
	fin.open("Text.txt");
	
	if(!fin){
		cout<<"CREATION UNSUCCESSFUL";
		exit(1);
	}
	
	while(fin.get(ch)){
		cout.put(ch);
	}
	
	fin.close();
	return 0;
}

*/

int main(){
	
	ofstream fout;
	ifstream fin;
	char ch;
	string str;
	fout.open("Text.txt");
	
	if(!fout)
		cout<<"ERROR";
		
	while(getline(cin,str,','))
		fout<<str;
//	fout<<str;
	fout.close();
	
	fin.open("Text.txt");
	while(fin>>ch)
		cout<<ch;
//	cout<<ch;
	fin.close();
	
}





