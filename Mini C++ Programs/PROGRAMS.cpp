#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<fstream>
using namespace std;

// 1. WAP TO PRINT THE SUM AND PRODUCT OF AN INTEGER

int main(){
	int n;
	cout<<"Enter Integer: ";
	cin>>n; 
	int i, sum = 0;
	int prd = 1;
	do{
		i = n%10;
		sum = sum+i;
		prd = prd*i;
		n = n/10;
	}
	while(n!=0);
	cout<<"SUM: "<<sum;
	cout<<"PRD: "<<prd;
	return 0; 
}


// 2. WAP TO REVERSE AN INTEGER



int main(){
	int n;
	cout<<"Enter Integer: ";
	cin>>n;
	int i, rev = 0;
	do{
		i = n%10;
		rev = rev*10+i;
		n = n/10;
	}
	while(n!=0);
	cout<<"REVERSE: "<<rev;
	return 0; 
}



// 3. WAP SUM OF SERIES 1



int main(){
	int n;
	float sum = 0;
	cout<<"Enter Range: ";
	cin>>n;
	for(float i = 1; i<=n; i++)
		sum = sum + 1/i;  
	cout<<"Sum: "<<sum;
	return 0;
}



// 4. WAP SUM OF SERIES 2



int main(){
	int n;
	int sum = 0;
	cout<<"Enter Range: ";
	cin>>n;
	for(int i = 1; i<=n; i++)
		sum = sum + pow(-1,i)*i;
	cout<<"Sum: "<<sum;
	return 0;
}
	


// 5. WAP CHECK PALINDROME



char main(){
	char a[6], b[6];
	cout<<"Input string: ";
	cin.getline(a,6);
	int j = strlen(a)-1;
	for(int i =0; i<strlen(a); i++){
		b[i]=a[j];
		j-=1;
	} 
	cout<<" \n"<<b;
	return 0;
}



// 6. WAP CHECK PRIME



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


long int checkprime(long int x);
long int checkprime(long int x){
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



// 7. WAP FIND FACTORS OF A NUMBER



int main(){
	int n;
	cout<<"Enter number: ";
	cin>>n;
	for(int j=2; j<=(n/2); j++){
		if(n%j==0)
			cout<<j<<" \n";
	}
	return 0;
}



// 8. WAP USE A MACRO TO SWAP TWO NUMBERS

// 9. WAP TRIANGLE PATTERN



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



// 10. ARRAY FUNCTIONS



#define size 5
int main()
{
	int l[size];
	int sum, avg;
	for(int i = 0; i<size; i++){
		cin>>l[i];
		sum+=l[i];
	}

	avg=(sum/size);
	

	int ss=l[0];
	int ls=l[0];
	for(int i = 1; i<size; i++){
		if(l[i]<ss)
			ss=l[i];
		if(l[i]>ls)
			ls=l[i];
	}
	
	

	cout<<"Press: 1 for Printing Even Terms \n 2 for Printing Odd Terms \n 3 for Sum and Average \n 4 for Printing Maximum and Minimum \n 5 for Printing in Reverse Order \n";
	int x;
	cin>>x;
	switch(x){
		case 1:
			for(int i = 0; i<size; i=i+2)
				cout<<l[i];
			break
			
		case 2:
			for(int i = 1; i<size; i=i+2)
				cout<<l[i];
			break
		case 3:
			cout<<"Sum: "<<sum;
			cout<<"Average: "<<avg;
			break
		case 4:
			cout<<"Smallest: "<<ss;
			cout<<"Largest: "<<ls<<" \n";
			break
		case 5:
			for(int i=(size-1); i>=0; i--)
				cout<<l[i];
			break
	}
				
	return 0;

}
      


//11. TABLE RELATED

//12. SWAP TWO NUMBERS USING POINTERS



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



//13. ADDRESSES AS ARGUMENTS FOR FUNCTION



void alter(int*, int*);
int main(){
	int no1, no2;
	cout<<"Input numbers";
	cin>>no1>>no2;
	alter(&no1,&no2);
	cout<<no1<<" \n"<<no2;
	return 0;
}

void alter(int* n1, int* n2){
	*n1 = 10;
	*n2 = 20;
}



//14. CIRCLE STUFF

float* circle(float);
float l[2];
int main(){
	float r;
	cin>>r;
	float *p = circle(r);
//	cout<<"Ad: "<<p<<endl;
	for(int i=0; i<2; i++){
       
		cout<<*(p+i)<<endl;}
	return 0;
}

float* circle(float n){
	float area = (M_PI*n*n);
	float circ = (2*M_PI*n);
	l[0]=circ;
	l[1]=area;
	float *ptr = l;
	return ptr;
}



// 15. DYNAMIC MEMORY ALLOCATION FUNCTIONS RELATED



// 16. STRING OPERATIONS



// 17. MERGING TWO ARRAYS

// 18. DISPLAY FIBONACCI


int rfibonacci(int);	//recursive function
void ifibonacci(int);	//iterative function

int rfibonacci(int n){
	if(n==0 or n==1)
		return 1;
	else{
		int f = rfibonacci(n-1)+rfibonacci(n-2);
		return(f);	
	}	
}

void ifibonacci(int n){
	int a = 1;
	int b = 1;
	cout<<a<<" "<<b<<" ";
	for(int cnt = 0; cnt<=(n-2); cnt++){
		int c = a+b;
		cout<<c<<" ";
		a = b;
		b = c;	
	cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter no: ";
	cin>>n;
	for(int i=0; i<=n; i++)
		cout<<rfibonacci(i)<<" \n";
	ifibonacci(n);
}



// 19. CALCULATE FACTORIAL

int rfactorial(int);	//recursive function
void ifactorial(int);	//iterative function

int main(){
	int n;
	cout<<"Enter no: ";
	cin>>n;
	cout<<rfactorial(n);
	cout<<endl;
	ifactorial(n);	
}

int rfactorial(int n){
		if(n == 0)
			return 1;
		else
			return(n*rfactorial(n-1));
	}

void ifactorial(int m){
	int p = 1;
	for(int i = 1; i<=m; i++){
		p = p*i;
	}
	cout<<p<<endl;
}


// 20. CALCULATE GCD

int rgcd(int, int);
void igcd(int, int);

int main(){
	int n1, n2;
	cout<<"Enter nos: ";
	cin>>n1>>n2;
	// cout<<(rgcd(n1,n2))<<endl;
	igcd(n1,n2);
}

int rgcd(int n1, int n2){
	if(n2==0)
		return n1;
	else
		return rgcd(n2, n1%n2);
}

void igcd(int n1, int n2){
	int n,f;
	int l = 1;
	if(n1>n2)
		n = n2;
	else
		n = n1;
	for(int i = 1; i<=n; i++){
		if(n1%i==0 and n2%i==0){
			f = i;
			if(f>=l)
				l = f;
		}
	}
	cout<<f;
}



// 21. CREATE MATRIX USING TEMPLATES

// 22. PERSON CLASS

class Person{
protected:
	int num;
	int age;
public:
	Person(){ }
	virtual void display(){cout<<num<<" "<<age<<endl;}
};

// Person::Person(int n1, int n2){
// 	num = n1;
// 	age = n2;
// }

class Student:public Person{
private:
	int grade;
public:
	Student(int, int, int);
	virtual void display(){cout<<num<<" "<<age<<" "<<grade<<endl;}
};

Student::Student(int n1, int n2, int n3){
	num = n1;
	age = n2;
	grade = n3;
}


class Teacher:public Person{
private:
	int sub;
public:
	Teacher(int, int, int);
	virtual void display(){cout<<num<<" "<<age<<" "<<sub<<endl;}
};

Teacher::Teacher(int n1, int n2, int n3){
	num = n1;
	age = n2;
	sub = n3;
}


int main(int argc, char* argv[]){
	Student s1(atoi(argv[3]),atoi(argv[4]),atoi(argv[5]));
	Teacher t1(atoi(argv[6]),atoi(argv[7]),atoi(argv[8]));
	s1.display();
	t1.display();
	delete(&s1);
	s1.display();
	return 0;
}



// 23. TRIANGLE CLASS **

class Triangle{
	private:
		int a;
		int b;
		int c;
		int area;
		int peri;
	public:
		Triangle(int, int, int);
		int EqArea(int);
		int IsArea(int, int);
		int ScArea(int, int, int);
};

Triangle::Triangle(int n1, int n2, int n3){
	a = n1; b = n2; c= n3;
}

int Triangle::EqArea(int n1){
	area = sqrt(3)*n1*n1/4;
	return area;
}

int Triangle::IsArea(int n1, int n2){
	//n1 is length of equal sides
	area = (n2*sqrt((4*n1*n1)-(n2*n2)))/(2*a);
	return area;
}

int Triangle::ScArea(int n1, int n2, int n3){
	peri = n1+n2+n3;
	int s = peri/2;
	area = sqrt(s*(s-n1)*(s-n2)*(s-n3));
	return area;
}

int main(){

}



// 24. BOX CLASS

class Box{
private:
	int l;
	int b;
	int h;
	int sarea;
	int vol;
public:
	Box(int, int, int);
	int SurfaceArea();
	int Volume();
	void Show();
	Box operator++();
	Box operator++(int);
	Box operator--();
	Box operator--(int);
	friend Box operator==(Box, Box);


};

Box::Box(int n1, int n2, int n3){
	l = n1; b = n2; h = n3;
	if(l==b and b==h and h==l)
		cout<<"CUBE CREATED"<<endl;
	else
		cout<<"CUBOID CREATED"<<endl;
}

void Box::Show(){
	cout<<l<<" "<<b<<" "<<h<<endl;
}

int Box::SurfaceArea(){
	sarea = 2*((l*b)+(b*h)+(h*l));
	return sarea;
}

int Box::Volume(){
	vol = l*b*h;
	return vol;
}

Box Box::operator++(){
	l++; b++; h++;
	return (*this);
}

Box Box::operator++(int){
	Box copy(*this);
	l++; b++; h++;
	return copy;
}

Box Box::operator--(){
	l--; b--; h--;
	return (*this);
}

Box Box::operator--(int){
	Box copy(*this);
	l--; b--; h--;
	return copy;
}

Box operator==(Box b1, Box b2){
	if(b1.l==(b2.l) and b1.b==(b2.b) and b1.h==(b2.h))
		cout<<"EQUAL";
	else
		cout<<"UNEQUAL";
}

int main(int argc, char* argv[]){
	Box b1(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]));
	Box b2(atoi(argv[4]),atoi(argv[5]),atoi(argv[6]));
	// cout<<b1.SurfaceArea()<<endl;
	// cout<<b1.Volume()<<endl;
	// b1++.Show();
	// (++b1).Show();
	// b1.Show();
	// b1--.Show();
	// (--b1).Show();
	b2.Show();
	b1.Show();
	b1==b2;
	return 0;

}



// 25. CREATE A STRUCTURE

// 26. RETRIEVE INFO FROM FILE **


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





// 27. COPY INFO FROM ONE FILE TO ANOTHER AFTER REMOVING WHITESPACES




// 28. REVERSING ARRAY

#define n 6
void reverse(int* p);
void swap(int *n1,int *n2);
void print(int*);

int main(int argc, char* argv[]){
	int l[] = {atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6])};
	print(l);
	reverse(l);
	print(l);

	return 0;
}

void reverse(int* p){
	int k = (n-1);
	for(int j = 0; j<n/2; j++){
		swap((p+j),(p+k));		
		k--;
	}
	return;
}
	
void swap(int *n1,int *n2){
	int tmp; 
	tmp=*n1;
	*n1=*n2;
	*n2=tmp;
}  

void print(int* a){
	for(int i = 0; i<n; i++)
		cout<<a[i];
	cout<<endl;
}

  

// 29. PRINT ARRAY IN ASCENDING AND DESCENDING ORDER


