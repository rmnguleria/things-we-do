#include<iostream>
#include<queue>
using namespace std;
int main(){
	std::queue<int> qu;
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int size = n*n;
	int arr[size];
	for(int i=0;i<size;i++)
		arr[i] = 1;
	int foe1,foe2;
	int dist[1009];
	for(int i=0;i<n;i++){
		dist[i] = 32767;
	}
	dist[a-1] = 0;
	for(int i=0;i<m;i++){
		cin>>foe1>>foe2;
		arr[(foe1-1)*n + foe2 - 1] = 0;
		arr[(foe2-1)*n + foe1 - 1] = 0;
	}
	int time = 0;
	qu.push(a-1);
	bool visited[1009];
	for(int i=0;i<n;i++)
		visited[i] = false;

	visited[a-1] = true;

	while(!qu.empty()){
		int temp_a = qu.front();
		qu.pop();
		for(int i=0;i<n;i++){
			if(!visited[i]){
				if(arr[(temp_a)*n + i] == 1){
					if(i == (b-1)){
						dist[i] = dist[temp_a] + 1;
						break;
					}
					else{
						qu.push(i);
						dist[i] = dist[temp_a] + 1;
						visited[i] = true;
					}
				}
			}
		}
	}
	if(dist[b-1] == 32767){
		cout<<-1;
	}
	else{
		cout<<dist[b-1];
	}
	/* vector<vector<int> > vec;
	// initialize
	for(int i=0;i<n;i++){
		std::vector<int> temp;
		for(int j=0;j<n;j++){
			if(i!=j){
				cout<<"Pushed";
				temp.push_back(j);
			}
		}
		vec.push_back(temp);
	}
	cout<<"Size "<<vec[a-1].size()<<endl;
	int foe1,foe2;
	for(int i=0;i<m;i++){
		cin>>foe1>>foe2;
		for(int i=0;i<vec[foe1-1].size();i++){
			if(vec[foe1-1][i] == foe2){
				vec[foe1-1].erase(vec[foe1-1].begin() + i);
				break;
			}
		}
		for(int i=0;i<vec[foe2-1].size();i++){
			if(vec[foe2-1][i] == foe1){
				vec[foe2-1].erase(vec[foe2-1].begin() + i);
				break;
			}
		}
	}

	int dist[1009];
	for(int i=0;i<n;i++){
		dist[i] = 32767;
	}
	dist[a-1] = 0;

	bool visited[1009];
	for(int i=0;i<n;i++)
		visited[i] = false;

	visited[a-1] = true;

	qu.push(a-1);
	cout << "I am here "<<endl;
	while(!qu.empty()){
		int temp_a = qu.front();
		qu.pop();
		cout<<"Size "<<vec[temp_a].size()<<endl;
		for(int i=0;i<vec[temp_a].size();i++){
			cout<<i<<endl;
			if(!visited[vec[temp_a][i]]){
				if(vec[temp_a][i]==(b)){
					cout<<"Done"<<temp_a<<" "<<b-1<<endl;
					dist[i] = dist[temp_a] + 1;
					break;
				}
				else{
					qu.push(i);
					cout<<temp_a<<" "<<i<<endl;
					dist[i] = dist[temp_a] + 1;
				}
			}
		}
	}
	if(dist[b-1] == 32767){
		cout<<-1;
	}
	else{
		cout<<dist[b-1];
	} */
	return 0;
}