#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


void printarr(vector<int> arr) {
	for(int i=0;i<arr.size()-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<arr[arr.size()-1]<<endl;
}

void insertionSort(vector <int>  arr) {
		int lastval = arr[arr.size()-1];
		int lastpos = arr.size()-1;
		int newloc=lastpos;
		for(int i=lastpos-1;i>=0;i--){
			if(arr[i] > lastval)
				arr[i+1]= arr[i];
			else {
				newloc = i;
				break;
			}
			printarr(arr);
		}
		arr[newloc+1] = lastval;
printarr(arr);

}


int main(void) {
	 vector <int>  _ar;
	 int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
	 int _ar_tmp;
	 cin >> _ar_tmp;
	 _ar.push_back(_ar_tmp); 
}

insertionSort(_ar);
	 return 0;
}
