#include<bits/stdc++.h>
using namespace std;

int sz;
string tmp;
vector <int> row, col;
int m[100], solve[10][10];

int main (){
	printf("Size: ");
	scanf("%d", &sz);
	printf("Row Rules: ");
	for(int i=0;i<sz;++i){
		cin>>tmp;
		if(tmp=="-") row.push_back(0);
		else{
			stringstream convert(tmp);
			int x=0;
			convert>>x;
			row.push_back(x);
		}
	}
	printf("Column Rules: ");
	for(int i=0;i<sz;++i){
		cin>>tmp;
		if(tmp=="-") col.push_back(0);
		else{
			stringstream convert(tmp);
			int x=0;
			convert>>x;
			col.push_back(x);
		}
	}
	for(int i=0;i<sz*sz;++i){
		m[i]=i+1;
	}
	do{
		for(int i=0;i<sz*sz;++i){
			solve[i/sz][i%sz]=m[i];
		}
		for(int i=0;i<sz;++i){
			int sum=0;
			for(int j=0;j<sz;++j){
				sum+=solve[i][j];
			}
			if(row[i]>0 && sum!=row[i]) goto skip;
		}
		for(int i=0;i<sz;++i){
			int sum=0;
			for(int j=0;j<sz;++j){
				sum+=solve[i][j];
			}
			if(row[i]>0 && sum!=row[i]) goto skip;
		}
		printf("------------ Matrix Solution: -------------\n");
		for(int i=0;i<sz;++i){
			printf("%d", solve[i][0]);
			for(int j=1;j<sz;j++){
				printf(" %d", solve[i][j]);
			}
			printf("\n");
		}
		skip:;
	}while(next_permutation(m, m+sz*sz));
}
