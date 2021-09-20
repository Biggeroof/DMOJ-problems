#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void pairsort(double a[], double b[], int n) 
{ 
    pair<double, double> array[n]; 
  
    for (int i = 0; i < n; i++)  
    { 
        array[i].first = a[i]; 
        array[i].second = b[i]; 
    } 
  
    sort(array, array + n); 
       
    for (int i = 0; i < n; i++)  
    { 
        a[i] = array[i].first; 
        b[i] = array[i].second; 
    } 
}

int main(){
	
	int n;
	double speed, maxSpeed = 0; 
	cin >> n; 
	double times[n] = {0};
	double places[n] = {0};
	
	for(int i = 0; i < n; i++){
		cin >> times[i] >> places[i];
	}
	
	pairsort(times, places, n);
	
	for(int i = 1; i < n; i++){
		speed = abs(places[i] - places[i - 1]) / (times[i] - times[i - 1]);
		if(speed > maxSpeed){
			maxSpeed = speed;
		}
	
	}
	
	cout << fixed << setprecision(5) << maxSpeed << endl;
	}