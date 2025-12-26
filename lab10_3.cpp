#include<iostream>
#include<fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main (){
	ifstream source;
	source.open("score.txt");
	string textline;
    int count = 0;
    float mean,sd,sum;
	while(getline(source,textline)){
		sum += atof(textline.c_str());
        count++;
	}
    mean = sum/(float)count;
    source.close();
    source.open("score.txt");
    while(getline(source,textline)){
        sd += pow((atof(textline.c_str())-mean),2);
	}
    cout << "Number of data = " << count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << sqrt(sd/(count-1)) << '\n';
    source.close();
	return 0;
}